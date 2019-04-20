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
#line 10 "myparser.y" /* yacc.c:355  */

  char* str;
  int num;

#line 159 "myparser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 176 "myparser.tab.c" /* yacc.c:358  */

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
#define YYLAST   449

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  201

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    46,     2,     2,
      48,    49,    44,    43,    54,    42,     2,    45,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    50,    47,
      41,    40,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    55,     2,    56,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    93,    93,    94,   104,   105,   106,   107,   108,   112,
     116,   117,   118,   119,   120,   121,   125,   126,   127,   128,
     129,   130,   131,   135,   136,   140,   141,   144,   145,   146,
     147,   151,   152,   153,   154,   155,   159,   160,   161,   162,
     166,   167,   172,   175,   179,   180,   181,   185,   189,   190,
     191,   192,   193,   195,   196,   197,   198,   203,   204,   205,
     206,   207,   208,   212,   213,   214,   215,   219,   220,   221,
     222,   223,   224,   225,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "POSINT", "REAL", "STRING",
  "ARRAY", "ASSIGN", "KW_INT", "KW_REAL", "KW_BOOL", "KW_STRING",
  "KW_FUNC", "KW_IF", "KW_THEN", "KW_ELSE", "KW_ELSE_IF", "KW_AND",
  "KW_OR", "KW_NOT", "KW_NOT_EQL", "KW_LESS_EQL", "KW_FI", "KW_WHILE",
  "KW_LOOP", "KW_POOL", "KW_CONST", "KW_LET", "KW_RETURN", "KW_START",
  "KW_LIMITER", "KW_TRUE", "KW_FALSE", "F_readS", "F_readI", "F_readR",
  "F_writeS", "F_writeI", "F_writeR", "'='", "'<'", "'-'", "'+'", "'*'",
  "'/'", "'%'", "';'", "'('", "')'", "':'", "'{'", "'}'", "\"[]\"", "','",
  "'['", "']'", "$accept", "input", "decl_part", "main_func",
  "defined_func", "commands", "main_body", "while_state", "if_state",
  "type", "const_type", "func_body", "func_decl", "func_call",
  "func_param", "return_expr", "func_par_decl", "data", "decl_const",
  "decl", "expr", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
      61,    60,    45,    43,    42,    47,    37,    59,    40,    41,
      58,   123,   125,   295,    44,    91,    93
};
# endif

#define YYPACT_NINF -146

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-146)))

