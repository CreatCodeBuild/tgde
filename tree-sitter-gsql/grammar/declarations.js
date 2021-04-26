/*
## Declarations ##



localVarDeclStmt := baseType varName "=" expr





*/
const { kw } = require("./index");
module.exports = {
    // baseDeclStmt    := baseType name ["=" constant] ["," name ["=" constant]]*
    baseDeclStmt: $ => seq(
        $.baseType, $.name, optional(seq("=", $.constant)), repeat(seq(",", $.name, optional(seq("=", $.constant))))
    ),

    // fileDeclStmt := FILE fileVar "(" filePath ")"
    // fileVar := name
    fileDeclStmt: $ => seq(
        kw("FILE")
    ),
    fileVar: $ => $.name,

    
    // vSetVarDeclStmt := vertexSetName ["(" vertexType ")"]
    //                    "=" (seedSet | simpleSet | selectBlock)
    vSetVarDeclStmt: $=> seq(
        $.vertexSetName, optional(seq(
            "(", $.vertexType, ")"
        )),
        "=",
        choice($.seedSet, $.simpleSet, choice($.gsqlSelectBlock))
    ),

    // simpleSet := vertexSetName | "(" simpleSet ")"
    //            | simpleSet (UNION | INTERSECT | MINUS) simpleSet
    simpleSet: $=> choice(
        $.vertexSetName,
        seq("(", $.simpleSet, ")"),
        seq(
            $.simpleSet,
            choice(kw("UNION"), kw("INTERSECT"), kw("MINUS")),
            $.simpleSet
        )
    ),

    // seedSet := "{" [seed ["," seed ]*] "}"
    // seed := '_' 
    //       | ANY
    //       | vertexSetName
    //       | globalAccumName
    //       | vertexType ".*"
    //       | paramName
    //       | "SelectVertex" selectVertParams
    seedSet: $ => seq(
        "{",
        optional(seq(
            $.seed, repeat(seq(",", $.seed))
        )),
        "}"
    ),
    seed: $ => choice(
        "_",
        kw("ANY"),
        $.vertexSetName,
        $.globalAccumName,
        seq($.vertexType, ".*"),
        $.paramName,
        seq(kw("SelectVertex"), $.selectVertParams),
    ),

    // selectVertParams := "(" filePath "," columnId "," (columnId | name) ","
    //              stringLiteral "," (TRUE | FALSE) ")" ["." FILTER "(" condition ")"]
    selectVertParams: $ => seq(
        "(", $.filePath, ",", $.columnId, ",", choice($.columnId, $.name), ",",
        $.stringLiteral, ",", choice(kw("TRUE", kw("FALSE"))), ")",
        optional(seq(
            ".", kw("FILTER"), "(", $.condition, ")"
        ))
    ),

    // columnId := "$"(integer | stringLiteral)
    columnId: $ => seq(
        "$", choice($.integer, $.stringLiteral)
    )
}