/*
## Operators, Functions, and Expressions

constant := numeric | stringLiteral | TRUE | FALSE | GSQL_UINT_MAX
          | GSQL_INT_MAX | GSQL_INT_MIN | TO_DATETIME "(" stringLiteral ")"
 
mathOperator := "*" | "/" | "%" | "+" | "-" | "<<" | ">>" | "&" | "|"
 
condition := expr
           | expr comparisonOperator expr
           | expr [ NOT ] IN setBagExpr
           | expr IS [ NOT ] NULL
           | expr BETWEEN expr AND expr
           | "(" condition ")"
           | NOT condition
           | condition (AND | OR) condition
           | (TRUE | FALSE)
           | expr [NOT] LIKE expr [ESCAPE escape_char]

comparisonOperator := "<" | "<=" | ">" | ">=" | "==" | "!="

aggregator := COUNT | MAX | MIN | AVG | SUM

expr := name  
    | globalAccumName
		| name "." name
		| name "." localAccumName ["\'"]
		| name "." name "." name "(" [argList] ")"
    | name "." name "(" [argList] ")" [ "." FILTER "(" condition ")" ]
		| name ["<" type ["," type]* ">"] "(" [argList] ")"
		| name "." localAccumName ("." name "(" [argList] ")")+ ["." name]
		| globalAccumName ("." name "(" [argList] ")")+ ["." name]
		| COALESCE "(" [argList] ")"
		| aggregator "(" [DISTINCT] setBagExpr ")"
		| ISEMPTY "(" setBagExpr ")"
		| expr mathOperator expr
		| "-" expr
		| "(" expr ")"
		| "(" argList "->" argList ")"	// key value pair for MapAccum
		| "[" argList "]"               // a list
		| constant
		| setBagExpr
		| name "(" argList ")"          // function call or a tuple object 
		
setBagExpr := name
        | globalAccumName 
    	  | name "." name
		    | name "." localAccumName
		    | name "." localAccumName ("." name "(" [argList] ")")+
		    | name "." name "(" [argList] ")" [ "." FILTER "(" condition ")" ]
		    | globalAccumName ("." name "(" [argList] ")")+
		    | setBagExpr (UNION | INTERSECT | MINUS) setBagExpr
		    | "(" argList ")"
		    | "(" setBagExpr ")"
*/
const { kw } = require("./index");
module.exports = {
    /*
    expr := name  
        | globalAccumName
        | name "." name
        | name "." localAccumName ["\'"]
        | name "." name "." name "(" [argList] ")"
        | name "." name "(" [argList] ")" [ "." FILTER "(" condition ")" ]
        | name ["<" type ["," type]* ">"] "(" [argList] ")"
        | name "." localAccumName ("." name "(" [argList] ")")+ ["." name]
        | globalAccumName ("." name "(" [argList] ")")+ ["." name]
        | COALESCE "(" [argList] ")"
        | aggregator "(" [DISTINCT] setBagExpr ")"
        | ISEMPTY "(" setBagExpr ")"
        | expr mathOperator expr
        | "-" expr
        | "(" expr ")"
        | "(" argList "->" argList ")"	// key value pair for MapAccum
        | "[" argList "]"               // a list
        | constant
        | setBagExpr
        | name "(" argList ")"          // function call or a tuple object     
    */
    expr: $ => choice(
        $.name,
        $.globalAccumName,
        seq($.name, ".", $.name),                               // | name "." name
        seq($.name, ".", $.localAccumName, optional("\'")),     // | name "." localAccumName ["\'"]
        seq($.expr, $.mathOperator, $.expr),                    // | expr mathOperator expr
        $.constant,
        $.setBagExpr,
        seq($.name, "(", $.argList, ")"),
        seq($.name, ".", $.name, "(", optional($.argList), ")", optional(seq(".", kw.FILTER, "(", $.condition, ")")))
        // todo
    ),
    /*
    setBagExpr := name
            | globalAccumName 
            | name "." name
                | name "." localAccumName
                | name "." localAccumName ("." name "(" [argList] ")")+
                | name "." name "(" [argList] ")" [ "." FILTER "(" condition ")" ]
                | globalAccumName ("." name "(" [argList] ")")+
                | setBagExpr (UNION | INTERSECT | MINUS) setBagExpr
                | "(" argList ")"
                | "(" setBagExpr ")"    
    */
    setBagExpr: $=> choice(
        $.name,
        $.globalAccumName,
        seq($.name, '.', $.name),
        seq($.name, '.', $.localAccumName),
        // seq($.name, '.', $.localAccumName, "(")
        seq("(", $.argList, ")"),
        seq($.name, ".", $.name, "(", optional($.argList), ")", optional(seq(".", kw("FILTER"), "(", $.condition, ")")))
    )
}