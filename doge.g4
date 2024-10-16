grammar doge;

program: statement+;

statement: assignment | functionCall | functionDef | loop;

assignment: ID '=' expr;
functionCall: ID '(' expr ')';
functionDef: ID '(' ID ')' '{' statement+ '}';
loop: 'for' '(' ID ',' ID ')' 'where' '(' expr ')' '{' statement+ '}';
expr: expr ('+'|'-'|'*'|'/') expr
    | '(' expr ')'
    | ID
    | INT
    | '[' (expr (',' expr)*)? ']';

ID: [a-zA-Z]+;
INT: [0-9]+;

WS: [ \t\r\n]+ -> skip;
