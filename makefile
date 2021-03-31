gen:
	cd tree-sitter-gsql && ./node_modules/.bin/tree-sitter generate

build:
	cd tree-sitter-gsql && ./node_modules/.bin/tree-sitter build-wasm

parse:
	cd tree-sitter-gsql && ./node_modules/.bin/tree-sitter parse source.gsql

cp:
	cp ./tree-sitter-gsql/tree-sitter-gsql.wasm ./lsp-sample/server/out/

all:
	make gen && make build && make cp
