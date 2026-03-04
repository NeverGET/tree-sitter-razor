#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 89
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 4
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  anon_sym_AT_STAR = 1,
  anon_sym_STAR_AT = 2,
  sym_razor_escaped_at = 3,
  anon_sym_AT = 4,
  aux_sym__any_in_block_token1 = 5,
  anon_sym_model = 6,
  anon_sym_using = 7,
  anon_sym_inject = 8,
  anon_sym_page = 9,
  anon_sym_namespace = 10,
  anon_sym_layout = 11,
  anon_sym_inherits = 12,
  anon_sym_implements = 13,
  anon_sym_addTagHelper = 14,
  anon_sym_removeTagHelper = 15,
  anon_sym_tagHelperPrefix = 16,
  anon_sym_attribute = 17,
  anon_sym_typeparam = 18,
  anon_sym_preservewhitespace = 19,
  aux_sym_razor_directive_token1 = 20,
  anon_sym_section = 21,
  aux_sym_razor_section_block_token1 = 22,
  anon_sym_functions = 23,
  anon_sym_code = 24,
  anon_sym_if = 25,
  anon_sym_else = 26,
  anon_sym_for = 27,
  anon_sym_foreach = 28,
  anon_sym_while = 29,
  anon_sym_switch = 30,
  anon_sym_do = 31,
  anon_sym_try = 32,
  anon_sym_catch = 33,
  anon_sym_finally = 34,
  anon_sym_lock = 35,
  aux_sym_razor_control_flow_token1 = 36,
  aux_sym_razor_else_clause_token1 = 37,
  anon_sym_AT_LPAREN = 38,
  anon_sym_RPAREN = 39,
  anon_sym_LPAREN = 40,
  aux_sym_explicit_expression_body_token1 = 41,
  anon_sym_QMARK = 42,
  anon_sym_DOT = 43,
  anon_sym_LBRACK = 44,
  aux_sym_implicit_expression_body_token1 = 45,
  anon_sym_RBRACK = 46,
  anon_sym_BANG = 47,
  anon_sym_DQUOTE = 48,
  aux_sym_call_args_token1 = 49,
  anon_sym_SQUOTE = 50,
  aux_sym_call_args_token2 = 51,
  aux_sym_call_args_token3 = 52,
  sym__code_block_start = 53,
  sym__code_block_end = 54,
  sym_text_chunk = 55,
  sym__comment_content = 56,
  sym_source_file = 57,
  sym_razor_comment = 58,
  sym_razor_code_block = 59,
  sym_code_block_body = 60,
  sym__any_in_block = 61,
  sym_razor_directive = 62,
  sym_razor_section_block = 63,
  sym_razor_functions_directive = 64,
  sym_razor_control_flow = 65,
  sym_razor_else_clause = 66,
  sym_razor_explicit_expression = 67,
  sym_explicit_expression_body = 68,
  sym_razor_implicit_expression = 69,
  sym_implicit_expression_body = 70,
  sym_call_args = 71,
  aux_sym_source_file_repeat1 = 72,
  aux_sym_code_block_body_repeat1 = 73,
  aux_sym_razor_control_flow_repeat1 = 74,
  aux_sym_explicit_expression_body_repeat1 = 75,
  aux_sym_implicit_expression_body_repeat1 = 76,
  aux_sym_call_args_repeat1 = 77,
  alias_sym_call_arguments = 78,
  alias_sym_csharp_code = 79,
  alias_sym_index_argument = 80,
  alias_sym_section_name = 81,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT_STAR] = "comment_start",
  [anon_sym_STAR_AT] = "comment_end",
  [sym_razor_escaped_at] = "razor_escaped_at",
  [anon_sym_AT] = "@",
  [aux_sym__any_in_block_token1] = "_any_in_block_token1",
  [anon_sym_model] = "directive_name",
  [anon_sym_using] = "directive_name",
  [anon_sym_inject] = "directive_name",
  [anon_sym_page] = "directive_name",
  [anon_sym_namespace] = "directive_name",
  [anon_sym_layout] = "directive_name",
  [anon_sym_inherits] = "directive_name",
  [anon_sym_implements] = "directive_name",
  [anon_sym_addTagHelper] = "directive_name",
  [anon_sym_removeTagHelper] = "directive_name",
  [anon_sym_tagHelperPrefix] = "directive_name",
  [anon_sym_attribute] = "directive_name",
  [anon_sym_typeparam] = "directive_name",
  [anon_sym_preservewhitespace] = "directive_name",
  [aux_sym_razor_directive_token1] = "directive_value",
  [anon_sym_section] = "directive_name",
  [aux_sym_razor_section_block_token1] = "identifier",
  [anon_sym_functions] = "directive_name",
  [anon_sym_code] = "directive_name",
  [anon_sym_if] = "control_keyword",
  [anon_sym_else] = "control_keyword",
  [anon_sym_for] = "control_keyword",
  [anon_sym_foreach] = "control_keyword",
  [anon_sym_while] = "control_keyword",
  [anon_sym_switch] = "control_keyword",
  [anon_sym_do] = "control_keyword",
  [anon_sym_try] = "control_keyword",
  [anon_sym_catch] = "control_keyword",
  [anon_sym_finally] = "control_keyword",
  [anon_sym_lock] = "control_keyword",
  [aux_sym_razor_control_flow_token1] = "control_condition",
  [aux_sym_razor_else_clause_token1] = "control_condition",
  [anon_sym_AT_LPAREN] = "@(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LPAREN] = "(",
  [aux_sym_explicit_expression_body_token1] = "explicit_expression_body_token1",
  [anon_sym_QMARK] = "\?",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [aux_sym_implicit_expression_body_token1] = "implicit_expression_body_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_BANG] = "!",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_call_args_token1] = "call_args_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_call_args_token2] = "call_args_token2",
  [aux_sym_call_args_token3] = "call_args_token3",
  [sym__code_block_start] = "{",
  [sym__code_block_end] = "}",
  [sym_text_chunk] = "text_chunk",
  [sym__comment_content] = "comment_content",
  [sym_source_file] = "source_file",
  [sym_razor_comment] = "razor_comment",
  [sym_razor_code_block] = "razor_code_block",
  [sym_code_block_body] = "razor_content",
  [sym__any_in_block] = "_any_in_block",
  [sym_razor_directive] = "razor_directive",
  [sym_razor_section_block] = "razor_section_block",
  [sym_razor_functions_directive] = "razor_functions_directive",
  [sym_razor_control_flow] = "razor_control_flow",
  [sym_razor_else_clause] = "razor_else_clause",
  [sym_razor_explicit_expression] = "razor_explicit_expression",
  [sym_explicit_expression_body] = "explicit_expression_body",
  [sym_razor_implicit_expression] = "razor_implicit_expression",
  [sym_implicit_expression_body] = "csharp_expression",
  [sym_call_args] = "call_args",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_code_block_body_repeat1] = "code_block_body_repeat1",
  [aux_sym_razor_control_flow_repeat1] = "razor_control_flow_repeat1",
  [aux_sym_explicit_expression_body_repeat1] = "explicit_expression_body_repeat1",
  [aux_sym_implicit_expression_body_repeat1] = "implicit_expression_body_repeat1",
  [aux_sym_call_args_repeat1] = "call_args_repeat1",
  [alias_sym_call_arguments] = "call_arguments",
  [alias_sym_csharp_code] = "csharp_code",
  [alias_sym_index_argument] = "index_argument",
  [alias_sym_section_name] = "section_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AT_STAR] = anon_sym_AT_STAR,
  [anon_sym_STAR_AT] = anon_sym_STAR_AT,
  [sym_razor_escaped_at] = sym_razor_escaped_at,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__any_in_block_token1] = aux_sym__any_in_block_token1,
  [anon_sym_model] = anon_sym_model,
  [anon_sym_using] = anon_sym_model,
  [anon_sym_inject] = anon_sym_model,
  [anon_sym_page] = anon_sym_model,
  [anon_sym_namespace] = anon_sym_model,
  [anon_sym_layout] = anon_sym_model,
  [anon_sym_inherits] = anon_sym_model,
  [anon_sym_implements] = anon_sym_model,
  [anon_sym_addTagHelper] = anon_sym_model,
  [anon_sym_removeTagHelper] = anon_sym_model,
  [anon_sym_tagHelperPrefix] = anon_sym_model,
  [anon_sym_attribute] = anon_sym_model,
  [anon_sym_typeparam] = anon_sym_model,
  [anon_sym_preservewhitespace] = anon_sym_model,
  [aux_sym_razor_directive_token1] = aux_sym_razor_directive_token1,
  [anon_sym_section] = anon_sym_model,
  [aux_sym_razor_section_block_token1] = aux_sym_razor_section_block_token1,
  [anon_sym_functions] = anon_sym_model,
  [anon_sym_code] = anon_sym_model,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_if,
  [anon_sym_for] = anon_sym_if,
  [anon_sym_foreach] = anon_sym_if,
  [anon_sym_while] = anon_sym_if,
  [anon_sym_switch] = anon_sym_if,
  [anon_sym_do] = anon_sym_if,
  [anon_sym_try] = anon_sym_if,
  [anon_sym_catch] = anon_sym_if,
  [anon_sym_finally] = anon_sym_if,
  [anon_sym_lock] = anon_sym_if,
  [aux_sym_razor_control_flow_token1] = aux_sym_razor_control_flow_token1,
  [aux_sym_razor_else_clause_token1] = aux_sym_razor_control_flow_token1,
  [anon_sym_AT_LPAREN] = anon_sym_AT_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_explicit_expression_body_token1] = aux_sym_explicit_expression_body_token1,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_implicit_expression_body_token1] = aux_sym_implicit_expression_body_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_call_args_token1] = aux_sym_call_args_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_call_args_token2] = aux_sym_call_args_token2,
  [aux_sym_call_args_token3] = aux_sym_call_args_token3,
  [sym__code_block_start] = sym__code_block_start,
  [sym__code_block_end] = sym__code_block_end,
  [sym_text_chunk] = sym_text_chunk,
  [sym__comment_content] = sym__comment_content,
  [sym_source_file] = sym_source_file,
  [sym_razor_comment] = sym_razor_comment,
  [sym_razor_code_block] = sym_razor_code_block,
  [sym_code_block_body] = sym_code_block_body,
  [sym__any_in_block] = sym__any_in_block,
  [sym_razor_directive] = sym_razor_directive,
  [sym_razor_section_block] = sym_razor_section_block,
  [sym_razor_functions_directive] = sym_razor_functions_directive,
  [sym_razor_control_flow] = sym_razor_control_flow,
  [sym_razor_else_clause] = sym_razor_else_clause,
  [sym_razor_explicit_expression] = sym_razor_explicit_expression,
  [sym_explicit_expression_body] = sym_explicit_expression_body,
  [sym_razor_implicit_expression] = sym_razor_implicit_expression,
  [sym_implicit_expression_body] = sym_implicit_expression_body,
  [sym_call_args] = sym_call_args,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_code_block_body_repeat1] = aux_sym_code_block_body_repeat1,
  [aux_sym_razor_control_flow_repeat1] = aux_sym_razor_control_flow_repeat1,
  [aux_sym_explicit_expression_body_repeat1] = aux_sym_explicit_expression_body_repeat1,
  [aux_sym_implicit_expression_body_repeat1] = aux_sym_implicit_expression_body_repeat1,
  [aux_sym_call_args_repeat1] = aux_sym_call_args_repeat1,
  [alias_sym_call_arguments] = alias_sym_call_arguments,
  [alias_sym_csharp_code] = alias_sym_csharp_code,
  [alias_sym_index_argument] = alias_sym_index_argument,
  [alias_sym_section_name] = alias_sym_section_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_AT_STAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR_AT] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_escaped_at] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__any_in_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_model] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_inject] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_page] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_layout] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_inherits] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_implements] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_addTagHelper] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_removeTagHelper] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tagHelperPrefix] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_typeparam] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_preservewhitespace] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_razor_directive_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_section] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_razor_section_block_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_functions] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_code] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_foreach] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_finally] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_lock] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_razor_control_flow_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_razor_else_clause_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_explicit_expression_body_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_implicit_expression_body_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_call_args_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_call_args_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_args_token3] = {
    .visible = false,
    .named = false,
  },
  [sym__code_block_start] = {
    .visible = true,
    .named = false,
  },
  [sym__code_block_end] = {
    .visible = true,
    .named = false,
  },
  [sym_text_chunk] = {
    .visible = true,
    .named = true,
  },
  [sym__comment_content] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block_body] = {
    .visible = true,
    .named = true,
  },
  [sym__any_in_block] = {
    .visible = false,
    .named = true,
  },
  [sym_razor_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_section_block] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_functions_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_control_flow] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_explicit_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_explicit_expression_body] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_implicit_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_implicit_expression_body] = {
    .visible = true,
    .named = true,
  },
  [sym_call_args] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_block_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_razor_control_flow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_explicit_expression_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_implicit_expression_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_call_arguments] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_csharp_code] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_index_argument] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_section_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_implicit_expression_body,
  },
  [2] = {
    [2] = alias_sym_csharp_code,
  },
  [3] = {
    [1] = alias_sym_csharp_code,
  },
  [4] = {
    [1] = alias_sym_call_arguments,
  },
  [5] = {
    [1] = alias_sym_index_argument,
  },
  [6] = {
    [3] = alias_sym_csharp_code,
  },
  [7] = {
    [2] = alias_sym_section_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_code_block_body, 2,
    sym_code_block_body,
    alias_sym_csharp_code,
  sym_explicit_expression_body, 2,
    sym_explicit_expression_body,
    sym_implicit_expression_body,
  sym_call_args, 2,
    sym_call_args,
    alias_sym_call_arguments,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '!', 224,
        '"', 225,
        '\'', 228,
        '(', 215,
        ')', 214,
        '*', 4,
        '.', 219,
        '?', 218,
        '@', 18,
        '[', 220,
        ']', 223,
        'a', 67,
        'c', 47,
        'd', 142,
        'e', 124,
        'f', 112,
        'i', 99,
        'l', 44,
        'm', 147,
        'n', 45,
        'p', 46,
        'r', 81,
        's', 80,
        't', 48,
        'u', 168,
        'w', 109,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(210);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 225,
        '\'', 228,
        '(', 215,
        ')', 214,
        '[', 220,
        '\t', 231,
        '\n', 231,
        '\r', 231,
        ' ', 231,
      );
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(232);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == ')') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 4:
      if (lookahead == '@') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(196);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 11:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_AT_STAR);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_STAR_AT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_razor_escaped_at);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '(') ADVANCE(213);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '@') ADVANCE(17);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__any_in_block_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__any_in_block_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_model);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_inject);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_page);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_layout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_inherits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_implements);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_addTagHelper);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_removeTagHelper);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_tagHelperPrefix);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_typeparam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_preservewhitespace);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_razor_directive_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_razor_directive_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_section);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'H') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'H') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'H') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'P') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'T') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'T') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'o') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'a') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'r') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'o') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead == 'y') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'a') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'a') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'a') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'a') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'a') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'a') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'a') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'b') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'c') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'c') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'c') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'c') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'c') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'c') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'c') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'c') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'c') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'd') ADVANCE(68);
      if (lookahead == 't') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'd') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'd') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'd') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'w') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'f') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'g') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'g') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'g') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'g') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'g') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'h') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'h') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'h') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'h') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'h') ADVANCE(83);
      if (lookahead == 'j') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'h') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'i') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'i') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'i') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'i') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'i') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'i') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'i') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'i') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'i') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'k') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'l') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'l') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'l') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'l') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'l') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'l') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'l') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'l') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'l') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'm') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'm') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'm') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'm') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'n') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'n') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'n') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'n') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'n') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'n') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'o') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'o') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'o') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'o') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'o') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'o') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'p') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'p') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'p') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'p') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'p') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'p') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'p') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'p') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'r') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'r') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'r') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'r') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'r') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'r') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'r') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'r') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'r') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 's') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 's') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 's') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 's') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 's') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 's') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 's') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 's') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 't') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 't') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 't') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 't') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 't') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 't') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 't') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 't') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 't') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 't') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'u') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'u') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'v') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'v') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'w') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'x') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'y') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'y') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (lookahead == 'y') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_razor_section_block_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_functions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_code);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_foreach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_try);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_catch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_finally);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_lock);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_razor_control_flow_token1);
      if (lookahead == '\n') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_razor_control_flow_token1);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_razor_else_clause_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_razor_else_clause_token1);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_explicit_expression_body_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_explicit_expression_body_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_implicit_expression_body_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_implicit_expression_body_token1);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_call_args_token1);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_call_args_token1);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_call_args_token2);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_call_args_token2);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_call_args_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_call_args_token3);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(232);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 3},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 13, .external_lex_state = 2},
  [13] = {.lex_state = 13, .external_lex_state = 2},
  [14] = {.lex_state = 13, .external_lex_state = 2},
  [15] = {.lex_state = 13, .external_lex_state = 2},
  [16] = {.lex_state = 13, .external_lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 13, .external_lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 13, .external_lex_state = 2},
  [23] = {.lex_state = 13, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 9, .external_lex_state = 3},
  [36] = {.lex_state = 9, .external_lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 9, .external_lex_state = 3},
  [39] = {.lex_state = 9, .external_lex_state = 3},
  [40] = {.lex_state = 9, .external_lex_state = 3},
  [41] = {.lex_state = 9, .external_lex_state = 4},
  [42] = {.lex_state = 9, .external_lex_state = 3},
  [43] = {.lex_state = 9, .external_lex_state = 4},
  [44] = {.lex_state = 9, .external_lex_state = 3},
  [45] = {.lex_state = 9, .external_lex_state = 3},
  [46] = {.lex_state = 9, .external_lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 9, .external_lex_state = 4},
  [53] = {.lex_state = 13, .external_lex_state = 3},
  [54] = {.lex_state = 0, .external_lex_state = 5},
  [55] = {.lex_state = 211, .external_lex_state = 3},
  [56] = {.lex_state = 1, .external_lex_state = 3},
  [57] = {.lex_state = 0, .external_lex_state = 3},
  [58] = {.lex_state = 0, .external_lex_state = 6},
  [59] = {.lex_state = 0, .external_lex_state = 6},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 35},
  [68] = {.lex_state = 0, .external_lex_state = 6},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0, .external_lex_state = 6},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 229},
  [74] = {.lex_state = 226},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 221},
  [77] = {.lex_state = 0, .external_lex_state = 6},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0, .external_lex_state = 6},
  [81] = {.lex_state = 221},
  [82] = {.lex_state = 0, .external_lex_state = 3},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 0, .external_lex_state = 6},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 6},
  [88] = {.lex_state = 0, .external_lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT_STAR] = ACTIONS(1),
    [anon_sym_STAR_AT] = ACTIONS(1),
    [sym_razor_escaped_at] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_inject] = ACTIONS(1),
    [anon_sym_page] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_layout] = ACTIONS(1),
    [anon_sym_inherits] = ACTIONS(1),
    [anon_sym_implements] = ACTIONS(1),
    [anon_sym_addTagHelper] = ACTIONS(1),
    [anon_sym_removeTagHelper] = ACTIONS(1),
    [anon_sym_tagHelperPrefix] = ACTIONS(1),
    [anon_sym_attribute] = ACTIONS(1),
    [anon_sym_typeparam] = ACTIONS(1),
    [anon_sym_preservewhitespace] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [aux_sym_razor_section_block_token1] = ACTIONS(1),
    [anon_sym_functions] = ACTIONS(1),
    [anon_sym_code] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_foreach] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_finally] = ACTIONS(1),
    [anon_sym_lock] = ACTIONS(1),
    [anon_sym_AT_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym__code_block_start] = ACTIONS(1),
    [sym__code_block_end] = ACTIONS(1),
    [sym_text_chunk] = ACTIONS(1),
    [sym__comment_content] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(78),
    [sym_razor_comment] = STATE(3),
    [sym_razor_code_block] = STATE(3),
    [sym_razor_directive] = STATE(3),
    [sym_razor_section_block] = STATE(3),
    [sym_razor_functions_directive] = STATE(3),
    [sym_razor_control_flow] = STATE(3),
    [sym_razor_explicit_expression] = STATE(3),
    [sym_razor_implicit_expression] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_AT_STAR] = ACTIONS(5),
    [sym_razor_escaped_at] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [sym_text_chunk] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(15), 1,
      anon_sym_section,
    ACTIONS(17), 1,
      aux_sym_razor_section_block_token1,
    ACTIONS(23), 1,
      sym__code_block_start,
    STATE(32), 1,
      sym_implicit_expression_body,
    ACTIONS(19), 2,
      anon_sym_functions,
      anon_sym_code,
    ACTIONS(21), 11,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_while,
      anon_sym_switch,
      anon_sym_do,
      anon_sym_try,
      anon_sym_catch,
      anon_sym_finally,
      anon_sym_lock,
    ACTIONS(13), 14,
      anon_sym_model,
      anon_sym_using,
      anon_sym_inject,
      anon_sym_page,
      anon_sym_namespace,
      anon_sym_layout,
      anon_sym_inherits,
      anon_sym_implements,
      anon_sym_addTagHelper,
      anon_sym_removeTagHelper,
      anon_sym_tagHelperPrefix,
      anon_sym_attribute,
      anon_sym_typeparam,
      anon_sym_preservewhitespace,
  [46] = 6,
    ACTIONS(5), 1,
      anon_sym_AT_STAR,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 2,
      sym_text_chunk,
      sym_razor_escaped_at,
    STATE(4), 9,
      sym_razor_comment,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_section_block,
      sym_razor_functions_directive,
      sym_razor_control_flow,
      sym_razor_explicit_expression,
      sym_razor_implicit_expression,
      aux_sym_source_file_repeat1,
  [74] = 6,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_AT_STAR,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(40), 1,
      anon_sym_AT_LPAREN,
    ACTIONS(34), 2,
      sym_text_chunk,
      sym_razor_escaped_at,
    STATE(4), 9,
      sym_razor_comment,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_section_block,
      sym_razor_functions_directive,
      sym_razor_control_flow,
      sym_razor_explicit_expression,
      sym_razor_implicit_expression,
      aux_sym_source_file_repeat1,
  [102] = 8,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_QMARK,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_BANG,
    STATE(7), 1,
      aux_sym_implicit_expression_body_repeat1,
    ACTIONS(43), 5,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_AT_LPAREN,
  [131] = 8,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_QMARK,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(61), 1,
      anon_sym_BANG,
    STATE(5), 1,
      aux_sym_implicit_expression_body_repeat1,
    ACTIONS(57), 5,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_AT_LPAREN,
  [160] = 8,
    ACTIONS(65), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_DOT,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_BANG,
    STATE(7), 1,
      aux_sym_implicit_expression_body_repeat1,
    ACTIONS(63), 5,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_AT_LPAREN,
  [189] = 2,
    ACTIONS(84), 1,
      anon_sym_AT,
    ACTIONS(82), 10,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_AT_LPAREN,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_BANG,
  [205] = 2,
    ACTIONS(88), 1,
      anon_sym_AT,
    ACTIONS(86), 10,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_AT_LPAREN,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_BANG,
  [221] = 2,
    ACTIONS(92), 1,
      anon_sym_AT,
    ACTIONS(90), 10,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_AT_LPAREN,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_BANG,
  [237] = 2,
    ACTIONS(65), 1,
      anon_sym_AT,
    ACTIONS(63), 10,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_AT_LPAREN,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_BANG,
  [253] = 4,
    ACTIONS(96), 1,
      anon_sym_AT,
    ACTIONS(98), 1,
      anon_sym_else,
    STATE(13), 2,
      sym_razor_else_clause,
      aux_sym_razor_control_flow_repeat1,
    ACTIONS(94), 5,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_AT_LPAREN,
  [271] = 4,
    ACTIONS(102), 1,
      anon_sym_AT,
    ACTIONS(104), 1,
      anon_sym_else,
    STATE(13), 2,
      sym_razor_else_clause,
      aux_sym_razor_control_flow_repeat1,
    ACTIONS(100), 5,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_AT_LPAREN,
  [289] = 4,
    ACTIONS(98), 1,
      anon_sym_else,
    ACTIONS(109), 1,
      anon_sym_AT,
    STATE(12), 2,
      sym_razor_else_clause,
      aux_sym_razor_control_flow_repeat1,
    ACTIONS(107), 5,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_AT_LPAREN,
  [307] = 4,
    ACTIONS(98), 1,
      anon_sym_else,
    ACTIONS(109), 1,
      anon_sym_AT,
    STATE(13), 2,
      sym_razor_else_clause,
      aux_sym_razor_control_flow_repeat1,
    ACTIONS(107), 5,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_AT_LPAREN,
  [325] = 4,
    ACTIONS(98), 1,
      anon_sym_else,
    ACTIONS(113), 1,
      anon_sym_AT,
    STATE(15), 2,
      sym_razor_else_clause,
      aux_sym_razor_control_flow_repeat1,
    ACTIONS(111), 5,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_AT_LPAREN,
  [343] = 8,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_SQUOTE,
    ACTIONS(125), 1,
      aux_sym_call_args_token3,
    STATE(21), 1,
      aux_sym_call_args_repeat1,
    STATE(60), 1,
      sym_call_args,
  [368] = 8,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_SQUOTE,
    ACTIONS(125), 1,
      aux_sym_call_args_token3,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_call_args_repeat1,
    STATE(72), 1,
      sym_call_args,
  [393] = 7,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      aux_sym_call_args_token3,
    STATE(19), 1,
      aux_sym_call_args_repeat1,
  [415] = 2,
    ACTIONS(148), 1,
      anon_sym_AT,
    ACTIONS(146), 6,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_else,
      anon_sym_AT_LPAREN,
  [427] = 7,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    ACTIONS(152), 1,
      aux_sym_call_args_token3,
    STATE(19), 1,
      aux_sym_call_args_repeat1,
  [449] = 2,
    ACTIONS(156), 1,
      anon_sym_AT,
    ACTIONS(154), 6,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_else,
      anon_sym_AT_LPAREN,
  [461] = 2,
    ACTIONS(160), 1,
      anon_sym_AT,
    ACTIONS(158), 6,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_else,
      anon_sym_AT_LPAREN,
  [473] = 2,
    ACTIONS(164), 1,
      anon_sym_AT,
    ACTIONS(162), 5,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_AT_LPAREN,
  [484] = 2,
    ACTIONS(168), 1,
      anon_sym_AT,
    ACTIONS(166), 5,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_AT_LPAREN,
  [495] = 2,
    ACTIONS(172), 1,
      anon_sym_AT,
    ACTIONS(170), 5,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_AT_LPAREN,
  [506] = 2,
    ACTIONS(176), 1,
      anon_sym_AT,
    ACTIONS(174), 5,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_AT_LPAREN,
  [517] = 2,
    ACTIONS(180), 1,
      anon_sym_AT,
    ACTIONS(178), 5,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_AT_LPAREN,
  [528] = 2,
    ACTIONS(182), 1,
      aux_sym_call_args_token3,
    ACTIONS(129), 5,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [539] = 2,
    ACTIONS(186), 1,
      aux_sym_call_args_token3,
    ACTIONS(184), 5,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [550] = 2,
    ACTIONS(190), 1,
      anon_sym_AT,
    ACTIONS(188), 5,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_AT_LPAREN,
  [561] = 2,
    ACTIONS(194), 1,
      anon_sym_AT,
    ACTIONS(192), 5,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_AT_LPAREN,
  [572] = 2,
    ACTIONS(198), 1,
      anon_sym_AT,
    ACTIONS(196), 5,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_AT_LPAREN,
  [583] = 2,
    ACTIONS(202), 1,
      anon_sym_AT,
    ACTIONS(200), 5,
      sym_text_chunk,
      ts_builtin_sym_end,
      anon_sym_AT_STAR,
      sym_razor_escaped_at,
      anon_sym_AT_LPAREN,
  [594] = 4,
    ACTIONS(204), 1,
      aux_sym__any_in_block_token1,
    ACTIONS(206), 1,
      sym__code_block_start,
    STATE(87), 1,
      sym_code_block_body,
    STATE(43), 2,
      sym__any_in_block,
      aux_sym_code_block_body_repeat1,
  [608] = 4,
    ACTIONS(204), 1,
      aux_sym__any_in_block_token1,
    ACTIONS(206), 1,
      sym__code_block_start,
    STATE(77), 1,
      sym_code_block_body,
    STATE(43), 2,
      sym__any_in_block,
      aux_sym_code_block_body_repeat1,
  [622] = 5,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      aux_sym_explicit_expression_body_token1,
    STATE(48), 1,
      aux_sym_explicit_expression_body_repeat1,
    STATE(79), 1,
      sym_explicit_expression_body,
  [638] = 4,
    ACTIONS(204), 1,
      aux_sym__any_in_block_token1,
    ACTIONS(206), 1,
      sym__code_block_start,
    STATE(70), 1,
      sym_code_block_body,
    STATE(43), 2,
      sym__any_in_block,
      aux_sym_code_block_body_repeat1,
  [652] = 4,
    ACTIONS(204), 1,
      aux_sym__any_in_block_token1,
    ACTIONS(206), 1,
      sym__code_block_start,
    STATE(80), 1,
      sym_code_block_body,
    STATE(43), 2,
      sym__any_in_block,
      aux_sym_code_block_body_repeat1,
  [666] = 4,
    ACTIONS(204), 1,
      aux_sym__any_in_block_token1,
    ACTIONS(206), 1,
      sym__code_block_start,
    STATE(88), 1,
      sym_code_block_body,
    STATE(43), 2,
      sym__any_in_block,
      aux_sym_code_block_body_repeat1,
  [680] = 4,
    ACTIONS(214), 1,
      aux_sym__any_in_block_token1,
    ACTIONS(217), 1,
      sym__code_block_start,
    ACTIONS(220), 1,
      sym__code_block_end,
    STATE(41), 2,
      sym__any_in_block,
      aux_sym_code_block_body_repeat1,
  [694] = 4,
    ACTIONS(204), 1,
      aux_sym__any_in_block_token1,
    ACTIONS(206), 1,
      sym__code_block_start,
    STATE(58), 1,
      sym_code_block_body,
    STATE(43), 2,
      sym__any_in_block,
      aux_sym_code_block_body_repeat1,
  [708] = 4,
    ACTIONS(206), 1,
      sym__code_block_start,
    ACTIONS(222), 1,
      aux_sym__any_in_block_token1,
    ACTIONS(224), 1,
      sym__code_block_end,
    STATE(41), 2,
      sym__any_in_block,
      aux_sym_code_block_body_repeat1,
  [722] = 4,
    ACTIONS(204), 1,
      aux_sym__any_in_block_token1,
    ACTIONS(206), 1,
      sym__code_block_start,
    STATE(59), 1,
      sym_code_block_body,
    STATE(43), 2,
      sym__any_in_block,
      aux_sym_code_block_body_repeat1,
  [736] = 4,
    ACTIONS(204), 1,
      aux_sym__any_in_block_token1,
    ACTIONS(206), 1,
      sym__code_block_start,
    STATE(68), 1,
      sym_code_block_body,
    STATE(43), 2,
      sym__any_in_block,
      aux_sym_code_block_body_repeat1,
  [750] = 4,
    ACTIONS(204), 1,
      aux_sym__any_in_block_token1,
    ACTIONS(206), 1,
      sym__code_block_start,
    STATE(84), 1,
      sym_code_block_body,
    STATE(43), 2,
      sym__any_in_block,
      aux_sym_code_block_body_repeat1,
  [764] = 5,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      aux_sym_explicit_expression_body_token1,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_explicit_expression_body_repeat1,
    STATE(65), 1,
      sym_explicit_expression_body,
  [780] = 4,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    ACTIONS(230), 1,
      aux_sym_explicit_expression_body_token1,
    STATE(49), 1,
      aux_sym_explicit_expression_body_repeat1,
  [793] = 4,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      aux_sym_explicit_expression_body_token1,
    STATE(49), 1,
      aux_sym_explicit_expression_body_repeat1,
  [806] = 2,
    ACTIONS(240), 1,
      aux_sym_explicit_expression_body_token1,
    ACTIONS(232), 2,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
  [814] = 2,
    ACTIONS(244), 1,
      aux_sym_explicit_expression_body_token1,
    ACTIONS(242), 2,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
  [822] = 1,
    ACTIONS(246), 3,
      sym__code_block_start,
      sym__code_block_end,
      aux_sym__any_in_block_token1,
  [828] = 2,
    ACTIONS(248), 1,
      anon_sym_if,
    ACTIONS(250), 1,
      sym__code_block_start,
  [835] = 2,
    ACTIONS(252), 1,
      anon_sym_STAR_AT,
    ACTIONS(254), 1,
      sym__comment_content,
  [842] = 2,
    ACTIONS(256), 1,
      aux_sym_razor_else_clause_token1,
    ACTIONS(258), 1,
      sym__code_block_start,
  [849] = 2,
    ACTIONS(260), 1,
      aux_sym_razor_control_flow_token1,
    ACTIONS(262), 1,
      sym__code_block_start,
  [856] = 1,
    ACTIONS(264), 1,
      sym__code_block_start,
  [860] = 1,
    ACTIONS(266), 1,
      sym__code_block_end,
  [864] = 1,
    ACTIONS(268), 1,
      sym__code_block_end,
  [868] = 1,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
  [872] = 1,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
  [876] = 1,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
  [880] = 1,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
  [884] = 1,
    ACTIONS(272), 1,
      sym__code_block_start,
  [888] = 1,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
  [892] = 1,
    ACTIONS(276), 1,
      aux_sym_razor_section_block_token1,
  [896] = 1,
    ACTIONS(278), 1,
      aux_sym_razor_directive_token1,
  [900] = 1,
    ACTIONS(280), 1,
      sym__code_block_end,
  [904] = 1,
    ACTIONS(282), 1,
      anon_sym_RBRACK,
  [908] = 1,
    ACTIONS(284), 1,
      sym__code_block_end,
  [912] = 1,
    ACTIONS(286), 1,
      aux_sym_razor_section_block_token1,
  [916] = 1,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
  [920] = 1,
    ACTIONS(290), 1,
      aux_sym_call_args_token2,
  [924] = 1,
    ACTIONS(292), 1,
      aux_sym_call_args_token1,
  [928] = 1,
    ACTIONS(294), 1,
      anon_sym_STAR_AT,
  [932] = 1,
    ACTIONS(296), 1,
      aux_sym_implicit_expression_body_token1,
  [936] = 1,
    ACTIONS(298), 1,
      sym__code_block_end,
  [940] = 1,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
  [944] = 1,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
  [948] = 1,
    ACTIONS(304), 1,
      sym__code_block_end,
  [952] = 1,
    ACTIONS(306), 1,
      aux_sym_implicit_expression_body_token1,
  [956] = 1,
    ACTIONS(308), 1,
      sym__code_block_start,
  [960] = 1,
    ACTIONS(310), 1,
      aux_sym_razor_section_block_token1,
  [964] = 1,
    ACTIONS(312), 1,
      sym__code_block_end,
  [968] = 1,
    ACTIONS(314), 1,
      anon_sym_DOT,
  [972] = 1,
    ACTIONS(316), 1,
      sym__code_block_start,
  [976] = 1,
    ACTIONS(318), 1,
      sym__code_block_end,
  [980] = 1,
    ACTIONS(320), 1,
      sym__code_block_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 131,
  [SMALL_STATE(7)] = 160,
  [SMALL_STATE(8)] = 189,
  [SMALL_STATE(9)] = 205,
  [SMALL_STATE(10)] = 221,
  [SMALL_STATE(11)] = 237,
  [SMALL_STATE(12)] = 253,
  [SMALL_STATE(13)] = 271,
  [SMALL_STATE(14)] = 289,
  [SMALL_STATE(15)] = 307,
  [SMALL_STATE(16)] = 325,
  [SMALL_STATE(17)] = 343,
  [SMALL_STATE(18)] = 368,
  [SMALL_STATE(19)] = 393,
  [SMALL_STATE(20)] = 415,
  [SMALL_STATE(21)] = 427,
  [SMALL_STATE(22)] = 449,
  [SMALL_STATE(23)] = 461,
  [SMALL_STATE(24)] = 473,
  [SMALL_STATE(25)] = 484,
  [SMALL_STATE(26)] = 495,
  [SMALL_STATE(27)] = 506,
  [SMALL_STATE(28)] = 517,
  [SMALL_STATE(29)] = 528,
  [SMALL_STATE(30)] = 539,
  [SMALL_STATE(31)] = 550,
  [SMALL_STATE(32)] = 561,
  [SMALL_STATE(33)] = 572,
  [SMALL_STATE(34)] = 583,
  [SMALL_STATE(35)] = 594,
  [SMALL_STATE(36)] = 608,
  [SMALL_STATE(37)] = 622,
  [SMALL_STATE(38)] = 638,
  [SMALL_STATE(39)] = 652,
  [SMALL_STATE(40)] = 666,
  [SMALL_STATE(41)] = 680,
  [SMALL_STATE(42)] = 694,
  [SMALL_STATE(43)] = 708,
  [SMALL_STATE(44)] = 722,
  [SMALL_STATE(45)] = 736,
  [SMALL_STATE(46)] = 750,
  [SMALL_STATE(47)] = 764,
  [SMALL_STATE(48)] = 780,
  [SMALL_STATE(49)] = 793,
  [SMALL_STATE(50)] = 806,
  [SMALL_STATE(51)] = 814,
  [SMALL_STATE(52)] = 822,
  [SMALL_STATE(53)] = 828,
  [SMALL_STATE(54)] = 835,
  [SMALL_STATE(55)] = 842,
  [SMALL_STATE(56)] = 849,
  [SMALL_STATE(57)] = 856,
  [SMALL_STATE(58)] = 860,
  [SMALL_STATE(59)] = 864,
  [SMALL_STATE(60)] = 868,
  [SMALL_STATE(61)] = 872,
  [SMALL_STATE(62)] = 876,
  [SMALL_STATE(63)] = 880,
  [SMALL_STATE(64)] = 884,
  [SMALL_STATE(65)] = 888,
  [SMALL_STATE(66)] = 892,
  [SMALL_STATE(67)] = 896,
  [SMALL_STATE(68)] = 900,
  [SMALL_STATE(69)] = 904,
  [SMALL_STATE(70)] = 908,
  [SMALL_STATE(71)] = 912,
  [SMALL_STATE(72)] = 916,
  [SMALL_STATE(73)] = 920,
  [SMALL_STATE(74)] = 924,
  [SMALL_STATE(75)] = 928,
  [SMALL_STATE(76)] = 932,
  [SMALL_STATE(77)] = 936,
  [SMALL_STATE(78)] = 940,
  [SMALL_STATE(79)] = 944,
  [SMALL_STATE(80)] = 948,
  [SMALL_STATE(81)] = 952,
  [SMALL_STATE(82)] = 956,
  [SMALL_STATE(83)] = 960,
  [SMALL_STATE(84)] = 964,
  [SMALL_STATE(85)] = 968,
  [SMALL_STATE(86)] = 972,
  [SMALL_STATE(87)] = 976,
  [SMALL_STATE(88)] = 980,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_expression_body, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_expression_body, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_expression_body, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_implicit_expression_body, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_expression_body_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implicit_expression_body_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_expression_body_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_expression_body_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_expression_body_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_expression_body_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_expression_body_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_expression_body_repeat1, 3, 0, 5),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implicit_expression_body_repeat1, 3, 0, 5),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_expression_body_repeat1, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implicit_expression_body_repeat1, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_expression_body_repeat1, 3, 0, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_implicit_expression_body_repeat1, 3, 0, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_control_flow, 7, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_control_flow, 7, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_razor_control_flow_repeat1, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_razor_control_flow_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_razor_control_flow_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_control_flow, 6, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_control_flow, 6, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_control_flow, 5, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_control_flow, 5, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_call_args_repeat1, 2, 0, 0),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_args_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_args_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_args_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_args_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_args_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_else_clause, 6, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_else_clause, 6, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_args, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_else_clause, 5, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_else_clause, 5, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_else_clause, 4, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_else_clause, 4, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_explicit_expression, 3, 0, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_explicit_expression, 3, 0, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_functions_directive, 5, 0, 6),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_functions_directive, 5, 0, 6),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_comment, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_comment, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_section_block, 6, 0, 7),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_section_block, 6, 0, 7),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_directive, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_directive, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_args_repeat1, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_call_args_repeat1, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_args_repeat1, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_comment, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_comment, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_implicit_expression, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_implicit_expression, 2, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_code_block, 4, 0, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_code_block, 4, 0, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_explicit_expression, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_explicit_expression, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_body_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_block_body_repeat1, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block_body, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explicit_expression_body, 1, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_explicit_expression_body_repeat1, 2, 0, 0),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_explicit_expression_body_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_explicit_expression_body_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_explicit_expression_body_repeat1, 2, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_explicit_expression_body_repeat1, 3, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_explicit_expression_body_repeat1, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_in_block, 3, 0, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [300] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__code_block_start = 0,
  ts_external_token__code_block_end = 1,
  ts_external_token_text_chunk = 2,
  ts_external_token__comment_content = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__code_block_start] = sym__code_block_start,
  [ts_external_token__code_block_end] = sym__code_block_end,
  [ts_external_token_text_chunk] = sym_text_chunk,
  [ts_external_token__comment_content] = sym__comment_content,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__code_block_start] = true,
    [ts_external_token__code_block_end] = true,
    [ts_external_token_text_chunk] = true,
    [ts_external_token__comment_content] = true,
  },
  [2] = {
    [ts_external_token_text_chunk] = true,
  },
  [3] = {
    [ts_external_token__code_block_start] = true,
  },
  [4] = {
    [ts_external_token__code_block_start] = true,
    [ts_external_token__code_block_end] = true,
  },
  [5] = {
    [ts_external_token__comment_content] = true,
  },
  [6] = {
    [ts_external_token__code_block_end] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_razor_external_scanner_create(void);
void tree_sitter_razor_external_scanner_destroy(void *);
bool tree_sitter_razor_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_razor_external_scanner_serialize(void *, char *);
void tree_sitter_razor_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_razor(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_razor_external_scanner_create,
      tree_sitter_razor_external_scanner_destroy,
      tree_sitter_razor_external_scanner_scan,
      tree_sitter_razor_external_scanner_serialize,
      tree_sitter_razor_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
