%{
  #include <stdio.h>
  #include <string.h>  

  #include "cgen.h"
  #include  "myparser.tab.h"

  int line_num;
%}

ID      [a-zA-Z][0-9a-zA-Z_]*
DIGIT   [0-9]
NUMBER  {DIGIT}{DIGIT}*
DECIMAL ("."{NUMBER})|({NUMBER}("."{NUMBER}?)?)
REAL    {DECIMAL}([eE][+-]?{NUMBER})?
STRING  \"[^\\'\n\"]*\"
ARRAY	("["{NUMBER}"]")



%x comment 

%% 

int			return KW_INT;
real	 	return KW_REAL;
bool		return KW_BOOL;
string 		return KW_STRING;

and			return KW_AND;
or	 		return KW_OR;
not			return KW_NOT;
if 			return KW_IF;
else 		return KW_ELSE;
then		return KW_THEN;
true		return KW_TRUE;
false		return KW_FALSE;
fi			return KW_FI;
while		return KW_WHILE;
loop		return KW_LOOP;
pool		return KW_POOL;
const		return KW_CONST;
let			return KW_LET;
return		return KW_RETURN;
start		return KW_START;

readString  return F_readS;
readInt  	return F_readI;
readReal  	return F_readR;
writeString return F_writeS;
writeInt  	return F_writeI;
writeReal  	return F_writeR;

{ID}        { yylval.str = strdup(yytext); return IDENTIFIER; }        
{NUMBER}    { yylval.str = strdup(yytext); return POSINT; }
{REAL}      { yylval.str = strdup(yytext); return REAL; }
{STRING}    { yylval.str = strdup(yytext); return STRING; }
{ARRAY}     { yylval.str = strdup(yytext); return ARRAY; }



"<-"		{return ASSIGN;}

"+"         return '+';
"-"         return '-';
"*"         return '*';
"/"         return '/';
"%"         return '%';
"("			return '(';
")"			return ')';
"{"			return '{';
"}"			return '}';
"["			return '[';
"]"			return ']';
"="			return '=';
"!="		{return  KW_NOT_EQL;}
"<"			return '<';
"<="		{return KW_LESS_EQL;}
"=>"		{return KW_MAIN_ASSIGN;}
";"			return ';';
":"			return ':';
","			return ',';

"--"[^\n]*  		    /* eat line comments */

"(*"                    { BEGIN(comment);}

<comment>[^*\n]*        /* eat anything that's not a '*' */
<comment>"*"+[^*)\n]*   /* eat up '*'s not followed by '/'s */
<comment>\n             ++line_num;
<comment>"*"+"*)"        { BEGIN(INITIAL); }

[ \r\t]	/* skip whitespace */
\n 			++line_num;
<<EOF>> 	return EOF;
.            { yyerror("lexical error: unrecognized literal '%s'\n", yytext); }
