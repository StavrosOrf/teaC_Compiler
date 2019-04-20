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
%token <str> KW_FUNC
%token <str> KW_IF
%token <str> KW_THEN
%token <str> KW_ELSE
%token <str> KW_ELSE_IF
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
%token <str> KW_LIMITER

%token <str> KW_TRUE
%token <str> KW_FALSE

%token <str> F_readS
%token <str> F_readI
%token <str> F_readR
%token <str> F_writeS
%token <str> F_writeI
%token <str> F_writeR

%start input

%type <str> main_func
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
%type <str> func_param
%type <str> func_call
%type <str> commands
%type <str> if_state
%type <str> while_state
%type <str> main_body
%type <str> decl_part


%left KW_OR
%left KW_AND
%left KW_LESS_EQL KW_NOT_EQL '=' '<'
%left '-' '+'
%left '*' '/' '%'
%right KW_NOT

%%

input:  
  %empty
| decl_part main_func 
{ 
  if (yyerror_count == 0) {
    puts(c_prologue);
    printf("%s\n\n%s \n", $1,$2); 
  }  
}
;

decl_part:
  %empty                          { $$ = template("");}
| decl_part  KW_CONST decl_const ';'  { $$ = template("%s\n%s;",$1,$3);} 
| decl_part KW_LET decl ';'           { $$ = template("%s\n%s;",$1,$3);}
| decl_part func_decl ';'             { $$ = template("%s\n\n%s",$1,$2);}
| decl_part func_decl                 { $$ = template("%s\n\n%s",$1,$2);}
;

main_func:               
 KW_CONST KW_START ASSIGN '(' ')' ':' KW_INT KW_FUNC '{' main_body '}'{ $$ = template("int main(){\n %s \n}",$10);}
;

defined_func:  
  F_readS '(' ')'                  { $$ = template("readString()");}
| F_readI '(' ')'                  { $$ = template("readInt()");}
| F_readR '(' ')'                  { $$ = template("ReadReal()");}
| F_writeS '('expr')'              { $$ = template("writeString(%s)",$3);}
| F_writeI '('expr')'              { $$ = template("writeInt(%s)",$3);}
| F_writeR '('expr')'              { $$ = template("writeReal(%s)",$3);}
;

commands:
  func_call ';'                           { $$ = template("%s;",$1);}
| defined_func ';'                        { $$ = template("%s;",$1);}
| KW_LET decl ';'                         { $$ = template("%s;",$2);}
| IDENTIFIER ASSIGN expr ';'              { $$ = template("%s = %s ;",$1,$3);}
| return_expr ';'
| KW_IF expr KW_THEN if_state KW_FI ';'          { $$ = template("if(%s){\n %s}",$2,$4);}
| KW_WHILE expr KW_LOOP while_state KW_POOL ';'  { $$ = template("while(%s){\n %s \n} ",$2,$4);}
;

main_body:
  commands
| commands  main_body  { $$ = template(" %s\n%s",$1,$2);}
;

while_state:
  commands
| commands  while_state  { $$ = template("  %s\n %s",$1,$2);}

if_state: 
  %empty                              { $$ = template("");}
| commands  if_state                  { $$ = template(" %s\n %s",$1,$2);}
| KW_ELSE_IF expr KW_THEN if_state    { $$ = template("}else if(%s){ \n %s",$2,$4);}
| KW_ELSE if_state                    { $$ = template("}else{ \n %s",$2);}
;

type:
  KW_INT     {$$ = template("int");}
| KW_REAL    {$$ = template("double");}
| KW_BOOL    {$$ = template("int");}
| KW_STRING  {$$ = template("char*");}
| "[]" type  {}
;

const_type:
  KW_INT     {$$ = template("const int");}
| KW_REAL    {$$ = template("const double");}
| KW_BOOL    {$$ = template("const int");}
| KW_STRING  {$$ = template("const char*");}
;

func_body:
  %empty                    { $$ = template("");}
| commands func_body        { $$ = template("%s \n %s",$1,$2);}

;

func_decl:
  KW_CONST IDENTIFIER ASSIGN '(' func_par_decl ')' ':' type KW_FUNC'{' func_body '}'{ $$ = template("%s %s(%s)\n {\n  %s} ",$8,$2,$5,$11); }
;

func_call: IDENTIFIER '(' func_param ')'     { $$ = template("%s(%s)", $1,$3); }
;

func_param:
  %empty                     { $$ = template("");}
| expr ',' func_param        { $$ = template("%s,%s",$1,$3);}
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

| IDENTIFIER  ',' func_par_decl                 { $$ = template("%s,%s ",$3,$1); } 
| IDENTIFIER '['']'  ',' func_par_decl          { $$ = template("%s, %s[]",$5,$1); } 
| IDENTIFIER '['']' ':' type ',' func_par_decl  { $$ = template("%s, %s %s[]",$7,$5,$1); }        
| IDENTIFIER ':' type  ',' func_par_decl        { $$ = template("%s, %s %s",$5,$3,$1); } 
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


expr:
  POSINT
| KW_TRUE   { $$ = template("1"); }
| KW_FALSE  { $$ = template("0"); }
| STRING
| REAL
| IDENTIFIER
| IDENTIFIER ARRAY        { $$ = template("%s%s", $1,$2); }
| defined_func
| func_call
| '(' expr ')'            { $$ = template("(%s)", $2); }
| '+' expr                { $$ = template("(+%s)",$2); }
| '-' expr                { $$ = template("(-%s)",$2); }
| KW_NOT expr             { $$ = template("(!%s)",$2); }
| expr '+' expr           { $$ = template("%s + %s", $1,$3); }
| expr '-' expr           { $$ = template("%s - %s", $1,$3); }
| expr '*' expr           { $$ = template("%s * %s", $1,$3); }
| expr '/' expr           { $$ = template("%s / %s", $1,$3); }
| expr '%' expr           { $$ = template("%s %% %s", $1,$3); }
| expr '=' expr           { $$ = template("%s == %s", $1,$3); }
| expr '<' expr           { $$ = template("%s < %s", $1,$3); }
| expr KW_NOT_EQL expr    { $$ = template("%s != %s", $1,$3); }
| expr KW_LESS_EQL expr   { $$ = template("%s <= %s", $1,$3); }
| expr KW_OR expr         { $$ = template("%s || %s", $1,$3); }
| expr KW_AND expr        { $$ = template("%s && %s", $1,$3); }
;

%%
int main () {
  if ( yyparse() == 0 )
    printf("//Accepted!\n");
  else
    printf("\n");
}
