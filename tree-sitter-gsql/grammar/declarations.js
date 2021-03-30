/*
## Declarations ##



localVarDeclStmt := baseType varName "=" expr

vSetVarDeclStmt := vertexSetName ["(" vertexType ")"]
                   "=" (seedSet | simpleSet | selectBlock)

simpleSet := vertexSetName | "(" simpleSet ")"
           | simpleSet (UNION | INTERSECT | MINUS) simpleSet

seedSet := "{" [seed ["," seed ]*] "}"
seed := '_' 
      | ANY
      | vertexSetName
      | globalAccumName
      | vertexType ".*"
      | paramName
      | "SelectVertex" selectVertParams

selectVertParams := "(" filePath "," columnId "," (columnId | name) ","
                 stringLiteral "," (TRUE | FALSE) ")" ["." FILTER "(" condition ")"]

columnId := "$"(integer | stringLiteral)
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
    )
}