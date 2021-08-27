all:
	make gen && make build

gen:
	$$(npm bin)/tree-sitter generate

build: gen
	$$(npm bin)/tree-sitter build-wasm

parse:
	$$(npm bin)/tree-sitter parse source.gsql

ui:
	$$(npm bin)/tree-sitter web-ui