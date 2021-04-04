build:
	rm -rf dist
	$$(npm bin)/tsc -b
	cp src/server/server.gql dist/server/server.gql
	cd .. && cp ./tree-sitter-gsql/tree-sitter-gsql.wasm ./lsp/dist/server/

watch:
	$$(npm bin)/tsc -b -w