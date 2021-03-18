const Parser = require('tree-sitter');
const GSQL = require('./bindings/node');

const parser = new Parser();
parser.setLanguage(GSQL);

const sourceCode = 'select tgt from Start:s-(friendship:e) ->person:tgt;';
const tree = parser.parse(sourceCode);
console.log(tree.rootNode);
