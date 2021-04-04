build:
	rm -rf dist
	$$(npm bin)/tsc -b
	cp src/server/server.gql dist/server/server.gql
	cd .. && cp ./tree-sitter-gsql/tree-sitter-gsql.wasm ./lsp/dist/server/
	cp package.json dist/package.json
	cp -r node_modules dist/node_modules

watch:
	$$(npm bin)/tsc -b -w

cp-dev:
	cd .. && cp ./tree-sitter-gsql/tree-sitter-gsql.wasm ./lsp/src/server/