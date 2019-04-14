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
%type <str> func_body
%type <str> expr
%type <str> decl
%type <str> decl_const
%type <str> type
%type <str> const_type
%type <str> data
%type <str> func_decl
%type <str> func_par_decl 
%type <str> return_expr
%type <str> defined_func
%type <str> infix_operator
%type <str> prefix_operator
%type <str> func_param
%type <str> func_call
%type <str> commands



%left KW_OR
%left KW_AND
%left KW_LESS_EQL KW_NOT_EQL '=' '<'
%left '-' '+'
%left '*' '/' '%'
%right KW_NOT

%%

input:  
  %empty
| input body 
{ 
  if (yyerror_count == 0) {
    //puts(c_prologue);
    printf("%s\n", $2); 
  }  
}
;

body: 
  KW_LET decl ';'          { $$ = template("%s;",$2);}
| KW_CONST decl_const ';'  { $$ = template("%s;",$2);}              
| func_decl                
| commands ';'
| KW_CONST defined_func ";;;;"
;

defined_func:  KW_INT     {$$ = template("int");}
;

commands:
  func_call               { $$ = template("%s;",$1);}
| IDENTIFIER ASSIGN expr  { $$ = template("%s = %s ;",$1,$3);}
| return_expr 
;

type:
  KW_INT     {$$ = template("int");}
| KW_REAL    {$$ = template("double");}
| KW_BOOL    {$$ = template("int");}
| KW_STRING  {$$ = template("string");}
| "[]" type  {}
;

const_type:
  KW_INT     {$$ = template("const int");}
| KW_REAL    {$$ = template("const double");}
| KW_BOOL    {$$ = template("const int");}
| KW_STRING  {$$ = template("const string");}
;

func_body:
  %empty                  { $$ = template("");}
| KW_LET decl             { $$ = template("%s;",$2);}
| commands                { $$ = template("%s",$1);}
| func_body ';' func_body     { $$ = template("%s \n %s",$1,$3);}
;

func_decl:
  KW_CONST IDENTIFIER ASSIGN '(' func_par_decl ')' ':' type '{' func_body '}'{ $$ = template("%s %s(%s){\n %s } ",$8,$2,$5,$10); }

;

func_call: IDENTIFIER '(' func_param ')'     { $$ = template("%s(%s)", $1,$3); }
;

func_param:
  %empty                     { $$ = template("");}
| func_param ',' func_param  { $$ = template("%s,%s",$1,$3);}
| expr                       { $$ = template("%s",$1); } 
;

return_expr:
 KW_RETURN expr   { $$ = template("return %s ;",$2); }
;

func_par_decl:
  %empty                                    { $$ = template(""); }
| IDENTIFIER                                { $$ = template("%s",$1); } 
| IDENTIFIER '['']'                         { $$ = template("%s[]",$1); } 
| IDENTIFIER '['']' ':' type  func_par_decl { $$ = template("%s %s %s[]",$6,$5,$1); }        
| IDENTIFIER ':' type  func_par_decl        { $$ = template("%s %s %s",$4,$3,$1); } 
| func_par_decl ',' func_par_decl           { $$ = template("%s , %s",$3,$1); }
;

data:
  POSINT     
| REAL       
| STRING    
| KW_TRUE   { $$ = template("1"); }
| KW_FALSE  { $$ = template("0"); }
| ARRAY
;

decl_const: 
 ',' decl_const                          { $$ = template("%s , ", $2); }
| IDENTIFIER ASSIGN data decl_const      { $$ = template("%s %s = %s ", $4,$2,$3); }
| IDENTIFIER ARRAY ASSIGN data decl_const{ $$ = template("%s %s%s = %s ",$5, $1,$2,$4); }
| ':' const_type                         { $$ = template("%s",$2); }
;

decl:
  %empty                            { $$ = template(""); }
| ',' decl                          { $$ = template("%s,", $2); }
| IDENTIFIER decl                   { $$ = template("%s %s", $2, $1); }
| IDENTIFIER  ARRAY decl            { $$ = template("%s %s%s ", $3, $1,$2); }
| IDENTIFIER ARRAY ASSIGN data decl { $$ = template("%s %s%s = %s ",$5, $1,$2,$4); }
| IDENTIFIER ASSIGN data decl       { $$ = template("%s %s = %s ",$4, $1,$3); }
| ':' type                          { $$ = template("%s",$2); }
;

infix_operator:
 '+' { $$ = template("+"); }
|'-' { $$ = template("-"); }
|'*' { $$ = template("*"); }
|'/' { $$ = template("/"); }
|'%' { $$ = template("%%"); }
|'=' { $$ = template("=="); }
|'<' { $$ = template("<"); }
|KW_NOT_EQL { $$ = template("!="); }
|KW_LESS_EQL { $$ = template("<="); }
|KW_OR { $$ = template("||"); }
|KW_AND { $$ = template("&&"); }
;

prefix_operator:
 '+' { $$ = template("+"); }
|'-' { $$ = template("-"); }
|KW_NOT { $$ = template("!"); }
;

expr:
 POSINT
| REAL
| IDENTIFIER
| IDENTIFIER ARRAY                   { $$ = template("%s%s", $1,$2); }
| func_call
| '(' expr ')'                       { $$ = template("(%s)", $2); }
| expr infix_operator expr           { $$ = template("%s %s %s", $1,$2, $3); }
| prefix_operator expr               { $$ = template("(%s %s)", $1,$2); }
;

%%
int main () {
  if ( yyparse() == 0 )
    printf("Accepted!\n");
  else
    printf("Rejected!\n");
}
