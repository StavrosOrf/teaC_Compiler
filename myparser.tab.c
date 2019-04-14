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
    KW_FALSE = 286
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 10 "myparser.y" /* yacc.c:355  */

  char* str;
  int num;

#line 151 "myparser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 168 "myparser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   338

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  173

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    38,     2,     2,
      41,    42,    36,    35,    47,    34,     2,    37,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    43,    39,
      33,    32,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    48,     2,    49,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    40,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    85,    85,    86,    96,    97,    98,    99,   100,   101,
     104,   108,   109,   110,   111,   112,   116,   117,   121,   122,
     125,   126,   127,   128,   132,   133,   134,   135,   136,   140,
     141,   142,   143,   147,   148,   149,   154,   158,   162,   163,
     164,   168,   172,   173,   174,   175,   176,   178,   179,   180,
     181,   187,   188,   189,   190,   191,   192,   196,   197,   198,
     199,   203,   204,   205,   206,   207,   208,   209,   214,   215,
     216,   217,   218,   219,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234
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
  "KW_FALSE", "'='", "'<'", "'-'", "'+'", "'*'", "'/'", "'%'", "';'",
  "\";;;;\"", "'('", "')'", "':'", "'{'", "'}'", "\"[]\"", "','", "'['",
  "']'", "$accept", "input", "body", "defined_func", "commands",
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
     285,   286,    61,    60,    45,    43,    42,    47,    37,    59,
     287,    40,    41,    58,   123,   125,   288,    44,    91,    93
};
# endif

