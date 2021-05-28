install:
	npm install

build: cp-gsql-parser
	rm -rf dist
	$$(npm bin)/tsc -b
	cp README.md dist/README.md
	cp -r docs dist/docs
	cp package.json dist/package.json

build-prod: build cp-wasm
	cp -r node_modules dist/node_modules

watch:
	$$(npm bin)/tsc -b -w

cp-wasm:
	cp ../tree-sitter-gsql/tree-sitter-gsql.wasm dist/gsql-parser/

cp-gsql-parser:
	rm -rf src/gsql-parser
	mkdir src/gsql-parser
	cp -r ../gsql-parser/src/* src/gsql-parser

package: build-prod
	cd dist && $$(npm bin)/vsce package

p: package

pp: install build-prod