%{
#include <stdio.h>
#include <stdlib.h>
%}

%token MAX MIN

%%

program: max | min

max: MAX {
    printf("max\n");
    exit(0);
    };

min: MIN {
    printf("min\n");
    exit(0);
    };

%%
