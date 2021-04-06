/*
## Types and names

lowercase          := [a-z]
uppercase          := [A-Z]
letter             := lowercase | uppercase
digit              := [0-9]
integer            := ["-"]digit+
real               := ["-"]("."digit+) | ["-"](digit+"."digit*)

numeric            := integer | real


name := (letter | "_") [letter | digit | "_"]*   // can be a single "_" or start with "_"
graphName := name
queryName := name
paramName := name
vertexType := name
edgeType := name
accumName := name
vertexSetName := name
attrName := name
varName := name
tupleType := name
fieldName := name
funcName := name

type := baseType | tupleType | accumType | STRING COMPRESS

baseType := INT
          | UINT
          | FLOAT
          | DOUBLE
          | STRING
          | BOOL
          | VERTEX ["<" vertexType ">"]
          | EDGE
          | JSONOBJECT
          | JSONARRAY
          | DATETIME

typedef := TYPEDEF TUPLE "<" tupleFields ">" tupleType

tupleFields := (baseType fieldName) | (fieldName baseType)
           ["," (baseType fieldName) | (fieldName baseType)]*

parameterType := baseType
               | [ SET | BAG ] "<" baseType ">"
               | FILE
*/
const { kw, TRUE, FALSE } = require("./index");
module.exports = {
    // stringLiteral      := '"' [~["] | '\\' ('"' | '\\')]* '"'
    stringLiteral: $ => token.immediate(seq(
        '"', '"'    //todo
    )),
    integer: $ => seq(optional("-"), repeat1(digit())),
    real: $ => choice(
        seq(optional("-"), ".", repeat1(digit())),
        seq(optional("-"), repeat1(digit()), ".", repeat(digit()))
    ),
    numeric: $ => choice($.integer, $.real),

    /*
    stringLiteral      := '"' [~["] | '\\' ('"' | '\\')]* '"'
    */

    /*
    name := (letter | "_") [letter | digit | "_"]*   // can be a single "_" or start with "_"
    */
    name: $ => seq(
        choice(letter(), "_"),
        repeat(choice(letter(), digit(), "_"))
    ),
    graphName: $ => $.name,
    queryName: $ => $.name,
    paramName: $ => $.name,
    vertexType: $ => $.name,
    edgeType: $ => $.name,
    accumName: $ => $.name,
    vertexSetName: $ => $.name,
    attrName: $ => $.name,
    varName: $ => $.name,
    tupleType: $ => $.name,
    fieldName: $ => $.name,
    funcName: $ => $.name,

    // filePath := paramName | stringLiteral
    filePath: $=> choice($.paramName, $.stringLiteral),

    /*
    baseType := INT
      | UINT
      | FLOAT
      | DOUBLE
      | STRING
      | BOOL
      | VERTEX ["<" vertexType ">"]
      | EDGE
      | JSONOBJECT
      | JSONARRAY
      | DATETIME
    */
    baseType: $ => choice(
        kw("INT"),
        kw("FLOAT"),
        kw("DOUBLE"),
        kw("STRING"),
        kw("BOOL"),
        seq(kw("VERTEX"), optional(seq("<", $.vertexType, ">"))),
        kw("EDGE"),
        kw("JSONOBJECT"),
        kw("JSONARRAY"),
        kw("DATETIME"),
    ),

    /*
    parameterType := baseType
           | [ SET | BAG ] "<" baseType ">"
           | FILE
    */
    parameterType: $ => choice(
        $.baseType,
        seq(optional(choice("SET", "BAG")), "<", $.baseType, ">"),
        "FILE"
    ),
}

function lowercase() { return /[a-z]/ }
function uppercase() { return /[A-Z]/ }
function letter() { return choice(lowercase(), uppercase()) }
function digit() { return /[0-9]/ }