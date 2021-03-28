/*
GSQL Query Language EBNF
https://docs.tigergraph.com/dev/gsql-ref/querying/appendix-query/complete-formal-syntax-for-query-language
*/
module.exports = grammar({
    name: 'gsql',

    rules: {
        // TODO: add the actual grammar rules
        source_file: $ => $.createQuery,

        /*
        createQuery := CREATE [OR REPLACE] [DISTRIBUTED] QUERY queryName 
               "(" [parameterList] ")"
               [FOR GRAPH graphName]
               [RETURNS "("  baseType | accumType ")"]
               [API "(" stringLiteral ")"]
               [SYNTAX syntaxName]
               "{" queryBody "}"
        */
        createQuery: $ => seq(
            "CREATE", optional(seq("OR", "REPLACE")), optional("DISTRIBUTED"), "QUERY", $.queryName,
            "(", optional($.parameterList), ")",
            optional(seq("FOR", "GRAPH", $.graphName)),
            optional(seq("RETURNS", "(", choice($.baseType, $.accumType), ")"))
            // todo
        ),

        /*
        parameterList := parameterType paramName ["=" constant]
                 ["," parameterType paramName  ["=" constant]]*
        */
        parameterList: $ => seq(
            $.parameterType, $.paramName, optional(seq("=", $.constant)),
            repeat(seq(",", $.parameterType, $.paramName, optional(seq("=", $.constant))))
        ),

        /*
        #########################################################
        ## Types and names
        lowercase          := [a-z]
        uppercase          := [A-Z]
        letter             := lowercase | uppercase
        */

        /*
        digit              := [0-9]
        integer            := ["-"]digit+
        real               := ["-"]("."digit+) | ["-"](digit+"."digit*)
        numeric            := integer | real
        */
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
            "INT",
            "FLOAT",
            "DOUBLE",
            "STRING",
            "BOOL",
            seq("VERTEX", optional(seq("<", $.vertexType, ">"))),
            "EDGE",
            "JSONOBJECT",
            "JSONARRAY",
            "DATETIME",
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

        /*
        #########################################################
        ## Accumulators
        accumDeclStmt := accumType localAccumName ["=" constant]
                                ["," localAccumName ["=" constant]]*
                    | [STATIC] accumType globalAccumName ["=" constant]
                                        ["," globalAccumName ["=" constant]]*
        localAccumName := "@"accumName;
        globalAccumName := "@@"accumName;


        accumType := "SumAccum" "<" ( INT | FLOAT | DOUBLE | STRING | STRING COMPRESS) ">"
                | "MaxAccum" "<" ( INT | FLOAT | DOUBLE ) ">"
                | "MinAccum" "<" ( INT | FLOAT | DOUBLE ) ">"
                | "AvgAccum"
                | "OrAccum"
                | "AndAccum"
                | "BitwiseOrAccum"
                | "BitwiseAndAccum"
                | "ListAccum" "<" type ">"
                | "SetAccum"  "<" elementType ">"      
                | "BagAccum"  "<" elementType ">"      
                | "MapAccum"  "<" elementType "," (baseType | accumType | tupleType) ">"   
                | "HeapAccum" "<" tupleType ">" "(" simpleSize "," fieleName [ASC | DESC]
                                                    ["," fieldName [ASC | DESC]]* ")"
                | "GroupByAccum" "<" elementType fieldName ["," elementType fieldName]* ,
                                        accumType fieldName ["," accumType fieldName]* ">"
                | "ArrayAccum" "<" accumName ">"

        elementType := baseType | tupleType | STRING COMPRESS

        gAccumAccumStmt := globalAccumName "+=" expr
        */
        // todo
        accumType: $ => choice(
            " "
        ),

        /*
        ## Operators, Functions, and Expressions

        constant := numeric | stringLiteral | TRUE | FALSE | GSQL_UINT_MAX
                | GSQL_INT_MAX | GSQL_INT_MIN | TO_DATETIME "(" stringLiteral ")"
        
        */
        constant: $ => choice(
            $.numeric // todo
        ),

        //////////////////////////////////////////////////////////////////////////////////

        selectStmt: $ => seq(
            choice("select", "SELECT"),
            $.name,
            choice("from", "FROM"),
            field('step', $.step),
        ),

        // step -> stepSourceSet ["-" "(" stepEdgeSet ")" ("-"|"->") stepVertexSet]
        step: _ => seq(
            _.stepSourceSet,
            optional(
                seq(
                    "-(",
                    field("stepEdgeSet", _.stepEdgeSet),
                    ")",
                    choice("-", "->"),
                    field("stepVertexSet", _.stepVertexSet)
                )
            )
        ),

        stepEdgeSet: _ => _.name,

        stepVertexSet: _ => _.name,

        // stepSourceSet -> vertexSetName [":" vertexAlias]
        stepSourceSet: _ => _.vertexSetName,

        vertexSetName: _ => _.name,


    },

    // space, unix line end/LF, windows line end/CRLF
    extras: () => [' ', '\n', '\r\n']
});

function lowercase() { return /[a-z]/ }
function uppercase() { return /[A-Z]/ }
function letter() { return choice(lowercase(), uppercase())}
function digit() { return /[0-9]/ }