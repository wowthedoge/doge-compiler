%{
%}

%% 

[a-zA-Z] { printf("letter"); }
[a-zA-Z]+ { printf("word"); }
[0-9]+ { printf("number"); }

%% 

int main(){ yylex(); }
