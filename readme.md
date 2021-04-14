# Use
Go to [Releases](https://github.com/CreatCodeBuild/tgde/releases/) and download `.vsix` file. Use VS Code to install this file.
[How to install vsix](https://marketplace.visualstudio.com/items?itemName=fabiospampinato.vscode-install-vsix)

# Development
## Requirement
Can be developed on both windows and linux, but recommend linux because of `emcc`
```
node
npm
g++
emcc
```
[tree-sitter-gsql](./tree-sitter-gsql/readme.md)

## Design
The project consists of 2 components.

`tree-sitter-gsql` produces a GSQL parser in WASM.

`lsp-sample` has a vscode language server and an extension.

```
Grammar Parser:
	tree-sitter (parser generator) -> C -> WASM -> TS/ES Module

VSCode Extension:
	Extension Client:
		UI
	Language Server:
		source - Parser -> Syntax Tree
							|-- highlight
							|-- format
							|-- error check
							|-- completion

VS Code <- LSP -> Server (80%)

Atom
Sublime
```