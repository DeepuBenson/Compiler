%{

%}

%%
 
[0-9]+  {
            printf("An integer: %s\n", yytext);
        }

.|\n    {    }

%%

int main(void)
{
    yylex();
    return 0;
}
