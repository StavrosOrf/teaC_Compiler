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
    KW_LIMITER = 285,
    KW_TRUE = 286,
    KW_FALSE = 287,
    F_readS = 288,
    F_readI = 289,
    F_readR = 290,
    F_writeS = 291,
    F_writeI = 292,
    F_writeR = 293
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 10 "myparser.y" /* yacc.c:355  */

  char* str;
  int num;

#line 158 "myparser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 175 "myparser.tab.c" /* yacc.c:358  */

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
#define YYLAST   309

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  200

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    45,     2,     2,
      47,    48,    43,    42,    53,    41,     2,    44,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,    46,
      40,    39,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,     2,     2,     2,     2,
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
      35,    36,    37,    38,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    93,    93,    94,   104,   105,   106,   110,   111,   115,
     119,   120,   121,   122,   123,   124,   128,   129,   130,   131,
     132,   133,   134,   138,   139,   143,   144,   147,   148,   149,
     150,   154,   155,   156,   157,   158,   162,   163,   164,   165,
     169,   170,   175,   178,   182,   183,   184,   188,   192,   193,
     194,   195,   196,   198,   199,   200,   201,   207,   208,   209,
     210,   211,   212,   216,   217,   218,   219,   223,   224,   225,
     226,   227,   228,   229,   234,   235,   236,   237,   238,   239,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "POSINT", "REAL", "STRING",
  "ARRAY", "ASSIGN", "KW_INT", "KW_REAL", "KW_BOOL", "KW_STRING",
  "KW_FUNC", "KW_IF", "KW_THEN", "KW_ELSE", "KW_AND", "KW_OR", "KW_NOT",
  "KW_NOT_EQL", "KW_LESS_EQL", "KW_FI", "KW_WHILE", "KW_LOOP", "KW_POOL",
  "KW_CONST", "KW_LET", "KW_RETURN", "KW_START", "KW_LIMITER", "KW_TRUE",
  "KW_FALSE", "F_readS", "F_readI", "F_readR", "F_writeS", "F_writeI",
  "F_writeR", "'='", "'<'", "'-'", "'+'", "'*'", "'/'", "'%'", "';'",
  "'('", "')'", "':'", "'{'", "'}'", "\"[]\"", "','", "'['", "']'",
  "$accept", "input", "part1", "part2", "main_func", "defined_func",
  "commands", "main_body", "while_state", "if_state", "type", "const_type",
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,    61,
      60,    45,    43,    42,    47,    37,    59,    40,    41,    58,
     123,   125,   294,    44,    91,    93
};
# endif

#define YYPACT_NINF -86

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-86)))

