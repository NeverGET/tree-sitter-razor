/**
 * External scanner for tree-sitter-razor.
 *
 * Handles:
 *   - _code_block_start  : '{' that opens a Razor code block
 *   - _code_block_end    : '}' that closes the innermost open block
 *   - _text_chunk        : raw content (HTML/text) not belonging to a Razor node
 *   - _comment_content   : body of @* ... *@ comments
 *
 * We track brace depth so nested { } inside C# code are balanced correctly.
 */

#include "tree_sitter/parser.h"
#include <stdio.h>
#include <string.h>

// Must match the order declared in grammar.js externals array
typedef enum {
  CODE_BLOCK_START,
  CODE_BLOCK_END,
  TEXT_CHUNK,
  COMMENT_CONTENT,
} TokenType;

typedef struct {
  int brace_depth;
} Scanner;

// ---------------------------------------------------------------------------
// Serialise / deserialise scanner state
// ---------------------------------------------------------------------------

static unsigned serialize(void *payload, char *buffer) {
  Scanner *s = (Scanner *)payload;
  buffer[0] = (char)s->brace_depth;
  return 1;
}

static void deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *s = (Scanner *)payload;
  if (length > 0) {
    s->brace_depth = (int)(unsigned char)buffer[0];
  } else {
    s->brace_depth = 0;
  }
}

// ---------------------------------------------------------------------------
// Helpers
// ---------------------------------------------------------------------------

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
static void skip(TSLexer *lexer)    { lexer->advance(lexer, true);  }

// ---------------------------------------------------------------------------
// Main scan function
// ---------------------------------------------------------------------------

static bool scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *s = (Scanner *)payload;

  // --- COMMENT_CONTENT: consume everything until we see '*@' ---
  if (valid_symbols[COMMENT_CONTENT]) {
    bool consumed = false;

    while (lexer->lookahead != 0) {
      // Check for closing '*@'
      if (lexer->lookahead == '*') {
        lexer->mark_end(lexer);
        advance(lexer);
        if (lexer->lookahead == '@') {
          // Don't consume '*@' — let the grammar match it
          if (consumed) {
            lexer->result_symbol = COMMENT_CONTENT;
            return true;
          }
          return false;
        }
        consumed = true;
        continue;
      }

      advance(lexer);
      consumed = true;
    }

    // EOF without closing *@ — still return what we consumed
    if (consumed) {
      lexer->mark_end(lexer);
      lexer->result_symbol = COMMENT_CONTENT;
      return true;
    }
    return false;
  }

  // --- CODE_BLOCK_START: consume an opening '{' ---
  if (valid_symbols[CODE_BLOCK_START] && lexer->lookahead == '{') {
    advance(lexer);
    s->brace_depth++;
    lexer->result_symbol = CODE_BLOCK_START;
    return true;
  }

  // --- CODE_BLOCK_END: consume a closing '}' that matches an open block ---
  if (valid_symbols[CODE_BLOCK_END] && lexer->lookahead == '}' && s->brace_depth > 0) {
    advance(lexer);
    s->brace_depth--;
    lexer->result_symbol = CODE_BLOCK_END;
    return true;
  }

  // --- TEXT_CHUNK: consume raw HTML/text until we hit '@', '<', or EOF ---
  if (valid_symbols[TEXT_CHUNK]) {
    bool consumed = false;

    while (lexer->lookahead != 0) {
      int c = lexer->lookahead;

      // Stop at Razor sigil
      if (c == '@') break;

      // We let HTML tag content pass through as text; the C grammar handles '<'
      // but for raw text outside tags we still include '<' here so HTML content
      // isn't lost. The injections.scm will reinject it into the HTML grammar.
      lexer->mark_end(lexer);
      advance(lexer);
      consumed = true;
    }

    if (consumed) {
      lexer->result_symbol = TEXT_CHUNK;
      return true;
    }
  }

  return false;
}

// ---------------------------------------------------------------------------
// Lifecycle
// ---------------------------------------------------------------------------

void *tree_sitter_razor_external_scanner_create(void) {
  Scanner *s = (Scanner *)malloc(sizeof(Scanner));
  s->brace_depth = 0;
  return s;
}

void tree_sitter_razor_external_scanner_destroy(void *payload) {
  free(payload);
}

bool tree_sitter_razor_external_scanner_scan(
    void *payload, TSLexer *lexer, const bool *valid_symbols) {
  return scan(payload, lexer, valid_symbols);
}

unsigned tree_sitter_razor_external_scanner_serialize(
    void *payload, char *buffer) {
  return serialize(payload, buffer);
}

void tree_sitter_razor_external_scanner_deserialize(
    void *payload, const char *buffer, unsigned length) {
  deserialize(payload, buffer, length);
}
