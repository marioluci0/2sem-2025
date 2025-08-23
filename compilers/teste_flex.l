%option noyywrap
%{
  #include <stdio.h>
  void print(char*);
%}

NUM     [0-9]+
ID      [A-z][A-z0-9]+
STRING  \".*\" 

%%

{NUM}         {print("INT");}
{NUM}\.{NUM}  {print("REAL");}
{STRING}      {print("STRING");}
\+            {print("OPSUM");}
\-            {print("OPSUB");}
{ }+          {}
.             {print("ERROR");}

%%

void print(char* token) {
  printf("%s\t=>\t%s\n", token, yytext);
}

int main(void) {
  printf("Pressione CRTL+C para encerrar \n");
  yylex();
}
