# tree-sitter-razor

A [Tree-sitter](https://tree-sitter.github.io/) grammar for [Razor](https://learn.microsoft.com/en-us/aspnet/core/razor-pages/) (.cshtml / .razor) files.

## Supported Constructs

- Razor directives (`@model`, `@using`, `@inject`, `@page`, `@inherits`, etc.)
- Code blocks (`@{ ... }`)
- Explicit expressions (`@( ... )`)
- Implicit expressions (`@Model.Property`, `@ViewBag["key"]`)
- Control flow (`@if`, `@else`, `@for`, `@foreach`, `@while`, `@switch`, `@try`, `@catch`, `@finally`)
- Section blocks (`@section Name { ... }`)
- Functions/code directives (`@functions { ... }`, `@code { ... }`)
- Razor comments (`@* ... *@`)
- Escaped `@` (`@@`)
- HTML text chunks (for injection by editors)

## Usage

```bash
npm install
npx tree-sitter generate
npx tree-sitter parse example.cshtml
```

## Editor Integration

This grammar is used by the [zed-razor](https://github.com/NeverGET/zed-razor) extension for the Zed editor.

## License

MIT — see [LICENSE](LICENSE).
