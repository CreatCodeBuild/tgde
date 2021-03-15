// Generated automatically by nearley, version 2.20.1
// http://github.com/Hardmath123/nearley
// Bypasses TS6133. Allow declared but unused functions.
// @ts-ignore
function id(d: any[]): any { return d[0]; }

interface NearleyToken {
  value: any;
  [key: string]: any;
};

interface NearleyLexer {
  reset: (chunk: string, info: any) => void;
  next: () => NearleyToken | undefined;
  save: () => any;
  formatError: (token: never) => string;
  has: (tokenType: string) => boolean;
};

interface NearleyRule {
  name: string;
  symbols: NearleySymbol[];
  postprocess?: (d: any[], loc?: number, reject?: {}) => any;
};

type NearleySymbol = string | { literal: any } | { test: (token: any) => boolean };

interface Grammar {
  Lexer: NearleyLexer | undefined;
  ParserRules: NearleyRule[];
  ParserStart: string;
};

const grammar: Grammar = {
  Lexer: undefined,
  ParserRules: [
    {"name": "createQuery$string$1", "symbols": [{"literal":"C"}, {"literal":"R"}, {"literal":"E"}, {"literal":"A"}, {"literal":"T"}, {"literal":"E"}], "postprocess": (d) => d.join('')},
    {"name": "createQuery$string$2", "symbols": [{"literal":"Q"}, {"literal":"U"}, {"literal":"E"}, {"literal":"R"}, {"literal":"Y"}], "postprocess": (d) => d.join('')},
    {"name": "createQuery", "symbols": ["createQuery$string$1", "_", "createQuery$string$2", "_", "queryName", {"literal":"("}, "parameterList", {"literal":")"}, "_", {"literal":"{"}, "_", "queryBody", "_", {"literal":"}"}, "_"]},
    {"name": "queryBody", "symbols": ["queryBodyStmts"]},
    {"name": "queryBodyStmts", "symbols": ["assignStmt"]},
    {"name": "queryBodyStmts", "symbols": ["vSetVarDeclStmt"]},
    {"name": "queryBodyStmts", "symbols": ["selectStmt"]},
    {"name": "assignStmt", "symbols": ["name", "_", {"literal":"="}, "_", "expr"]},
    {"name": "assignStmt", "symbols": ["name", {"literal":"."}, "attrName", "_", {"literal":"="}, "_", "expr"]},
    {"name": "vSetVarDeclStmt", "symbols": ["vertexSetName", "_", {"literal":"="}, "_", "seedSet"]},
    {"name": "seedSet", "symbols": [{"literal":"{"}, "seed", {"literal":"}"}]},
    {"name": "seed", "symbols": ["paramName"]},
    {"name": "expr", "symbols": ["name"]},
    {"name": "selectStmt", "symbols": ["sqlSelectBlock"]},
    {"name": "sqlSelectBlock", "symbols": ["sqlSelectClause", "fromClause"]},
    {"name": "sqlSelectClause$string$1", "symbols": [{"literal":"S"}, {"literal":"E"}, {"literal":"L"}, {"literal":"E"}, {"literal":"C"}, {"literal":"T"}], "postprocess": (d) => d.join('')},
    {"name": "sqlSelectClause", "symbols": ["sqlSelectClause$string$1", "columnExpr"]},
    {"name": "columnExpr", "symbols": ["expr"]},
    {"name": "fromClause$string$1", "symbols": [{"literal":"F"}, {"literal":"R"}, {"literal":"O"}, {"literal":"M"}], "postprocess": (d) => d.join('')},
    {"name": "fromClause", "symbols": ["fromClause$string$1", "_", "step"]},
    {"name": "step", "symbols": ["stepSourceSet", /["-" "(" stepEdgeSet ")" ("-"|"->") stepVertexSet]/]},
    {"name": "parameterList", "symbols": ["parameterType", "_", "paramName"]},
    {"name": "stepSourceSet", "symbols": ["vertexSetName", /[":" vertexAlias]/]},
    {"name": "baseType$string$1", "symbols": [{"literal":"I"}, {"literal":"N"}, {"literal":"T"}], "postprocess": (d) => d.join('')},
    {"name": "baseType", "symbols": ["baseType$string$1"]},
    {"name": "baseType$string$2", "symbols": [{"literal":"U"}, {"literal":"I"}, {"literal":"N"}, {"literal":"T"}], "postprocess": (d) => d.join('')},
    {"name": "baseType", "symbols": ["baseType$string$2"]},
    {"name": "baseType$string$3", "symbols": [{"literal":"F"}, {"literal":"L"}, {"literal":"O"}, {"literal":"A"}, {"literal":"T"}], "postprocess": (d) => d.join('')},
    {"name": "baseType", "symbols": ["baseType$string$3"]},
    {"name": "baseType$string$4", "symbols": [{"literal":"D"}, {"literal":"O"}, {"literal":"U"}, {"literal":"B"}, {"literal":"L"}, {"literal":"E"}], "postprocess": (d) => d.join('')},
    {"name": "baseType", "symbols": ["baseType$string$4"]},
    {"name": "baseType$string$5", "symbols": [{"literal":"S"}, {"literal":"T"}, {"literal":"R"}, {"literal":"I"}, {"literal":"N"}, {"literal":"G"}], "postprocess": (d) => d.join('')},
    {"name": "baseType", "symbols": ["baseType$string$5"]},
    {"name": "baseType$string$6", "symbols": [{"literal":"B"}, {"literal":"O"}, {"literal":"O"}, {"literal":"L"}], "postprocess": (d) => d.join('')},
    {"name": "baseType", "symbols": ["baseType$string$6"]},
    {"name": "baseType$string$7", "symbols": [{"literal":"V"}, {"literal":"E"}, {"literal":"R"}, {"literal":"T"}, {"literal":"E"}, {"literal":"X"}], "postprocess": (d) => d.join('')},
    {"name": "baseType", "symbols": ["baseType$string$7", {"literal":"<"}, "vertexType", {"literal":">"}]},
    {"name": "baseType$string$8", "symbols": [{"literal":"E"}, {"literal":"D"}, {"literal":"G"}, {"literal":"E"}], "postprocess": (d) => d.join('')},
    {"name": "baseType", "symbols": ["baseType$string$8"]},
    {"name": "baseType$string$9", "symbols": [{"literal":"J"}, {"literal":"S"}, {"literal":"O"}, {"literal":"N"}, {"literal":"O"}, {"literal":"B"}, {"literal":"J"}, {"literal":"E"}, {"literal":"C"}, {"literal":"T"}], "postprocess": (d) => d.join('')},
    {"name": "baseType", "symbols": ["baseType$string$9"]},
    {"name": "baseType$string$10", "symbols": [{"literal":"J"}, {"literal":"S"}, {"literal":"O"}, {"literal":"N"}, {"literal":"A"}, {"literal":"R"}, {"literal":"R"}, {"literal":"A"}, {"literal":"Y"}], "postprocess": (d) => d.join('')},
    {"name": "baseType", "symbols": ["baseType$string$10"]},
    {"name": "baseType$string$11", "symbols": [{"literal":"D"}, {"literal":"A"}, {"literal":"T"}, {"literal":"E"}, {"literal":"T"}, {"literal":"I"}, {"literal":"M"}, {"literal":"E"}], "postprocess": (d) => d.join('')},
    {"name": "baseType", "symbols": ["baseType$string$11"]},
    {"name": "parameterType", "symbols": ["baseType"]},
    {"name": "lowercase", "symbols": [/[a-z]/]},
    {"name": "uppercase", "symbols": [/[A-Z]/]},
    {"name": "letter", "symbols": ["lowercase"]},
    {"name": "letter", "symbols": ["uppercase"]},
    {"name": "digit", "symbols": [/[0-9]/]},
    {"name": "name$subexpression$1", "symbols": ["letter"]},
    {"name": "name$subexpression$1", "symbols": [{"literal":"_"}]},
    {"name": "name$ebnf$1", "symbols": []},
    {"name": "name$ebnf$1", "symbols": ["name$ebnf$1", /[letter | digit | "_"]/], "postprocess": (d) => d[0].concat([d[1]])},
    {"name": "name", "symbols": ["name$subexpression$1", "name$ebnf$1"]},
    {"name": "graphName", "symbols": ["name"]},
    {"name": "queryName", "symbols": ["name"]},
    {"name": "paramName", "symbols": ["name"]},
    {"name": "vertexType", "symbols": ["name"]},
    {"name": "edgeType", "symbols": ["name"]},
    {"name": "accumName", "symbols": ["name"]},
    {"name": "vertexSetName", "symbols": ["name"]},
    {"name": "attrName", "symbols": ["name"]},
    {"name": "varName", "symbols": ["name"]},
    {"name": "tupleType", "symbols": ["name"]},
    {"name": "fieldName", "symbols": ["name"]},
    {"name": "funcName", "symbols": ["name"]},
    {"name": "_$ebnf$1", "symbols": []},
    {"name": "_$ebnf$1", "symbols": ["_$ebnf$1", /[ \t\n\r]/], "postprocess": (d) => d[0].concat([d[1]])},
    {"name": "_", "symbols": ["_$ebnf$1"]}
  ],
  ParserStart: "createQuery",
};

export default grammar;
