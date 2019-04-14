/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "myparser.y" /* yacc.c:339  */

  #include <stdio.h>
  #include "cgen.h"
  
  extern int yylex(void);
  extern int line_num;

#line 74 "myparser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "myparser.tab.h".  */
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
    KW_MAIN_ASSIGN = 268,
    KW_IF = 269,
    KW_THEN = 270,
    KW_ELSE = 271,
    KW_AND = 272,
    KW_OR = 273,
    KW_NOT = 274,
    KW_NOT_EQL = 275,
    KW_LESS_EQL = 276,
    KW_FI = 277,
    KW_WHILE = 278,
    KW_LOOP = 279,
    KW_POOL = 280,
    KW_CONST = 281,
    KW_LET = 282,
    KW_RETURN = 283,
    KW_START = 284,
    KW_TRUE = 285,
    KW_FALSE = 286,
    F_readS = 287,
    F_readI = 288,
    F_readR = 289,
    F_writeS = 290,
    F_writeI = 291,
    F_writeR = 292
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 10 "myparser.y" /* yacc.c:355  */

  char* str;
  int num;

#line 157 "myparser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 174 "myparser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   345

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  195

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    44,     2,     2,
      46,    47,    42,    41,    52,    40,     2,    43,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,    45,
      39,    38,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    93,    93,    94,   104,   105,   114,   115,   116,   117,
     118,   122,   123,   124,   125,   126,   127,   131,   132,   133,
     134,   135,   136,   140,   141,   145,   146,   149,   150,   151,
     152,   156,   157,   158,   159,   160,   164,   165,   166,   167,
     171,   172,   177,   181,   185,   186,   187,   191,   195,   196,
     197,   198,   199,   201,   202,   203,   204,   210,   211,   212,
     213,   214,   215,   219,   220,   221,   222,   226,   227,   228,
     229,   230,   231,   232,   237,   238,   239,   240,   241,   242,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "POSINT", "REAL", "STRING",
  "ARRAY", "ASSIGN", "KW_INT", "KW_REAL", "KW_BOOL", "KW_STRING",
  "KW_MAIN_ASSIGN", "KW_IF", "KW_THEN", "KW_ELSE", "KW_AND", "KW_OR",
  "KW_NOT", "KW_NOT_EQL", "KW_LESS_EQL", "KW_FI", "KW_WHILE", "KW_LOOP",
  "KW_POOL", "KW_CONST", "KW_LET", "KW_RETURN", "KW_START", "KW_TRUE",
  "KW_FALSE", "F_readS", "F_readI", "F_readR", "F_writeS", "F_writeI",
  "F_writeR", "'='", "'<'", "'-'", "'+'", "'*'", "'/'", "'%'", "';'",
  "'('", "')'", "':'", "'{'", "'}'", "\"[]\"", "','", "'['", "']'",
  "$accept", "input", "part3", "body", "defined_func", "commands",
  "main_body", "while_state", "if_state", "type", "const_type",
  "func_body", "func_decl", "func_call", "func_param", "return_expr",
  "func_par_decl", "data", "decl_const", "decl", "expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,    61,    60,
      45,    43,    42,    47,    37,    59,    40,    41,    58,   123,
     125,   293,    44,    91,    93
};
# endif

#define YYPACT_NINF -95

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-95)))