#define YYPACT_NINF -97

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-97)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -97,   154,   -97,    29,   170,    38,     3,     4,    38,   -97,
     -97,   -97,   -28,   -20,    38,    38,    23,   -97,   -97,   170,
      38,    38,    38,    38,   170,     0,   -28,   210,    28,   -97,
     240,    88,   -97,    16,   137,    11,   -15,    -6,    13,    17,
       4,    35,   248,   -97,   -97,   217,     2,    85,   -97,   -97,
     -97,   158,   158,   182,   -97,   -97,   170,    38,    38,    38,
      38,    38,    38,    38,    38,    38,    38,    38,   198,    60,
      84,    37,   -97,   -97,   -97,   -97,   -97,   123,   -97,   -97,
     -97,     5,   122,   -97,   -97,   -97,   -97,   -97,    17,   -97,
     -97,   -97,   -97,   -97,    38,   -97,   -97,   300,   270,    74,
      74,    74,    74,   158,   158,   -97,   -97,   -97,   198,    55,
     122,   -97,   -97,   -97,   -97,   -97,   -97,    82,    11,    62,
     122,   122,   -97,     4,   -97,   -97,   -97,   -97,    11,    34,
      71,   -97,    90,     4,   -97,   -97,    17,    82,   101,    91,
     142,   -97,    12,   -97,    -7,    17,   145,    82,   -97,    17,
      82,   115,   117,   -97,    14,   -97,   164,   198,    82,   -97,
       4,   164,   118,   198,   121,   -97,   144,   -97,   -97,   -97,
     -97,   164,   -97
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,    20,     0,     0,    61,     0,     3,
       7,     6,     0,     0,     0,    38,    70,    68,    69,    20,
       0,     0,     0,     0,    20,     0,    72,     0,    70,    72,
       0,     0,    10,     0,     0,     0,     0,     0,    61,     0,
      61,     0,    41,    11,    13,     0,     0,    40,    71,    23,
      76,    75,    74,     0,    22,    14,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,    60,     0,    57,     8,
       5,    61,     0,    63,    24,    25,    26,    27,     0,    67,
      62,     4,    12,    37,    38,    73,    21,    87,    86,    84,
      85,    82,    83,    78,    77,    79,    80,    81,    18,     0,
       0,    51,    52,    53,    56,    54,    55,    42,     0,     0,
       0,     0,    64,    61,    28,    39,    19,    15,     0,    43,
       0,    58,     0,    61,    66,    59,     0,    42,     0,     0,
       0,    65,    42,    47,    44,     0,     0,    42,    46,     0,
      42,     0,     0,    50,    42,    48,    33,     0,    42,    45,
      61,    33,     0,    16,     0,    49,     0,    35,    36,    17,
       9,    33,    34
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -97,   -97,   -97,   -97,     8,    22,    68,    15,   -83,   -97,
     -96,   -97,    -1,    94,   -97,   172,   -72,   -34,   -36,    78
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     9,    36,    24,   164,   109,    25,    89,    76,
     162,    11,    29,    46,    13,   130,   118,    37,    41,    27
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      12,    78,    83,    26,    90,   124,    31,    38,    38,    10,
     123,    43,    32,   121,    77,   129,    38,   129,    26,    44,
      81,    82,    55,    26,    71,    79,    84,    85,    86,    87,
      48,    14,    33,    80,    49,    48,   149,    14,   128,    54,
     150,    28,    17,    18,    93,   122,    34,    39,    39,   133,
      35,    40,    40,   142,    34,    26,    39,    20,    35,   147,
      40,   158,   151,    88,    15,   167,   154,    12,   110,    15,
      15,    96,    21,    22,    91,   172,   108,   136,   119,    23,
     127,   137,   138,    30,   131,   129,    42,   134,   111,   112,
     113,   114,    45,    47,   135,    69,    70,   141,    50,    51,
      52,    53,    57,    58,   132,    59,    60,    12,    63,    64,
      65,    66,    67,   139,   115,   116,   108,    61,    62,    63,
      64,    65,    66,    67,   166,   117,   111,   112,   113,   114,
      69,   120,    94,   140,   145,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    72,    73,    74,    75,
     144,   146,   115,   116,     2,    12,    12,     3,   152,   156,
      12,   157,    12,   168,   161,   163,   170,     3,     4,   161,
      12,   163,    47,    16,    17,    18,   126,     5,     4,   161,
       6,     7,     8,   171,     4,   169,    19,     5,   125,    20,
       0,   160,     8,     5,    65,    66,    67,     0,     8,    57,
      58,     3,    59,    60,    21,    22,     0,     0,     0,     0,
       0,    23,     4,     0,    61,    62,    63,    64,    65,    66,
      67,     5,     0,     0,    95,    56,     8,    57,    58,     0,
      59,    60,     0,     0,    57,    58,     0,    59,    60,     0,
       0,     0,    61,    62,    63,    64,    65,    66,    67,    61,
      62,    63,    64,    65,    66,    67,    92,    57,    58,     0,
      59,    60,     0,     0,    68,    57,    58,     0,    59,    60,
       0,     0,    61,    62,    63,    64,    65,    66,    67,     0,
      61,    62,    63,    64,    65,    66,    67,    57,     0,     0,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,    62,    63,    64,    65,    66,    67,   143,
       0,     0,     0,     0,   148,     0,     0,     0,     0,   153,
      59,    60,   155,     0,     0,     0,   159,     0,     0,     0,
     165,     0,    61,    62,    63,    64,    65,    66,    67
};

