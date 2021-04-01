## Requirement
Can be developed on both windows and linux, but recommend linux because of `emcc`
```
node
npm
g++
emcc
```

## Design
The project consists of 2 components.

`tree-sitter-gsql` produces a GSQL parser in WASM.

`lsp-sample` has a vscode language server and an extension.