#define YYTABLE_NINF -3

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,    49,    69,  -146,     5,    23,  -146,     9,    92,    43,
      35,    28,    21,     4,    27,    23,    25,  -146,    73,   134,
      56,  -146,  -146,  -146,  -146,  -146,   102,  -146,  -146,    11,
     111,  -146,  -146,  -146,  -146,  -146,    27,  -146,  -146,  -146,
     111,  -146,  -146,  -146,  -146,  -146,  -146,   108,    28,    63,
     111,   111,  -146,    23,  -146,    28,   -22,    86,  -146,    95,
      23,  -146,  -146,    27,   108,    80,    96,   133,  -146,     3,
    -146,   -20,    27,   144,   108,  -146,    27,   108,   148,   112,
    -146,    17,  -146,   113,   192,   108,  -146,   192,    16,   117,
     117,    23,   117,    99,   114,   120,   122,   125,   128,   138,
     192,   129,   139,   140,  -146,   192,   136,   117,   117,     2,
    -146,  -146,  -146,   117,  -146,  -146,   117,   117,   117,  -146,
    -146,   193,   340,   157,   348,   131,   154,   158,   117,   117,
     117,  -146,  -146,  -146,  -146,  -146,  -146,  -146,   310,   160,
     156,  -146,  -146,    -4,    -4,   222,   155,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   192,  -146,
    -146,  -146,  -146,   232,   261,   271,  -146,  -146,   117,  -146,
     155,   117,   155,   182,   381,   355,   203,   203,   203,   203,
      -4,    -4,  -146,  -146,  -146,   192,   187,  -146,  -146,  -146,
    -146,  -146,   303,  -146,   170,  -146,   171,   155,  -146,  -146,
    -146
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     0,    67,     3,     8,     0,     0,
       0,     0,     0,    67,     0,    67,     0,     7,     0,     0,
       0,    36,    37,    38,    39,    66,     0,    63,     5,    67,
       0,    69,    31,    32,    33,    34,     0,    73,    68,     6,
       0,    57,    58,    59,    62,    60,    61,    48,     0,     0,
       0,     0,    70,    67,    35,     0,    49,     0,    64,     0,
      67,    72,    65,     0,    48,     0,     0,     0,    71,    48,
      53,    50,     0,     0,    48,    52,     0,    48,     0,     0,
      56,    48,    54,     0,     0,    48,    51,    40,     0,     0,
       0,    67,     0,     0,     0,     0,     0,     0,     0,     0,
      23,     0,     0,     0,    55,    40,     0,     0,    44,    79,
      74,    78,    77,     0,    75,    76,     0,     0,     0,    81,
      82,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,    17,    24,     9,    16,    20,    41,    42,     0,     0,
      46,    80,    86,    85,    84,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
      10,    11,    12,     0,     0,     0,    19,    43,    44,    83,
      27,     0,    27,     0,    97,    96,    94,    95,    92,    93,
      88,    87,    89,    90,    91,    25,     0,    13,    14,    15,
      45,    30,     0,    28,     0,    26,     0,    27,    21,    22,
      29
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -146,  -146,  -146,  -146,   -84,   -82,   119,    38,  -145,     7,
    -146,   127,  -146,   -83,    54,  -146,   364,    68,    37,     0,
     -23
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,   119,   172,   101,   186,   173,    37,
      25,   106,     7,   120,   139,   103,    57,    48,    12,    16,
     140
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      99,   102,   100,    99,   102,   105,    56,    13,     8,   141,
      -2,    29,    30,    31,    13,    38,    99,   102,   100,    51,
      56,    99,   102,   105,   107,   191,    13,   193,    63,    52,
      76,    26,    64,    65,    77,     9,    32,    33,    34,    35,
     155,   156,   157,    54,    21,    22,    23,    24,    27,     3,
     108,    20,   200,    61,    14,    10,    17,    74,    15,    11,
      68,    14,    99,   102,   108,    15,   121,   122,    28,   124,
      69,    85,    39,    14,    99,   102,   185,    15,    10,    78,
      36,    40,    11,    81,   138,    58,    99,   102,    99,   102,
     142,   123,    62,   143,   144,   145,     4,     5,    53,    18,
      19,    99,   102,   185,    49,   163,   164,   165,    55,    18,
      50,    56,    59,    99,   102,    41,    42,    43,    44,    60,
     109,   110,   111,   112,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    66,    71,   113,    41,    42,
      43,    44,    73,    45,    46,    67,    72,   125,   192,   114,
     115,    93,    94,    95,    96,    97,    98,    79,    88,   116,
     117,    83,   126,    84,    87,   118,    45,    46,   127,    89,
     128,   170,   171,   129,   147,   148,   130,   149,   150,    90,
     160,   133,    47,    91,    92,   131,   134,   135,   137,    93,
      94,    95,    96,    97,    98,    88,   151,   152,   153,   154,
     155,   156,   157,   161,   159,   194,    89,   162,   146,   167,
     168,   147,   148,   196,   149,   150,    90,   198,   199,   132,
      91,    92,   190,   195,     0,     0,    93,    94,    95,    96,
      97,    98,   136,   151,   152,   153,   154,   155,   156,   157,
     147,   148,     0,   149,   150,   153,   154,   155,   156,   157,
     147,   148,     0,   149,   150,     0,     0,     0,     0,     0,
       0,     0,   151,   152,   153,   154,   155,   156,   157,     0,
       0,   169,   151,   152,   153,   154,   155,   156,   157,   147,
     148,   187,   149,   150,     0,     0,     0,     0,     0,   147,
     148,     0,   149,   150,     0,     0,     0,     0,     0,     0,
       0,   151,   152,   153,   154,   155,   156,   157,     0,     0,
     188,   151,   152,   153,   154,   155,   156,   157,   197,     0,
     189,   147,   148,     0,   149,   150,     0,     0,   147,   148,
       0,   149,   150,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   151,   152,   153,   154,   155,   156,   157,
     151,   152,   153,   154,   155,   156,   157,   166,   147,   148,
       0,   149,   150,     0,     0,   158,   147,   148,     0,   149,
     150,     0,     0,   147,     0,     0,   149,   150,     0,     0,
     151,   152,   153,   154,   155,   156,   157,     0,   151,   152,
     153,   154,   155,   156,   157,   151,   152,   153,   154,   155,
     156,   157,   149,   150,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   151,   152,   153,   154,   155,   156,   157,    70,     0,
       0,     0,     0,    75,     0,     0,     0,     0,    80,     0,
       0,    82,     0,     0,     0,    86,     0,     0,     0,   104
};

