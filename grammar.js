/**
 * tree-sitter-razor
 * Grammar for ASP.NET Razor / .cshtml files
 *
 * Razor is HTML with embedded C# via the @ sigil.
 * This grammar parses Razor constructs; C# and HTML are injected
 * via queries/injections.scm so their own grammars handle highlighting.
 */

module.exports = grammar({
  name: "razor",

  // Let whitespace through freely
  extras: ($) => [/[ \t\r\n]/],

  // External scanner handles balancing { } in code blocks,
  // the tricky implicit expression boundary detection,
  // and Razor comment body content.
  externals: ($) => [
    $._code_block_start,   // '{'  when preceded by '@' context
    $._code_block_end,     // matching '}'
    $.text_chunk,          // raw HTML/text that is NOT a Razor node
    $._comment_content,    // content inside @* ... *@ comments
  ],

  conflicts: ($) => [],

  rules: {
    // Root of a .cshtml file
    source_file: ($) =>
      repeat(
        choice(
          $.razor_comment,
          $.razor_code_block,
          $.razor_section_block,
          $.razor_functions_directive,
          $.razor_directive,
          $.razor_control_flow,
          $.razor_explicit_expression,
          $.razor_implicit_expression,
          $.razor_escaped_at,
          $.text_chunk,
        ),
      ),

    // -------------------------------------------------------------------------
    // @* ... *@   Razor comments (never rendered, unlike HTML comments)
    // -------------------------------------------------------------------------
    razor_comment: ($) =>
      seq(
        alias("@*", $.comment_start),
        optional(alias($._comment_content, $.comment_content)),
        alias("*@", $.comment_end),
      ),

    // -------------------------------------------------------------------------
    // @@ --- escaped literal '@' in output
    // -------------------------------------------------------------------------
    razor_escaped_at: (_$) => "@@",

    // -------------------------------------------------------------------------
    // @{ ... }   Code blocks --- arbitrary C# statements
    // -------------------------------------------------------------------------
    razor_code_block: ($) =>
      seq(
        "@",
        alias($._code_block_start, "{"),
        alias($.code_block_body, $.csharp_code),
        alias($._code_block_end, "}"),
      ),

    code_block_body: ($) => repeat1($._any_in_block),

    _any_in_block: ($) =>
      choice(
        // Nested balanced braces (e.g. lambdas, nested blocks)
        seq(
          alias($._code_block_start, "{"),
          alias($.code_block_body, $.csharp_code),
          alias($._code_block_end, "}"),
        ),
        /[^{}]+/,
      ),

    // -------------------------------------------------------------------------
    // Directives --- lines that configure the page/view
    // @model Foo.Bar
    // @using System.Linq
    // @inject IService svc
    // @page "/route"
    // @namespace MyApp.Pages
    // @layout _Layout
    // @inherits BaseClass
    // @implements IDisposable
    // @addTagHelper *, Microsoft.AspNetCore.Mvc.TagHelpers
    // @removeTagHelper ...
    // @tagHelperPrefix th:
    // @attribute [Authorize]
    // @typeparam T
    // @preservewhitespace true
    // -------------------------------------------------------------------------
    razor_directive: ($) =>
      prec(3, seq(
        "@",
        alias(
          choice(
            "model",
            "using",
            "inject",
            "page",
            "namespace",
            "layout",
            "inherits",
            "implements",
            "addTagHelper",
            "removeTagHelper",
            "tagHelperPrefix",
            "attribute",
            "typeparam",
            "preservewhitespace",
          ),
          $.directive_name,
        ),
        alias(/[^\n\r]*/, $.directive_value),
      )),

    // -------------------------------------------------------------------------
    // @section Name { ... }   --- contains HTML+Razor content
    // -------------------------------------------------------------------------
    razor_section_block: ($) =>
      prec(2, seq(
        "@",
        alias("section", $.directive_name),
        alias(/[A-Za-z_]\w*/, $.section_name),
        alias($._code_block_start, "{"),
        alias($.code_block_body, $.razor_content),
        alias($._code_block_end, "}"),
      )),

    // -------------------------------------------------------------------------
    // @functions { ... }
    // @code { ... }           (Blazor)
    // -------------------------------------------------------------------------
    razor_functions_directive: ($) =>
      prec(2, seq(
        "@",
        alias(choice("functions", "code"), $.directive_name),
        alias($._code_block_start, "{"),
        alias($.code_block_body, $.csharp_code),
        alias($._code_block_end, "}"),
      )),

    // -------------------------------------------------------------------------
    // Control flow --- @if @for @foreach @while @switch @do @try @lock @using(...)
    // These open a code block immediately after their condition/initializer.
    // -------------------------------------------------------------------------
    razor_control_flow: ($) =>
      seq(
        "@",
        alias(
          choice("if", "else", "for", "foreach", "while", "switch", "do", "try", "catch", "finally", "lock"),
          $.control_keyword,
        ),
        // Optional condition: everything up to the opening brace (can be empty for else/finally)
        optional(alias(/[^{@\n][^{@]*/, $.control_condition)),
        alias($._code_block_start, "{"),
        alias($.code_block_body, $.razor_content),
        alias($._code_block_end, "}"),
        // else / else if chaining
        repeat($.razor_else_clause),
      ),

    razor_else_clause: ($) =>
      choice(
        // else if (...) { }
        seq(
          alias("else", $.control_keyword),
          alias("if", $.control_keyword),
          optional(alias(/[^{@]*/, $.control_condition)),
          alias($._code_block_start, "{"),
          alias($.code_block_body, $.razor_content),
          alias($._code_block_end, "}"),
        ),
        // plain else { }
        seq(
          alias("else", $.control_keyword),
          alias($._code_block_start, "{"),
          alias($.code_block_body, $.razor_content),
          alias($._code_block_end, "}"),
        ),
      ),

    // -------------------------------------------------------------------------
    // @(expression)   Explicit expression --- any C# expression inside parens
    // -------------------------------------------------------------------------
    razor_explicit_expression: ($) =>
      seq(
        "@(",
        optional(alias($.explicit_expression_body, $.csharp_expression)),
        ")",
      ),

    // Handles nested parens inside the explicit expression
    explicit_expression_body: ($) =>
      repeat1(
        choice(
          seq("(", optional($.explicit_expression_body), ")"),
          /[^()]+/,
        ),
      ),

    // -------------------------------------------------------------------------
    // @identifier[.member][(...)]   Implicit expression
    // @Model.Property, @User.Identity.Name, @Html.DisplayFor(...), etc.
    // -------------------------------------------------------------------------
    razor_implicit_expression: ($) =>
      seq(
        "@",
        alias($.implicit_expression_body, $.csharp_expression),
      ),

    implicit_expression_body: ($) =>
      seq(
        // Must start with an identifier (not a keyword handled above)
        alias(/[A-Za-z_]\w*/, $.identifier),
        repeat(
          choice(
            // .Member  or ?.Member
            seq(optional("?"), ".", alias(/[A-Za-z_]\w*/, $.identifier)),
            // (args...)   method call --- handles basic nesting
            seq("(", optional(alias($.call_args, $.call_arguments)), ")"),
            // [index]
            seq("[", alias(/[^\]]*/, $.index_argument), "]"),
            // !  (null forgiving)
            "!",
          ),
        ),
      ),

    call_args: ($) =>
      repeat1(
        choice(
          seq("(", optional($.call_args), ")"),
          seq("[", /[^\]]*/, "]"),
          seq('"', /[^"\\]*(?:\\.[^"\\]*)*/, '"'),
          seq("'", /[^'\\]*(?:\\.[^'\\]*)*/, "'"),
          /[^()\[\]"']+/,
        ),
      ),
  },
});
