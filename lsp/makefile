build:
	rm -rf dist
	$$(npm bin)/tsc -b
	cd .. && cp ./tree-sitter-gsql/tree-sitter-gsql.wasm ./lsp/dist/server/
	cp package.json dist/package.json

build-prod: build
	cp -r node_modules dist/node_modules

watch:
	$$(npm bin)/tsc -b -w

cp-dev:
	cd .. && cp ./tree-sitter-gsql/tree-sitter-gsql.wasm ./lsp/src/server/

package: build-prod
	cd dist && $$(npm bin)/vsce package

bp: build package
