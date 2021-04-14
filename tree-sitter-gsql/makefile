all:
	make gen && make build

gen:
	./node_modules/.bin/tree-sitter generate

build: gen
	./node_modules/.bin/tree-sitter build-wasm
	mv tree-sitter-gsql.wasm ../gsql-parser/src

parse:
	./node_modules/.bin/tree-sitter parse source.gsql

