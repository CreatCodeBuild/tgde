/*
## Accumulators
*/
const { kw } = require("./index");
module.exports = {
    /*
    accumDeclStmt := accumType localAccumName ["=" constant] ["," localAccumName ["=" constant]]*
                    | [STATIC] accumType globalAccumName ["=" constant] ["," globalAccumName ["=" constant]]*
    */
    accumDeclStmt: $ => choice(
        seq($.accumType, $.localAccumName,
            optional(seq("=", $.constant)),
            repeat(seq(",", $.localAccumName, optional(seq("=", $.constant))))
        ),
        seq(optional(kw("STATIC")), $.accumType, $.globalAccumName,
            optional(seq("=", $.constant)),
            repeat(seq(",", $.localAccumName, optional(seq("=", $.constant))))
        )
    ),

    localAccumName: $ => seq(   // localAccumName := "@"accumName;
        "@", $.accumName
    ),
    globalAccumName: $ => seq(  // globalAccumName := "@@"accumName;
        "@@", $.accumName
    ),

    /*
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
    */
    accumType: $ => choice(
        seq(kw("SumAccum"), "<", choice(kw("int"), kw("float"), kw("double"), kw("string"), kw("string compress")), ">"),
        kw("OrAccum"),
        // todo
    ),
    // elementType := baseType | tupleType | STRING COMPRESS

    // gAccumAccumStmt := globalAccumName "+=" expr
}