#define YYTABLE_NINF -3

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,    31,    54,   -86,     7,    15,    28,   105,   112,     7,
      -1,     4,    27,    15,    57,    21,   -86,   -86,    35,   272,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     6,   272,   -86,
     -86,   -86,   -86,   -86,    27,   -86,   -86,   -86,    53,    99,
     272,   -86,   -86,   -86,   -86,   -86,   -86,     7,   272,   -86,
      15,   -86,    88,    91,     7,   -86,    15,   -86,   142,    98,
     -86,   -86,    56,   100,   108,    27,   142,   103,   110,   138,
      16,   -86,    23,    27,   148,   142,   -86,    27,   142,   157,
     121,   -86,    17,   -86,   122,   146,   142,   -86,   146,    26,
      92,    95,    15,    95,   128,   130,   131,   140,   143,   144,
     -86,   146,   141,   151,   154,   -86,   146,   150,    95,    95,
      19,   -86,   -86,    92,    95,    95,    95,    95,    92,   172,
     151,   178,    -5,   -86,   215,   158,   223,   166,   167,   186,
     234,   235,   239,   -86,   -86,   -86,   -86,   -86,   -86,   185,
     197,   123,   -86,   -86,   -86,    73,    73,   168,   -86,   -86,
      92,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,   146,   -86,   200,   202,   203,   204,   205,   213,
     -86,   -86,    95,   -86,   -86,   111,   230,   264,   264,   264,
     264,    73,    73,   -86,   -86,   -86,   146,   256,   -86,   -86,
     -86,   236,   237,   240,   -86,   -86,   -86,   -86,   -86,   -86
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     0,    67,     0,     0,     0,     0,
       0,    67,     0,    67,     0,     0,     3,     8,     0,     0,
      36,    37,    38,    39,    66,    63,     5,    67,     0,    69,
      31,    32,    33,    34,     0,    73,    68,     6,     0,     0,
       0,    57,    58,    59,    62,    60,    61,     0,     0,    70,
      67,    35,     0,     0,     0,    64,    67,    72,    48,     0,
      65,    71,    49,     0,     0,     0,    48,     0,     0,     0,
      48,    53,    50,     0,     0,    48,    52,     0,    48,     0,
       0,    56,    48,    54,     0,     0,    48,    51,    40,     0,
      27,     0,    67,     0,     0,     0,     0,     0,     0,     0,
      17,    23,     0,     0,     0,    55,    40,     0,     0,    44,
      76,    74,    75,    27,     0,     0,     0,     0,    27,     0,
      78,     0,    76,    78,     0,     0,    47,     0,     0,     0,
       0,     0,     0,    24,     9,    16,    20,    41,    42,     0,
       0,    46,    77,    30,    82,    81,    80,     0,    29,    21,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,     0,     0,     0,
      19,    43,    44,    79,    28,    93,    92,    90,    91,    88,
      89,    84,    83,    85,    86,    87,    25,     0,    10,    11,
      12,     0,     0,     0,    45,    26,    22,    13,    14,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -86,   -86,   -86,   -86,   -86,   -86,   -84,   184,   101,   -83,
      -2,   -86,   182,   -86,   -85,   118,   -86,   214,    34,    -3,
       2,   -68
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,    16,   100,   118,   102,   187,   119,
      35,    24,   107,    17,   123,   140,   104,    63,    47,    10,
      14,   121
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     103,   101,   142,   103,   106,   120,    25,    11,    -2,    11,
       7,    27,    28,    29,    48,    36,   103,   101,    11,    62,
      62,   103,   106,   124,    38,   126,   142,   108,   120,    49,
     143,     3,    51,   120,   108,   148,    30,    31,    32,    33,
     139,   141,   109,    40,    55,    26,   144,   145,   146,   147,
      39,    60,    57,    12,    15,    12,     8,    13,    61,    13,
       9,    52,    50,    70,    12,   120,   109,   174,    13,    75,
      86,    79,    77,   109,    54,    82,    78,   103,   186,    34,
       4,     5,    56,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   125,   110,   111,   112,   122,   111,
     112,   103,   186,    37,   141,    65,    90,    53,   113,    66,
      67,   114,    18,    19,   114,    91,   159,   160,   161,    92,
      93,    20,    21,    22,    23,    94,    95,    96,    97,    98,
      99,   153,   154,   115,   116,    58,   115,   116,    59,   117,
     151,   152,   117,   153,   154,    62,    64,    74,    68,    89,
     155,   156,   157,   158,   159,   160,   161,    69,    72,    73,
      90,    80,   155,   156,   157,   158,   159,   160,   161,    91,
      84,    85,    88,    92,    93,   127,   172,   128,   129,    94,
      95,    96,    97,    98,    99,   151,   152,   130,   153,   154,
     131,   132,   134,   150,   149,   151,   152,   135,   153,   154,
     136,   138,   151,   152,   163,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   164,   165,   173,   155,   156,   157,
     158,   159,   160,   161,   155,   156,   157,   158,   159,   160,
     161,   170,   151,   152,   166,   153,   154,   167,   168,   162,
     151,   152,   169,   153,   154,   171,   188,   151,   189,   190,
     153,   154,   191,   192,   155,   156,   157,   158,   159,   160,
     161,   193,   155,   156,   157,   158,   159,   160,   161,   155,
     156,   157,   158,   159,   160,   161,    41,    42,    43,    44,
      71,   196,   197,   198,    76,   133,   199,   195,   137,    81,
     194,     0,    83,     0,     0,     0,    87,     0,     0,     0,
     105,     0,     0,    45,    46,   157,   158,   159,   160,   161
};

