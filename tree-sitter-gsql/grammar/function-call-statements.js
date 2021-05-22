/*
## Function Call Statement ##
funcCallStmt := name ["<" type ["," type"]* ">"] "(" [argList] ")"
              | globalAccumName ("." funcName "(" [argList] ")")+
           
argList := expr ["," expr]*


#########################################################
*/

const { escape_sequence } = require("./types-and-names");


/*
funcCallStmt := name ["<" type ["," type"]* ">"] "(" [argList] ")"
              | globalAccumName ("." funcName "(" [argList] ")")+
*/

// TODO: 
module.exports = {

    funcCallStmt: $ => choice(
        seq($.name, optional(seq("<", $.type, repeat(seq(",", $.type)), ">")), "(", optional($.argList), ")"),
    ),
    // argList := expr ["," expr]*
    argList: $ => seq(
        $.expr, repeat(seq(",", $.expr))
    )
}