static const yytype_int16 yycheck[] =
{
      84,    84,    84,    87,    87,    87,     3,     3,     3,     7,
       0,     7,     8,    13,     3,    15,   100,   100,   100,     8,
       3,   105,   105,   105,     8,   170,     3,   172,    50,    29,
      50,     3,    54,    55,    54,    30,     9,    10,    11,    12,
      44,    45,    46,    36,     9,    10,    11,    12,    11,     0,
      48,     8,   197,    53,    50,    50,    47,    54,    54,    54,
      60,    50,   146,   146,    48,    54,    89,    90,    47,    92,
      63,    54,    47,    50,   158,   158,   158,    54,    50,    72,
      53,     8,    54,    76,   107,    48,   170,   170,   172,   172,
     113,    91,    55,   116,   117,   118,    27,    28,    30,     7,
       8,   185,   185,   185,    48,   128,   129,   130,    40,     7,
       8,     3,    49,   197,   197,     4,     5,     6,     7,    51,
       3,     4,     5,     6,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,    49,    56,    20,     4,     5,
       6,     7,     9,    32,    33,    50,    50,    48,   171,    32,
      33,    34,    35,    36,    37,    38,    39,    13,     3,    42,
      43,    13,    48,    51,    51,    48,    32,    33,    48,    14,
      48,    16,    17,    48,    18,    19,    48,    21,    22,    24,
      49,    52,    48,    28,    29,    47,    47,    47,    52,    34,
      35,    36,    37,    38,    39,     3,    40,    41,    42,    43,
      44,    45,    46,    49,    47,    23,    14,    49,    15,    49,
      54,    18,    19,    26,    21,    22,    24,    47,    47,   100,
      28,    29,   168,   185,    -1,    -1,    34,    35,    36,    37,
      38,    39,   105,    40,    41,    42,    43,    44,    45,    46,
      18,    19,    -1,    21,    22,    42,    43,    44,    45,    46,
      18,    19,    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    49,    40,    41,    42,    43,    44,    45,    46,    18,
      19,    49,    21,    22,    -1,    -1,    -1,    -1,    -1,    18,
      19,    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    -1,    -1,
      49,    40,    41,    42,    43,    44,    45,    46,    15,    -1,
      49,    18,    19,    -1,    21,    22,    -1,    -1,    18,    19,
      -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      40,    41,    42,    43,    44,    45,    46,    47,    18,    19,
      -1,    21,    22,    -1,    -1,    25,    18,    19,    -1,    21,
      22,    -1,    -1,    18,    -1,    -1,    21,    22,    -1,    -1,
      40,    41,    42,    43,    44,    45,    46,    -1,    40,    41,
      42,    43,    44,    45,    46,    40,    41,    42,    43,    44,
      45,    46,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    64,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    58,    59,     0,    27,    28,    60,    69,     3,    30,
      50,    54,    75,     3,    50,    54,    76,    47,     7,     8,
       8,     9,    10,    11,    12,    67,     3,    75,    47,     7,
       8,    76,     9,    10,    11,    12,    53,    66,    76,    47,
       8,     4,     5,     6,     7,    32,    33,    48,    74,    48,
       8,     8,    76,    74,    66,    74,     3,    73,    75,    49,
      74,    76,    75,    50,    54,    55,    49,    50,    76,    66,
      73,    56,    50,     9,    54,    73,    50,    54,    66,    13,
      73,    66,    73,    13,    51,    54,    73,    51,     3,    14,
      24,    28,    29,    34,    35,    36,    37,    38,    39,    61,
      62,    63,    70,    72,    73,    62,    68,     8,    48,     3,
       4,     5,     6,    20,    32,    33,    42,    43,    48,    61,
      70,    77,    77,    76,    77,    48,    48,    48,    48,    48,
      48,    47,    63,    52,    47,    47,    68,    52,    77,    71,
      77,     7,    77,    77,    77,    77,    15,    18,    19,    21,
      22,    40,    41,    42,    43,    44,    45,    46,    25,    47,
      49,    49,    49,    77,    77,    77,    47,    49,    54,    49,
      16,    17,    62,    65,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    62,    64,    49,    49,    49,
      71,    65,    77,    65,    23,    64,    26,    15,    47,    47,
      65
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    58,    59,    59,    59,    59,    59,    60,
      61,    61,    61,    61,    61,    61,    62,    62,    62,    62,
      62,    62,    62,    63,    63,    64,    64,    65,    65,    65,
      65,    66,    66,    66,    66,    66,    67,    67,    67,    67,
      68,    68,    69,    70,    71,    71,    71,    72,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    74,    74,    74,
      74,    74,    74,    75,    75,    75,    75,    76,    76,    76,
      76,    76,    76,    76,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     4,     4,     3,     2,    11,
       3,     3,     3,     4,     4,     4,     2,     2,     3,     4,
       2,     6,     6,     1,     2,     1,     2,     0,     2,     4,
       2,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       0,     2,    12,     4,     0,     3,     1,     2,     0,     1,
       3,     6,     4,     3,     5,     7,     5,     1,     1,     1,
       1,     1,     1,     2,     4,     5,     2,     0,     2,     2,
       3,     5,     4,     2,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     3,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3
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
    printf("%s\n\n%s \n", (yyvsp[-1].str),(yyvsp[0].str)); 
  }  
}
#line 1445 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 104 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("");}
#line 1451 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 105 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n%s;",(yyvsp[-3].str),(yyvsp[-1].str));}
#line 1457 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 106 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n%s;",(yyvsp[-3].str),(yyvsp[-1].str));}
#line 1463 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 107 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n\n%s",(yyvsp[-2].str),(yyvsp[-1].str));}
#line 1469 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 108 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n\n%s",(yyvsp[-1].str),(yyvsp[0].str));}
#line 1475 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 112 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("int main(){\n %s \n}",(yyvsp[-1].str));}
#line 1481 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 116 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("readString()");}
#line 1487 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 117 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("readInt()");}
#line 1493 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 118 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("ReadReal()");}
#line 1499 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 119 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("writeString(%s)",(yyvsp[-1].str));}
#line 1505 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 120 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("writeInt(%s)",(yyvsp[-1].str));}
#line 1511 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 121 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("writeReal(%s)",(yyvsp[-1].str));}
#line 1517 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 125 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s;",(yyvsp[-1].str));}
#line 1523 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 126 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s;",(yyvsp[-1].str));}
#line 1529 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 127 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s;",(yyvsp[-1].str));}
#line 1535 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 128 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s = %s ;",(yyvsp[-3].str),(yyvsp[-1].str));}
#line 1541 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 130 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("if(%s){\n %s}",(yyvsp[-4].str),(yyvsp[-2].str));}
#line 1547 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 131 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("while(%s){\n %s \n} ",(yyvsp[-4].str),(yyvsp[-2].str));}
#line 1553 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 136 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template(" %s\n%s",(yyvsp[-1].str),(yyvsp[0].str));}
#line 1559 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 141 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("  %s\n %s",(yyvsp[-1].str),(yyvsp[0].str));}
#line 1565 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 144 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("");}
#line 1571 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 145 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template(" %s\n %s",(yyvsp[-1].str),(yyvsp[0].str));}
#line 1577 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 146 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("}else if(%s){ \n %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1583 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 147 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("}else{ \n %s",(yyvsp[0].str));}
#line 1589 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 151 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("int");}
#line 1595 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 152 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("double");}
#line 1601 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 153 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("int");}
#line 1607 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 154 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("char*");}
#line 1613 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 155 "myparser.y" /* yacc.c:1646  */
    {}
