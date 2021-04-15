install:
	npm install

build:
	rm -rf dist
	$$(npm bin)/tsc -b
	cp package.json dist/package.json

build-prod: build cp-wasm
	cp -r node_modules dist/node_modules

watch:
	$$(npm bin)/tsc -b -w

cp-wasm:
	cp src/gsql-parser/src/tree-sitter-gsql.wasm dist/gsql-parser/src

package: install build-prod
	cd dist && $$(npm bin)/vsce package

bp: build package
