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
    stringLiteral: $ => seq(
        '"',
        repeat(choice(
            token.immediate(prec(1, /[^\\"\n]+/)),
            $.escape_sequence
        )),
        '"',
    ),

    escape_sequence: $ => token(prec(1, seq(
        '\\',
        choice(
            /[^xuU]/,
            /\d{2,3}/,
            /x[0-9a-fA-F]{2,}/,
            /u[0-9a-fA-F]{4}/,
            /U[0-9a-fA-F]{8}/
        )
    ))),
    integer: $ => seq(optional("-"), repeat1(digit())),
    real: $ => choice(
        seq(optional("-"), ".", repeat1(digit())),
        seq(optional("-"), repeat1(digit()), ".", repeat(digit()))
    ),
    numeric: $ => choice($.integer, $.real),


    /*
    name := (letter | "_") [letter | digit | "_"]*   // can be a single "_" or start with "_"
    */
    name: $ => /(_|[a-zA-z])[a-zA-z0-9_]*/,
    graphName: $ => $.name,
    queryName: $ => $.name,
    paramName: $ => $.name,
    vertexType: $ => $.name,
    edgeType: $ => $.name,
    accumName: $ => $.name,
    vertexSetName: $ => $.name,
    attrName: $ => choice(
        $.name,
        $.localAccumName
    ),
    varName: $ => $.name,
    tupleType: $ => $.name,
    fieldName: $ => $.name,
    funcName: $ => $.name,

    // filePath := paramName | stringLiteral
    filePath: $ => choice($.paramName, $.stringLiteral),

    // type := baseType | tupleType | accumType | STRING COMPRESS
    type: $=> choice($.baseType, $.tupleType, $.accumType, seq(kw("STRING"), kw("COMPRESS"))),

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
        kw("UINT"),
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

function digit() { return /[0-9]/ }