static const yytype_int16 yycheck[] =
{
       1,    35,    38,     4,    40,    88,     3,     3,     3,     1,
      82,    39,     9,     8,     3,     3,     3,     3,    19,    39,
       7,     8,    22,    24,     8,    40,     9,    10,    11,    12,
       7,     8,    29,    39,    19,     7,    43,     8,   110,    24,
      47,     3,     4,     5,    42,    81,    43,    43,    43,   121,
      47,    47,    47,   136,    43,    56,    43,    19,    47,    47,
      47,    47,   145,    46,    41,   161,   149,    68,     8,    41,
      41,    56,    34,    35,    39,   171,    68,    43,    41,    41,
      25,    47,    48,     5,   118,     3,     8,   123,     4,     5,
       6,     7,    14,    15,   128,     7,     8,   133,    20,    21,
      22,    23,    17,    18,    42,    20,    21,   108,    34,    35,
      36,    37,    38,    42,    30,    31,   108,    32,    33,    34,
      35,    36,    37,    38,   160,    41,     4,     5,     6,     7,
       7,     8,    47,    43,    43,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,     9,    10,    11,    12,
      49,     9,    30,    31,     0,   156,   157,     3,    13,    44,
     161,    44,   163,    45,   156,   157,    45,     3,    14,   161,
     171,   163,    94,     3,     4,     5,   108,    23,    14,   171,
      26,    27,    28,    39,    14,   163,    16,    23,    94,    19,
      -1,    27,    28,    23,    36,    37,    38,    -1,    28,    17,
      18,     3,    20,    21,    34,    35,    -1,    -1,    -1,    -1,
      -1,    41,    14,    -1,    32,    33,    34,    35,    36,    37,
      38,    23,    -1,    -1,    42,    15,    28,    17,    18,    -1,
      20,    21,    -1,    -1,    17,    18,    -1,    20,    21,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    32,
      33,    34,    35,    36,    37,    38,    39,    17,    18,    -1,
      20,    21,    -1,    -1,    24,    17,    18,    -1,    20,    21,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    -1,
      32,    33,    34,    35,    36,    37,    38,    17,    -1,    -1,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,   137,
      -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,   147,
      20,    21,   150,    -1,    -1,    -1,   154,    -1,    -1,    -1,
     158,    -1,    32,    33,    34,    35,    36,    37,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,     0,     3,    14,    23,    26,    27,    28,    52,
      54,    61,    62,    64,     8,    41,     3,     4,     5,    16,
      19,    34,    35,    41,    54,    57,    62,    69,     3,    62,
      69,     3,     9,    29,    43,    47,    53,    67,     3,    43,
      47,    68,    69,    39,    39,    69,    63,    69,     7,    57,
      69,    69,    69,    69,    57,    22,    15,    17,    18,    20,
      21,    32,    33,    34,    35,    36,    37,    38,    24,     7,
       8,     8,     9,    10,    11,    12,    59,     3,    67,    40,
      39,     7,     8,    68,     9,    10,    11,    12,    46,    58,
      68,    39,    39,    42,    47,    42,    57,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    54,    56,
       8,     4,     5,     6,     7,    30,    31,    41,    66,    41,
       8,     8,    68,    66,    58,    63,    56,    25,    66,     3,
      65,    67,    42,    66,    68,    67,    43,    47,    48,    42,
      43,    68,    58,    65,    49,    43,     9,    47,    65,    43,
      47,    58,    13,    65,    58,    65,    44,    44,    47,    65,
      27,    54,    60,    54,    55,    65,    68,    60,    45,    55,
      45,    39,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    52,    52,    52,    52,
      53,    54,    54,    54,    54,    54,    55,    55,    56,    56,
      57,    57,    57,    57,    58,    58,    58,    58,    58,    59,
      59,    59,    59,    60,    60,    60,    61,    62,    63,    63,
      63,    64,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    66,    66,    66,    66,    66,    66,    67,    67,    67,
      67,    68,    68,    68,    68,    68,    68,    68,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     3,     3,     1,     1,     3,    11,
       1,     2,     4,     2,     3,     5,     1,     2,     1,     2,
       0,     3,     2,     2,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     0,     4,     2,    11,     4,     0,     3,
       1,     2,     0,     1,     3,     6,     4,     3,     5,     7,
       5,     1,     1,     1,     1,     1,     1,     2,     4,     5,
       2,     0,     2,     2,     3,     5,     4,     2,     1,     1,
       1,     2,     1,     3,     2,     2,     2,     3,     3,     3,
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
#line 87 "myparser.y" /* yacc.c:1646  */
    { 
  if (yyerror_count == 0) {
    //puts(c_prologue);
    printf("%s\n", (yyvsp[0].str)); 
  }  
}
#line 1397 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 96 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s;",(yyvsp[-1].str));}
#line 1403 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 97 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s;",(yyvsp[-1].str));}
#line 1409 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 104 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("int");}
#line 1415 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 108 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s;",(yyvsp[-1].str));}
#line 1421 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 109 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s = %s ;",(yyvsp[-3].str),(yyvsp[-1].str));}
#line 1427 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 111 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[-1].str));}
#line 1433 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 112 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("while(%s){\n %s \n} ",(yyvsp[-3].str),(yyvsp[-1].str));}
#line 1439 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 117 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n %s",(yyvsp[-1].str),(yyvsp[0].str));}
#line 1445 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 122 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n %s",(yyvsp[-1].str),(yyvsp[0].str));}
#line 1451 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 125 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("");}
#line 1457 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 126 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("if(%s){\n %s}",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1463 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 127 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n %s",(yyvsp[-1].str),(yyvsp[0].str));}
#line 1469 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 128 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("}else{ \n %s",(yyvsp[0].str));}
#line 1475 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 132 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("int");}
#line 1481 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 133 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("double");}
#line 1487 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 134 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("int");}
#line 1493 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 135 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("string");}
#line 1499 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 136 "myparser.y" /* yacc.c:1646  */
    {}
#line 1505 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 140 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("const int");}
#line 1511 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 141 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("const double");}
#line 1517 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 142 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("const int");}
#line 1523 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 143 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("const string");}
#line 1529 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 147 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("");}
#line 1535 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 148 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s;\n %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1541 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 149 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s \n %s",(yyvsp[-1].str),(yyvsp[0].str));}
#line 1547 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 154 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s(%s)\n {\n %s} ",(yyvsp[-3].str),(yyvsp[-9].str),(yyvsp[-6].str),(yyvsp[-1].str)); }
#line 1553 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 158 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s(%s)", (yyvsp[-3].str),(yyvsp[-1].str)); }
#line 1559 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 162 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("");}
#line 1565 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 163 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s,%s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1571 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 164 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1577 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 168 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("return %s ;",(yyvsp[0].str)); }
#line 1583 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 172 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template(""); }
#line 1589 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 173 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1595 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 174 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s[]",(yyvsp[-2].str)); }
#line 1601 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 175 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s %s[]",(yyvsp[0].str),(yyvsp[-1].str),(yyvsp[-5].str)); }
#line 1607 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 176 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s %s",(yyvsp[0].str),(yyvsp[-1].str),(yyvsp[-3].str)); }
#line 1613 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 178 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s,%s ",(yyvsp[0].str),(yyvsp[-2].str)); }
#line 1619 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 179 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s[]",(yyvsp[0].str),(yyvsp[-4].str)); }
#line 1625 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 180 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s %s[]",(yyvsp[0].str),(yyvsp[-2].str),(yyvsp[-6].str)); }
#line 1631 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 181 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s %s",(yyvsp[0].str),(yyvsp[-2].str),(yyvsp[-4].str)); }
#line 1637 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 190 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("1"); }
#line 1643 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 191 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("0"); }
#line 1649 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 196 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s , ", (yyvsp[0].str)); }
#line 1655 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 197 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s = %s ", (yyvsp[0].str),(yyvsp[-2].str),(yyvsp[-1].str)); }
#line 1661 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 198 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s%s = %s ",(yyvsp[0].str), (yyvsp[-4].str),(yyvsp[-3].str),(yyvsp[-1].str)); }
#line 1667 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 199 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1673 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 203 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template(""); }
#line 1679 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 204 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s,", (yyvsp[0].str)); }
#line 1685 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 205 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s", (yyvsp[0].str), (yyvsp[-1].str)); }
#line 1691 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 206 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s%s ", (yyvsp[0].str), (yyvsp[-2].str),(yyvsp[-1].str)); }
#line 1697 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 207 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s%s = %s ",(yyvsp[0].str), (yyvsp[-4].str),(yyvsp[-3].str),(yyvsp[-1].str)); }
#line 1703 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 208 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s = %s ",(yyvsp[0].str), (yyvsp[-3].str),(yyvsp[-1].str)); }
#line 1709 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 209 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1715 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 217 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s%s", (yyvsp[-1].str),(yyvsp[0].str)); }
#line 1721 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 219 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("(%s)", (yyvsp[-1].str)); }
#line 1727 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 221 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("(+%s)",(yyvsp[0].str)); }
#line 1733 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 222 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("(-%s)",(yyvsp[0].str)); }
#line 1739 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 223 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("(!%s)",(yyvsp[0].str)); }
#line 1745 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 224 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s + %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1751 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 225 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s - %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1757 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 226 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s * %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1763 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 227 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s / %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1769 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 228 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %% %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1775 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 229 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s == %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1781 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 230 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s < %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1787 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 231 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s != %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1793 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 232 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s <= %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1799 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 233 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s || %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1805 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 234 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s && %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1811 "myparser.tab.c" /* yacc.c:1646  */
    break;


#line 1815 "myparser.tab.c" /* yacc.c:1646  */
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
#line 237 "myparser.y" /* yacc.c:1906  */

int main () {
  if ( yyparse() == 0 )
    printf("Accepted!\n");
  else
    printf("Rejected!\n");
}