static const yytype_int16 yycheck[] =
{
      85,    85,     7,    88,    88,    90,     9,     3,     0,     3,
       3,     7,     8,    11,     8,    13,   101,   101,     3,     3,
       3,   106,   106,    91,     3,    93,     7,     8,   113,    27,
     113,     0,    34,   118,     8,   118,     9,    10,    11,    12,
     108,   109,    47,     8,    47,    46,   114,   115,   116,   117,
      29,    54,    50,    49,    26,    49,    49,    53,    56,    53,
      53,     8,    28,    65,    49,   150,    47,   150,    53,    53,
      53,    73,    49,    47,    40,    77,    53,   162,   162,    52,
      26,    27,    48,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,    92,     3,     4,     5,     3,     4,
       5,   186,   186,    46,   172,    49,    14,     8,    16,    53,
      54,    19,     7,     8,    19,    23,    43,    44,    45,    27,
      28,     9,    10,    11,    12,    33,    34,    35,    36,    37,
      38,    20,    21,    41,    42,    47,    41,    42,    47,    47,
      17,    18,    47,    20,    21,     3,    48,     9,    48,     3,
      39,    40,    41,    42,    43,    44,    45,    49,    55,    49,
      14,    13,    39,    40,    41,    42,    43,    44,    45,    23,
      13,    50,    50,    27,    28,    47,    53,    47,    47,    33,
      34,    35,    36,    37,    38,    17,    18,    47,    20,    21,
      47,    47,    51,    15,    22,    17,    18,    46,    20,    21,
      46,    51,    17,    18,    46,    20,    21,    39,    40,    41,
      42,    43,    44,    45,    48,    48,    48,    39,    40,    41,
      42,    43,    44,    45,    39,    40,    41,    42,    43,    44,
      45,    46,    17,    18,    48,    20,    21,     3,     3,    24,
      17,    18,     3,    20,    21,    48,    46,    17,    46,    46,
      20,    21,    48,    48,    39,    40,    41,    42,    43,    44,
      45,    48,    39,    40,    41,    42,    43,    44,    45,    39,
      40,    41,    42,    43,    44,    45,     4,     5,     6,     7,
      66,    25,    46,    46,    70,   101,    46,   186,   106,    75,
     172,    -1,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    -1,    -1,    31,    32,    41,    42,    43,    44,    45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,    58,     0,    26,    27,    59,     3,    49,    53,
      75,     3,    49,    53,    76,    26,    60,    69,     7,     8,
       9,    10,    11,    12,    67,    75,    46,     7,     8,    76,
       9,    10,    11,    12,    52,    66,    76,    46,     3,    29,
       8,     4,     5,     6,     7,    31,    32,    74,     8,    76,
      74,    66,     8,     8,    74,    75,    74,    76,    47,    47,
      75,    76,     3,    73,    48,    49,    53,    54,    48,    49,
      66,    73,    55,    49,     9,    53,    73,    49,    53,    66,
      13,    73,    66,    73,    13,    50,    53,    73,    50,     3,
      14,    23,    27,    28,    33,    34,    35,    36,    37,    38,
      61,    62,    63,    70,    72,    73,    62,    68,     8,    47,
       3,     4,     5,    16,    19,    41,    42,    47,    62,    65,
      70,    77,     3,    70,    77,    76,    77,    47,    47,    47,
      47,    47,    47,    63,    51,    46,    46,    68,    51,    77,
      71,    77,     7,    65,    77,    77,    77,    77,    65,    22,
      15,    17,    18,    20,    21,    39,    40,    41,    42,    43,
      44,    45,    24,    46,    48,    48,    48,     3,     3,     3,
      46,    48,    53,    48,    65,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    62,    64,    46,    46,
      46,    48,    48,    48,    71,    64,    25,    46,    46,    46
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    57,    58,    58,    58,    59,    59,    60,
      61,    61,    61,    61,    61,    61,    62,    62,    62,    62,
      62,    62,    62,    63,    63,    64,    64,    65,    65,    65,
      65,    66,    66,    66,    66,    66,    67,    67,    67,    67,
      68,    68,    69,    70,    71,    71,    71,    72,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    74,    74,    74,
      74,    74,    74,    75,    75,    75,    75,    76,    76,    76,
      76,    76,    76,    76,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     0,     4,     4,     0,     2,    11,
       4,     4,     4,     5,     5,     5,     2,     1,     3,     4,
       2,     3,     5,     1,     2,     1,     2,     0,     3,     2,
       2,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       0,     2,    12,     4,     0,     3,     1,     2,     0,     1,
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
    printf("%s\n\n%s\n\n%s \n", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)); 
  }  
}
#line 1412 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 104 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("");}
#line 1418 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 105 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n%s;",(yyvsp[-3].str),(yyvsp[-1].str));}
#line 1424 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 106 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n%s;",(yyvsp[-3].str),(yyvsp[-1].str));}
#line 1430 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 110 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("");}
#line 1436 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 111 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s%s",(yyvsp[-1].str),(yyvsp[0].str));}
#line 1442 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 115 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("int main(){\n %s \n}",(yyvsp[-1].str));}
#line 1448 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 119 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("readString();");}
#line 1454 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 120 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("readInt();");}
#line 1460 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 121 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("ReadReal();");}
#line 1466 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 122 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("writeString(%s);",(yyvsp[-2].str));}
#line 1472 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 123 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("writeInt(%s);",(yyvsp[-2].str));}
#line 1478 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 124 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("writeReal(%s);",(yyvsp[-2].str));}
#line 1484 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 128 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s;",(yyvsp[-1].str));}
#line 1490 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 130 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s;",(yyvsp[-1].str));}
#line 1496 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 131 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s = %s ;",(yyvsp[-3].str),(yyvsp[-1].str));}
#line 1502 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 133 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[-1].str));}
#line 1508 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 134 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("while(%s){\n %s \n} ",(yyvsp[-3].str),(yyvsp[-1].str));}
#line 1514 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 139 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template(" %s\n%s",(yyvsp[-1].str),(yyvsp[0].str));}
#line 1520 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 144 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("  %s\n %s",(yyvsp[-1].str),(yyvsp[0].str));}
#line 1526 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 147 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("");}
#line 1532 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 148 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("if(%s){\n %s}",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1538 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 149 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template(" %s\n %s",(yyvsp[-1].str),(yyvsp[0].str));}
#line 1544 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 150 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("}else{ \n %s",(yyvsp[0].str));}
#line 1550 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 154 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("int");}
#line 1556 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 155 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("double");}
#line 1562 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 156 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("int");}
#line 1568 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 157 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("char*");}
#line 1574 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 158 "myparser.y" /* yacc.c:1646  */
    {}
