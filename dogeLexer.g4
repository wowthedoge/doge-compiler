lexer grammar dogeLexer;

// Keywords
FOR     : 'for';
IF      : 'if';
ELSE    : 'else';
RETURN  : 'return';
WHERE   : 'where';
PRINT   : 'print';

// Operators
ADD     : '+';
MOD     : '%';
ASSIGN  : '=';
EQUAL   : '==';

// Symbols
LPAREN  : '(';
RPAREN  : ')';
LBRACE  : '{';
RBRACE  : '}';
LBRACKET : '[';
RBRACKET : ']';
COMMA   : ',';
SEMICOLON : ';';

// Identifiers and literals
ID      : [a-zA-Z_][a-zA-Z_0-9]*;  // Variable and function names
INT     : [0-9]+;                  // Integer literals

// Whitespace and comments (ignored)
WS      : [ \t\r\n]+ -> skip;       // Skip whitespace
COMMENT : '//' ~[\r\n]* -> skip;    // Skip single-line comments
