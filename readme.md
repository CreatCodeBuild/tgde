# Use
### VS Code Marketplace
https://marketplace.visualstudio.com/items?itemName=creatcodebuild.TigerDE

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

`gsql-parser` is a [NPM package](https://www.npmjs.com/package/gsql-parser) which wraps the WASM.

`lsp` has an [extension](https://marketplace.visualstudio.com/items?itemName=creatcodebuild.TigerDE) and a vscode language server which imports `gsql-parser`

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
```