#define YYTABLE_NINF -3

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      14,    17,   169,   -95,    34,   108,   115,    15,    23,   115,
     -27,   -26,   -24,   -23,   -15,   -12,   -95,   -95,   -95,   -95,
      -8,    -7,   115,   115,    33,   -95,   -95,   108,   115,   115,
     115,   115,   108,    27,    -8,   200,    28,   -95,   236,    81,
      48,   128,    24,    20,     3,    36,    23,    25,   244,    39,
      50,    68,   118,   122,   123,   -95,   -95,   228,    82,   125,
     -95,   -95,   -95,    40,    40,   190,   -95,   -95,   108,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     130,   120,    86,   101,   -95,   -95,   -95,   -95,   -95,    88,
     -95,   -95,    21,   220,   -95,   -95,   -95,   -95,   -95,    36,
     -95,   -95,   -95,   105,   106,   107,   112,   113,   124,   -95,
     -95,   115,   -95,   -95,   279,   272,   254,   254,   254,   254,
      40,    40,   -95,   -95,   -95,   130,   137,   220,   -95,   -95,
     -95,   -95,   -95,   -95,   167,    24,   126,   220,   220,   -95,
      23,   -95,   -95,   -95,   -95,   129,   131,   133,   -95,   -95,
     -95,    24,   -20,   132,   -95,   127,    23,   -95,   -95,   -95,
     -95,   -95,    36,   167,   135,   134,   176,   -95,    10,   -95,
     -40,    36,   177,   167,   -95,    36,   167,   145,   149,   -95,
      12,   -95,   130,   130,   167,   -95,   130,   150,   130,   159,
     -95,   -95,   -95,   -95,   -95
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     3,     1,     0,    27,     0,     0,    67,     0,
       0,     0,     0,     0,     0,     0,     5,     9,     8,     7,
       0,     0,     0,    44,    76,    74,    75,    27,     0,     0,
       0,     0,    27,     0,    78,     0,    76,    78,     0,     0,
       0,     0,     0,     0,    67,     0,    67,     0,    47,     0,
       0,     0,     0,     0,     0,    17,    20,     0,     0,    46,
      77,    30,    82,    81,    80,     0,    29,    21,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,    37,    38,    39,    66,     0,
      63,     6,    67,     0,    69,    31,    32,    33,    34,     0,
      73,    68,    18,     0,     0,     0,     0,     0,     0,    19,
      43,    44,    79,    28,    93,    92,    90,    91,    88,    89,
      84,    83,    85,    86,    87,    25,     0,     0,    57,    58,
      59,    62,    60,    61,    48,     0,     0,     0,     0,    70,
      67,    35,    11,    12,    13,     0,     0,     0,    45,    26,
      22,     0,    49,     0,    64,     0,    67,    72,    14,    15,
      16,    65,     0,    48,     0,     0,     0,    71,    48,    53,
      50,     0,     0,    48,    52,     0,    48,     0,     0,    56,
      48,    54,    40,     0,    48,    51,    40,     0,    23,     0,
      55,    41,    42,    24,    10
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -95,   -95,   -95,   -95,   -95,     5,    11,    87,   -11,   -94,
     -95,    37,   -95,    -2,   102,   -95,   161,   -84,   -41,   -42,
      30
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    16,    17,    32,   189,   126,    33,   100,
      88,   187,    19,    37,    58,    21,   153,   135,    43,    47,
      35
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,    90,    94,    34,   101,   141,    44,    18,   175,   140,
      92,    93,   176,   152,    -2,   152,    61,     3,    39,    49,
      50,    66,    51,    52,    44,    34,    44,    89,   162,   138,
      34,    53,   163,   164,    54,    60,    38,    55,    56,    48,
      60,    22,    22,   151,    40,    95,    96,    97,    98,    67,
     139,    45,    57,    59,   156,    46,    83,   113,    62,    63,
      64,    65,   173,    41,   184,    91,    34,    42,   168,    45,
     102,    45,    41,    46,    23,    46,    42,   177,    20,    23,
      23,   180,    77,    78,    79,   125,   103,    99,    81,    82,
     128,   129,   130,   131,   154,    81,   137,   104,   157,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     161,    24,    25,    26,   167,   105,   132,   133,    36,    25,
      26,   106,     5,    20,    27,   107,   108,    28,   127,   110,
     125,     6,   134,     4,    28,     8,     9,    84,    85,    86,
      87,    59,    69,    70,     5,    71,    72,   136,    29,    30,
     142,   143,   144,     6,    31,    29,    30,     8,     9,   145,
     146,    31,   150,    73,    74,    75,    76,    77,    78,    79,
     152,   147,     4,   155,   158,   166,   159,   111,   160,   165,
      20,    20,   171,     5,    20,   172,    20,   186,   188,   170,
     178,   186,     6,   188,   182,     7,     8,     9,   183,   193,
     192,    10,    11,    12,    13,    14,    15,    69,    70,   194,
      71,    72,   149,   148,     0,    68,     0,    69,    70,     0,
      71,    72,     0,   191,   128,   129,   130,   131,    73,    74,
      75,    76,    77,    78,    79,     0,     0,   112,    73,    74,
      75,    76,    77,    78,    79,    69,    70,     0,    71,    72,
     132,   133,     0,    69,    70,     0,    71,    72,     0,     0,
      80,    69,    70,     0,    71,    72,    73,    74,    75,    76,
      77,    78,    79,   109,    73,    74,    75,    76,    77,    78,
      79,     0,    73,    74,    75,    76,    77,    78,    79,    69,
       0,     0,    71,    72,    75,    76,    77,    78,    79,    71,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,    73,    74,    75,
      76,    77,    78,    79,   169,     0,     0,     0,     0,   174,
       0,     0,     0,     0,   179,     0,     0,   181,     0,     0,
       0,   185,     0,     0,     0,   190
};