#line 1619 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 159 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("const int");}
#line 1625 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 160 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("const double");}
#line 1631 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 161 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("const int");}
#line 1637 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 162 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("const char*");}
#line 1643 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 166 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("");}
#line 1649 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 167 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s \n %s",(yyvsp[-1].str),(yyvsp[0].str));}
#line 1655 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 172 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s(%s)\n {\n  %s} ",(yyvsp[-4].str),(yyvsp[-10].str),(yyvsp[-7].str),(yyvsp[-1].str)); }
#line 1661 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 175 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s(%s)", (yyvsp[-3].str),(yyvsp[-1].str)); }
#line 1667 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 179 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("");}
#line 1673 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 180 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s,%s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1679 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 181 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1685 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 185 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("return %s ;",(yyvsp[0].str)); }
#line 1691 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 189 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template(""); }
#line 1697 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 190 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1703 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 191 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s[]",(yyvsp[-2].str)); }
#line 1709 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 192 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s %s[]",(yyvsp[0].str),(yyvsp[-1].str),(yyvsp[-5].str)); }
#line 1715 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 193 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s %s",(yyvsp[0].str),(yyvsp[-1].str),(yyvsp[-3].str)); }
#line 1721 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 195 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s,%s ",(yyvsp[0].str),(yyvsp[-2].str)); }
#line 1727 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 196 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s, %s[]",(yyvsp[0].str),(yyvsp[-4].str)); }
#line 1733 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 197 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s, %s %s[]",(yyvsp[0].str),(yyvsp[-2].str),(yyvsp[-6].str)); }
#line 1739 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 198 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s, %s %s",(yyvsp[0].str),(yyvsp[-2].str),(yyvsp[-4].str)); }
#line 1745 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 206 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("1"); }
#line 1751 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 207 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("0"); }
#line 1757 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 212 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s , ", (yyvsp[0].str)); }
#line 1763 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 213 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s = %s ", (yyvsp[0].str),(yyvsp[-2].str),(yyvsp[-1].str)); }
#line 1769 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 214 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s%s = %s ",(yyvsp[0].str), (yyvsp[-4].str),(yyvsp[-3].str),(yyvsp[-1].str)); }
#line 1775 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 215 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1781 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 219 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template(""); }
#line 1787 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 220 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s,", (yyvsp[0].str)); }
#line 1793 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 221 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s", (yyvsp[0].str), (yyvsp[-1].str)); }
#line 1799 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 222 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s%s ", (yyvsp[0].str), (yyvsp[-2].str),(yyvsp[-1].str)); }
#line 1805 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 223 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s%s = %s ",(yyvsp[0].str), (yyvsp[-4].str),(yyvsp[-3].str),(yyvsp[-1].str)); }
#line 1811 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 224 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s = %s ",(yyvsp[0].str), (yyvsp[-3].str),(yyvsp[-1].str)); }
#line 1817 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 225 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1823 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 231 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("1"); }
#line 1829 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 232 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("0"); }
#line 1835 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 236 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s%s", (yyvsp[-1].str),(yyvsp[0].str)); }
#line 1841 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 239 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("(%s)", (yyvsp[-1].str)); }
#line 1847 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 240 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("(+%s)",(yyvsp[0].str)); }
#line 1853 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 241 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("(-%s)",(yyvsp[0].str)); }
#line 1859 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 242 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("(!%s)",(yyvsp[0].str)); }
#line 1865 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 243 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s + %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1871 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 244 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s - %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1877 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 245 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s * %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1883 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 246 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s / %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1889 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 247 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %% %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1895 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 248 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s == %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1901 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 249 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s < %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1907 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 250 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s != %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1913 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 251 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s <= %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1919 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 252 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s || %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1925 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 253 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s && %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1931 "myparser.tab.c" /* yacc.c:1646  */
    break;


#line 1935 "myparser.tab.c" /* yacc.c:1646  */
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
#line 256 "myparser.y" /* yacc.c:1906  */

int main () {
  if ( yyparse() == 0 )
    printf("//Accepted!\n");
  else
    printf("\n");
}
