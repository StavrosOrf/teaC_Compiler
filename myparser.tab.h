/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_MYPARSER_TAB_H_INCLUDED
# define YY_YY_MYPARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    POSINT = 259,
    REAL = 260,
    STRING = 261,
    ARRAY = 262,
    ASSIGN = 263,
    KW_INT = 264,
    KW_REAL = 265,
    KW_BOOL = 266,
    KW_STRING = 267,
    KW_FUNC = 268,
    KW_IF = 269,
    KW_THEN = 270,
    KW_ELSE = 271,
    KW_ELSE_IF = 272,
    KW_AND = 273,
    KW_OR = 274,
    KW_NOT = 275,
    KW_NOT_EQL = 276,
    KW_LESS_EQL = 277,
    KW_FI = 278,
    KW_WHILE = 279,
    KW_LOOP = 280,
    KW_POOL = 281,
    KW_CONST = 282,
    KW_LET = 283,
    KW_RETURN = 284,
    KW_START = 285,
    KW_LIMITER = 286,
    KW_TRUE = 287,
    KW_FALSE = 288,
    F_readS = 289,
    F_readI = 290,
    F_readR = 291,
    F_writeS = 292,
    F_writeI = 293,
    F_writeR = 294
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 10 "myparser.y" /* yacc.c:1909  */

  char* str;
  int num;

#line 99 "myparser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYPARSER_TAB_H_INCLUDED  */
