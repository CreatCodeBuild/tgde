all:
	make gen && make build

gen:
	./node_modules/.bin/tree-sitter generate

build: gen
	./node_modules/.bin/tree-sitter build-wasm
	cp tree-sitter-gsql.wasm ../lsp/src/gsql-parser/src

parse:
	./node_modules/.bin/tree-sitter parse source.gsql

ui:
	$$(npm bin)/tree-sitter web-ui