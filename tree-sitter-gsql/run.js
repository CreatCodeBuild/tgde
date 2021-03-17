const Parser = require('tree-sitter');
const GSQL = require('./bindings/node');

const parser = new Parser();
parser.setLanguage(GSQL);

const sourceCode = 'hello';
const tree = parser.parse(sourceCode);
console.log(tree.rootNode.toString());