#line 1580 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 162 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("const int");}
#line 1586 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 163 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("const double");}
#line 1592 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 164 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("const int");}
#line 1598 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 165 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("const char*");}
#line 1604 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 169 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("");}
#line 1610 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 170 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s \n %s",(yyvsp[-1].str),(yyvsp[0].str));}
#line 1616 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 175 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s(%s)\n {\n  %s} ",(yyvsp[-4].str),(yyvsp[-10].str),(yyvsp[-7].str),(yyvsp[-1].str)); }
#line 1622 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 178 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s(%s)", (yyvsp[-3].str),(yyvsp[-1].str)); }
#line 1628 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 182 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("");}
#line 1634 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 183 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s,%s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1640 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 184 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1646 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 188 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("return %s ;",(yyvsp[0].str)); }
#line 1652 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 192 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template(""); }
#line 1658 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 193 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1664 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 194 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s[]",(yyvsp[-2].str)); }
#line 1670 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 195 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s %s[]",(yyvsp[0].str),(yyvsp[-1].str),(yyvsp[-5].str)); }
#line 1676 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 196 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s %s",(yyvsp[0].str),(yyvsp[-1].str),(yyvsp[-3].str)); }
#line 1682 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 198 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s,%s ",(yyvsp[0].str),(yyvsp[-2].str)); }
#line 1688 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 199 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s[]",(yyvsp[0].str),(yyvsp[-4].str)); }
#line 1694 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 200 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s %s[]",(yyvsp[0].str),(yyvsp[-2].str),(yyvsp[-6].str)); }
#line 1700 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 201 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s %s",(yyvsp[0].str),(yyvsp[-2].str),(yyvsp[-4].str)); }
#line 1706 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 210 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("1"); }
#line 1712 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 211 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("0"); }
#line 1718 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 216 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s , ", (yyvsp[0].str)); }
#line 1724 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 217 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s = %s ", (yyvsp[0].str),(yyvsp[-2].str),(yyvsp[-1].str)); }
#line 1730 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 218 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s%s = %s ",(yyvsp[0].str), (yyvsp[-4].str),(yyvsp[-3].str),(yyvsp[-1].str)); }
#line 1736 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 219 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1742 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 223 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template(""); }
#line 1748 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 224 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s,", (yyvsp[0].str)); }
#line 1754 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 225 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s", (yyvsp[0].str), (yyvsp[-1].str)); }
#line 1760 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 226 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s%s ", (yyvsp[0].str), (yyvsp[-2].str),(yyvsp[-1].str)); }
#line 1766 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 227 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s%s = %s ",(yyvsp[0].str), (yyvsp[-4].str),(yyvsp[-3].str),(yyvsp[-1].str)); }
#line 1772 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 228 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s = %s ",(yyvsp[0].str), (yyvsp[-3].str),(yyvsp[-1].str)); }
#line 1778 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 229 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1784 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 237 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s%s", (yyvsp[-1].str),(yyvsp[0].str)); }
#line 1790 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 239 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("(%s)", (yyvsp[-1].str)); }
#line 1796 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 241 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("(+%s)",(yyvsp[0].str)); }
#line 1802 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 242 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("(-%s)",(yyvsp[0].str)); }
#line 1808 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 243 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("(!%s)",(yyvsp[0].str)); }
#line 1814 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 244 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s + %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1820 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 245 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s - %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1826 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 246 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s * %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1832 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 247 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s / %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1838 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 248 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %% %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1844 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 249 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s == %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1850 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 250 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s < %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1856 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 251 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s != %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1862 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 252 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s <= %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1868 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 253 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s || %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1874 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 254 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s && %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1880 "myparser.tab.c" /* yacc.c:1646  */
    break;


#line 1884 "myparser.tab.c" /* yacc.c:1646  */
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
#line 257 "myparser.y" /* yacc.c:1906  */

int main () {
  if ( yyparse() == 0 )
    printf("//Accepted!\n");
  else
    printf("\n");
}
