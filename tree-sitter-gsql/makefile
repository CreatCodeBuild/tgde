all:
	make gen && make build

gen:
	$$(npm bin)/tree-sitter generate

build: gen
	$$(npm bin)/tree-sitter build-wasm
	cp tree-sitter-gsql.wasm ../lsp/src/gsql-parser/src

parse:
	$$(npm bin)/tree-sitter parse source.gsql

ui:
	$$(npm bin)/tree-sitter web-ui