%{
  #include <stdio.h>
  #include "cgen.h"
  
  extern int yylex(void);
  extern int line_num;
%}

%union
{
  char* str;
  int num;
}

%define parse.trace
%debug

%token <str> IDENTIFIER
%token <str> POSINT 
%token <str> REAL 
%token <str> STRING
%token <str> ARRAY

%token <str> ASSIGN

%token <str> KW_INT
%token <str> KW_REAL
%token <str> KW_BOOL
%token <str> KW_STRING

%token <str> KW_IF
%token <str> KW_THEN
%token <str> KW_ELSE
%token <str> KW_AND
%token <str> KW_OR
%token <str> KW_NOT
%token <str> KW_NOT_EQL
%token <str> KW_LESS_EQL
%token <str> KW_FI
%token <str> KW_WHILE
%token <str> KW_LOOP
%token <str> KW_POOL
%token <str> KW_CONST
%token <str> KW_LET
%token <str> KW_RETURN
%token <str> KW_START

%token <str> KW_TRUE
%token <str> KW_FALSE

%start input

%type <str> body
%type <str> expr
%type <str> decl
%type <str> decl_const
%type <str> type
%type <str> const_type
%type <str> data
%type <str> func_decl
%type <str> func_par_decl 
%type <str> return_expr

%left '-' '+'
%left '*' '/'

%%

input:  
  %empty
| input body ';'
{ 
  if (yyerror_count == 0) {
    //puts(c_prologue);
    printf("%s\n", $2); 
  }  
}
;
body: 
  KW_LET decl          { $$ = template("%s;",$2);}
| KW_CONST decl_const  { $$ = template("%s;",$2);}
| expr
| func_decl            { $$ = template("%s;",$1);}
;

type:
  KW_INT     {printf("int ");}
| KW_REAL    {printf("double ");}
| KW_BOOL    {printf("bool ");}
| KW_STRING  {printf("string ");}
| "[]" type  {}
;

const_type:
  KW_INT     {printf("const int ");}
| KW_REAL    {printf("const double ");}
| KW_BOOL    {printf("const bool ");}
| KW_STRING  {printf("const string ");}
;

func_decl:
  KW_CONST IDENTIFIER ASSIGN '(' func_par_decl ')' ':' type '{' return_expr'}'
;

return_expr:
  %empty              { $$ = template(""); }
| KW_RETURN expr ';'  { $$ = template("return %s",$2); }
;

func_par_decl:
  %empty                                    { $$ = template(""); }
| IDENTIFIER "[]" ':' type  func_par_decl  { $$ = template("%"); }        
| IDENTIFIER ':' type  func_par_decl        { $$ = template(""); }
| func_par_decl ',' func_par_decl           { $$ = template(""); }
;

data:
  POSINT     
| REAL       
| STRING    
| KW_TRUE   { $$ = template("true"); }
| KW_FALSE  { $$ = template("false"); }
| ARRAY
;

decl_const: 
 ',' decl_const                          { $$ = template(",%s ", $2); }
| IDENTIFIER ASSIGN data decl_const      { $$ = template("%s = %s %s", $2,$3,$4); }
| ':' const_type                         { $$ = template(""); }
;

decl: 
 ',' decl                     { $$ = template(",%s ", $2); }
| IDENTIFIER decl             { $$ = template("%s %s", $1, $2); }
| IDENTIFIER  ARRAY decl      { $$ = template("%s%s %s", $1, $2,$3); }
| IDENTIFIER ASSIGN data decl { $$ = template("%s = %s %s", $2,$3,$4); }
| ':' type                    { $$ = template(""); }
;

expr:
  POSINT
| REAL
| IDENTIFIER
| '(' expr ')'  { $$ = template("(%s)", $2); }
| expr '+' expr { $$ = template("%s + %s", $1, $3); }
| expr '-' expr { $$ = template("%s - %s", $1, $3); }
| expr '*' expr { $$ = template("%s * %s", $1, $3); }
| expr '/' expr { $$ = template("%s / %s", $1, $3); }
;

%%
int main () {
  if ( yyparse() == 0 )
    printf("Accepted!\n");
  else
    printf("Rejected!\n");
}