static const yytype_int16 yycheck[] =
{
       2,    42,    44,     5,    46,    99,     3,     2,    48,    93,
       7,     8,    52,     3,     0,     3,    27,     0,     3,    46,
      46,    32,    46,    46,     3,    27,     3,     3,    48,     8,
      32,    46,    52,    53,    46,     7,     6,    45,    45,     9,
       7,     8,     8,   127,    29,     9,    10,    11,    12,    22,
      92,    48,    22,    23,   138,    52,     8,    68,    28,    29,
      30,    31,    52,    48,    52,    45,    68,    52,   162,    48,
      45,    48,    48,    52,    46,    52,    52,   171,    80,    46,
      46,   175,    42,    43,    44,    80,    47,    51,     7,     8,
       4,     5,     6,     7,   135,     7,     8,    47,   140,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
     151,     3,     4,     5,   156,    47,    30,    31,     3,     4,
       5,     3,    14,   125,    16,     3,     3,    19,     8,    47,
     125,    23,    46,     3,    19,    27,    28,     9,    10,    11,
      12,   111,    17,    18,    14,    20,    21,    46,    40,    41,
      45,    45,    45,    23,    46,    40,    41,    27,    28,    47,
      47,    46,    25,    38,    39,    40,    41,    42,    43,    44,
       3,    47,     3,    47,    45,    48,    45,    52,    45,    47,
     182,   183,    48,    14,   186,     9,   188,   182,   183,    54,
      13,   186,    23,   188,    49,    26,    27,    28,    49,   188,
      50,    32,    33,    34,    35,    36,    37,    17,    18,    50,
      20,    21,   125,   111,    -1,    15,    -1,    17,    18,    -1,
      20,    21,    -1,   186,     4,     5,     6,     7,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    47,    38,    39,
      40,    41,    42,    43,    44,    17,    18,    -1,    20,    21,
      30,    31,    -1,    17,    18,    -1,    20,    21,    -1,    -1,
      24,    17,    18,    -1,    20,    21,    38,    39,    40,    41,
      42,    43,    44,    45,    38,    39,    40,    41,    42,    43,
      44,    -1,    38,    39,    40,    41,    42,    43,    44,    17,
      -1,    -1,    20,    21,    40,    41,    42,    43,    44,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    38,    39,    40,
      41,    42,    43,    44,   163,    -1,    -1,    -1,    -1,   168,
      -1,    -1,    -1,    -1,   173,    -1,    -1,   176,    -1,    -1,
      -1,   180,    -1,    -1,    -1,   184
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    56,    57,     0,     3,    14,    23,    26,    27,    28,
      32,    33,    34,    35,    36,    37,    58,    59,    60,    67,
      68,    70,     8,    46,     3,     4,     5,    16,    19,    40,
      41,    46,    60,    63,    68,    75,     3,    68,    75,     3,
      29,    48,    52,    73,     3,    48,    52,    74,    75,    46,
      46,    46,    46,    46,    46,    45,    45,    75,    69,    75,
       7,    63,    75,    75,    75,    75,    63,    22,    15,    17,
      18,    20,    21,    38,    39,    40,    41,    42,    43,    44,
      24,     7,     8,     8,     9,    10,    11,    12,    65,     3,
      73,    45,     7,     8,    74,     9,    10,    11,    12,    51,
      64,    74,    45,    47,    47,    47,     3,     3,     3,    45,
      47,    52,    47,    63,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    60,    62,     8,     4,     5,
       6,     7,    30,    31,    46,    72,    46,     8,     8,    74,
      72,    64,    45,    45,    45,    47,    47,    47,    69,    62,
      25,    72,     3,    71,    73,    47,    72,    74,    45,    45,
      45,    73,    48,    52,    53,    47,    48,    74,    64,    71,
      54,    48,     9,    52,    71,    48,    52,    64,    13,    71,
      64,    71,    49,    49,    52,    71,    60,    66,    60,    61,
      71,    66,    50,    61,    50
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    56,    57,    57,    58,    58,    58,    58,
      58,    59,    59,    59,    59,    59,    59,    60,    60,    60,
      60,    60,    60,    61,    61,    62,    62,    63,    63,    63,
      63,    64,    64,    64,    64,    64,    65,    65,    65,    65,
      66,    66,    67,    68,    69,    69,    69,    70,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    72,    72,    72,
      72,    72,    72,    73,    73,    73,    73,    74,    74,    74,
      74,    74,    74,    74,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     0,     2,     3,     1,     1,     1,
      11,     4,     4,     4,     5,     5,     5,     2,     3,     4,
       2,     3,     5,     1,     2,     1,     2,     0,     3,     2,
       2,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       0,     2,    11,     4,     0,     3,     1,     2,     0,     1,
       3,     6,     4,     3,     5,     7,     5,     1,     1,     1,
       1,     1,     1,     2,     4,     5,     2,     0,     2,     2,
       3,     5,     4,     2,     1,     1,     1,     2,     1,     3,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 95 "myparser.y" /* yacc.c:1646  */
    { 
  if (yyerror_count == 0) {
    puts(c_prologue);
    //printf("%s\n", $2); 
  }  
}
#line 1419 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 104 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("");}
#line 1425 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 106 "myparser.y" /* yacc.c:1646  */
    { 
  if (yyerror_count == 0) {
    printf("%s\n", (yyvsp[0].str)); 
  }  
}
#line 1435 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 114 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s;",(yyvsp[-1].str));}
#line 1441 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 118 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("int main(){\n %s \n}",(yyvsp[-1].str));}
#line 1447 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 122 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("readString();");}
#line 1453 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 123 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("readInt();");}
#line 1459 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 124 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("ReadReal();");}
#line 1465 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 125 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("writeString(%s)",(yyvsp[-2].str));}
#line 1471 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 126 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("writeInt(%s)",(yyvsp[-2].str));}
#line 1477 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 127 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("writeReal(%s)",(yyvsp[-2].str));}
#line 1483 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 131 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s;",(yyvsp[-1].str));}
#line 1489 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 132 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s;",(yyvsp[-1].str));}
#line 1495 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 133 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s = %s ;",(yyvsp[-3].str),(yyvsp[-1].str));}
#line 1501 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 135 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[-1].str));}
#line 1507 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 136 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("while(%s){\n %s \n} ",(yyvsp[-3].str),(yyvsp[-1].str));}
#line 1513 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 141 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n %s",(yyvsp[-1].str),(yyvsp[0].str));}
#line 1519 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 146 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n %s",(yyvsp[-1].str),(yyvsp[0].str));}
#line 1525 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 149 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("");}
#line 1531 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 150 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("if(%s){\n %s}",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1537 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 151 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n %s",(yyvsp[-1].str),(yyvsp[0].str));}
#line 1543 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 152 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("}else{ \n %s",(yyvsp[0].str));}
#line 1549 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 156 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("int");}
#line 1555 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 157 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("double");}
#line 1561 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 158 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("int");}
#line 1567 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 159 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("string");}
#line 1573 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 160 "myparser.y" /* yacc.c:1646  */
    {}
#line 1579 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 164 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("const int");}
#line 1585 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 165 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("const double");}
#line 1591 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 166 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("const int");}
#line 1597 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 167 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("const string");}
#line 1603 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 171 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("");}
#line 1609 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 172 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s \n %s",(yyvsp[-1].str),(yyvsp[0].str));}
#line 1615 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 177 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s(%s)\n {\n %s} ",(yyvsp[-3].str),(yyvsp[-9].str),(yyvsp[-6].str),(yyvsp[-1].str)); }
#line 1621 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 181 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s(%s)", (yyvsp[-3].str),(yyvsp[-1].str)); }
#line 1627 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 185 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("");}
#line 1633 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 186 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s,%s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1639 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 187 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1645 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 191 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("return %s ;",(yyvsp[0].str)); }
#line 1651 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 195 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template(""); }
#line 1657 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 196 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1663 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 197 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s[]",(yyvsp[-2].str)); }
#line 1669 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 198 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s %s[]",(yyvsp[0].str),(yyvsp[-1].str),(yyvsp[-5].str)); }
#line 1675 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 199 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s %s",(yyvsp[0].str),(yyvsp[-1].str),(yyvsp[-3].str)); }
#line 1681 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 201 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s,%s ",(yyvsp[0].str),(yyvsp[-2].str)); }
#line 1687 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 202 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s[]",(yyvsp[0].str),(yyvsp[-4].str)); }
#line 1693 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 203 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s %s[]",(yyvsp[0].str),(yyvsp[-2].str),(yyvsp[-6].str)); }
#line 1699 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 204 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s %s",(yyvsp[0].str),(yyvsp[-2].str),(yyvsp[-4].str)); }
#line 1705 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 213 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("1"); }
#line 1711 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 214 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("0"); }
#line 1717 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 219 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s , ", (yyvsp[0].str)); }
#line 1723 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 220 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s = %s ", (yyvsp[0].str),(yyvsp[-2].str),(yyvsp[-1].str)); }
#line 1729 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 221 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s%s = %s ",(yyvsp[0].str), (yyvsp[-4].str),(yyvsp[-3].str),(yyvsp[-1].str)); }
#line 1735 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 222 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1741 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 226 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template(""); }
#line 1747 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 227 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s,", (yyvsp[0].str)); }
#line 1753 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 228 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s", (yyvsp[0].str), (yyvsp[-1].str)); }
#line 1759 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 229 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s%s ", (yyvsp[0].str), (yyvsp[-2].str),(yyvsp[-1].str)); }
#line 1765 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 230 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s%s = %s ",(yyvsp[0].str), (yyvsp[-4].str),(yyvsp[-3].str),(yyvsp[-1].str)); }
#line 1771 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 231 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s = %s ",(yyvsp[0].str), (yyvsp[-3].str),(yyvsp[-1].str)); }
#line 1777 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 232 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1783 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 240 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s%s", (yyvsp[-1].str),(yyvsp[0].str)); }
#line 1789 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 242 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("(%s)", (yyvsp[-1].str)); }
#line 1795 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 244 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("(+%s)",(yyvsp[0].str)); }
#line 1801 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 245 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("(-%s)",(yyvsp[0].str)); }
#line 1807 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 246 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("(!%s)",(yyvsp[0].str)); }
#line 1813 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 247 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s + %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1819 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 248 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s - %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1825 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 249 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s * %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1831 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 250 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s / %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1837 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 251 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %% %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1843 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 252 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s == %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1849 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 253 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s < %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1855 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 254 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s != %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1861 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 255 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s <= %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1867 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 256 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s || %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1873 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 257 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s && %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1879 "myparser.tab.c" /* yacc.c:1646  */
    break;


#line 1883 "myparser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 260 "myparser.y" /* yacc.c:1906  */

int main () {
  if ( yyparse() == 0 )
    printf("Accepted!\n");
  else
    printf("Rejected!\n");
}
