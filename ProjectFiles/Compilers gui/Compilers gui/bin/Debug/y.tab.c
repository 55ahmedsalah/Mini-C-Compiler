
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 102 "mylang.y"
 
	#include <stdio.h>   
	int yyerror(char *);
	int yylex(void);
	int yylineno;
	FILE * outFile;
	FILE * inFile;


/* Line 189 of yacc.c  */
#line 83 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     OCBRACKET = 258,
     CCBRACKET = 259,
     ORBRACKET = 260,
     CRBRACKET = 261,
     SEMICOLON = 262,
     COLON = 263,
     COMMA = 264,
     PLUSEQUAL = 265,
     MINUSEQUAL = 266,
     MULTIPLYEQUAL = 267,
     DIVIDEEQUAL = 268,
     INC = 269,
     DEC = 270,
     GREATERTHAN = 271,
     LESSTHAN = 272,
     GREATERTHANOREQUAL = 273,
     LESSTHANOREQUAL = 274,
     EQUALEQUAL = 275,
     NOTEQUAL = 276,
     PLUS = 277,
     MINUS = 278,
     MULTIPLY = 279,
     DIVIDE = 280,
     ASSIGN = 281,
     REM = 282,
     AND = 283,
     OR = 284,
     NOT = 285,
     WHILE = 286,
     DO = 287,
     FOR = 288,
     IF = 289,
     ELSE = 290,
     PRINT = 291,
     BOOL = 292,
     INT = 293,
     FLOAT = 294,
     CHAR = 295,
     STRING = 296,
     CONST = 297,
     BREAK = 298,
     SWITCH = 299,
     CASE = 300,
     FALSE = 301,
     TRUE = 302,
     RETURN = 303,
     FLOATNUMBER = 304,
     TEXT = 305,
     CHARACTER = 306,
     DEFAULT = 307,
     IDENTIFIER = 308,
     INTEGER = 309,
     EXIT = 310,
     IFX = 311,
     UMINUS = 312
   };
#endif
/* Tokens.  */
#define OCBRACKET 258
#define CCBRACKET 259
#define ORBRACKET 260
#define CRBRACKET 261
#define SEMICOLON 262
#define COLON 263
#define COMMA 264
#define PLUSEQUAL 265
#define MINUSEQUAL 266
#define MULTIPLYEQUAL 267
#define DIVIDEEQUAL 268
#define INC 269
#define DEC 270
#define GREATERTHAN 271
#define LESSTHAN 272
#define GREATERTHANOREQUAL 273
#define LESSTHANOREQUAL 274
#define EQUALEQUAL 275
#define NOTEQUAL 276
#define PLUS 277
#define MINUS 278
#define MULTIPLY 279
#define DIVIDE 280
#define ASSIGN 281
#define REM 282
#define AND 283
#define OR 284
#define NOT 285
#define WHILE 286
#define DO 287
#define FOR 288
#define IF 289
#define ELSE 290
#define PRINT 291
#define BOOL 292
#define INT 293
#define FLOAT 294
#define CHAR 295
#define STRING 296
#define CONST 297
#define BREAK 298
#define SWITCH 299
#define CASE 300
#define FALSE 301
#define TRUE 302
#define RETURN 303
#define FLOATNUMBER 304
#define TEXT 305
#define CHARACTER 306
#define DEFAULT 307
#define IDENTIFIER 308
#define INTEGER 309
#define EXIT 310
#define IFX 311
#define UMINUS 312




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 239 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   285

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNRULES -- Number of states.  */
#define YYNSTATES  178

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    13,    18,    24,    31,
      37,    45,    58,    64,    72,    78,    82,    84,    86,    88,
      91,   103,   109,   112,   116,   117,   121,   122,   127,   128,
     132,   135,   139,   141,   144,   146,   148,   150,   152,   154,
     156,   158,   160,   164,   168,   172,   176,   180,   183,   186,
     190,   193,   196,   200,   204,   208,   212,   214,   218,   222,
     226,   229,   233,   237,   241,   245,   249,   253,   257,   259,
     261,   263,   265,   267,   269,   271,   277,   285
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    60,    -1,    60,    61,    -1,    -1,    70,
      53,     7,    -1,    53,    26,    76,     7,    -1,    70,    53,
      26,    76,     7,    -1,    42,    70,    53,    26,    76,     7,
      -1,    31,     5,    76,     6,    61,    -1,    32,    67,    31,
       5,    76,     6,     7,    -1,    33,     5,    38,    53,    26,
      54,     7,    76,     7,    73,     6,    67,    -1,    34,     5,
      76,     6,    67,    -1,    34,     5,    76,     6,    67,    35,
      67,    -1,    44,     5,    53,     6,    68,    -1,    36,    76,
       7,    -1,    62,    -1,    63,    -1,    67,    -1,    72,     7,
      -1,    70,    53,     5,    65,     6,     3,    69,    48,    76,
       7,     4,    -1,    53,     5,    64,     6,     7,    -1,    53,
      64,    -1,    53,     9,    64,    -1,    -1,    70,    53,    66,
      -1,    -1,     9,    70,    53,    66,    -1,    -1,     3,    69,
       4,    -1,     3,     4,    -1,     3,    77,     4,    -1,    61,
      -1,    69,    61,    -1,    38,    -1,    39,    -1,    40,    -1,
      41,    -1,    37,    -1,    49,    -1,    54,    -1,    53,    -1,
      71,    22,    71,    -1,    71,    23,    71,    -1,    71,    24,
      71,    -1,    71,    25,    71,    -1,    71,    27,    71,    -1,
      53,    14,    -1,    53,    15,    -1,     5,    71,     6,    -1,
      53,    14,    -1,    53,    15,    -1,    53,    10,    71,    -1,
      53,    11,    71,    -1,    53,    12,    71,    -1,    53,    13,
      71,    -1,    72,    -1,    53,    26,    71,    -1,    76,    28,
      76,    -1,    76,    29,    76,    -1,    30,    76,    -1,    75,
      16,    75,    -1,    75,    17,    75,    -1,    75,    18,    75,
      -1,    75,    19,    75,    -1,    75,    21,    75,    -1,    75,
      20,    75,    -1,     5,    74,     6,    -1,    71,    -1,    51,
      -1,    46,    -1,    47,    -1,    50,    -1,    75,    -1,    74,
      -1,    52,     8,    69,    43,     7,    -1,    45,    54,     8,
      69,    43,     7,    77,    -1,    45,    54,     8,    69,    77,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   115,   115,   118,   119,   122,   124,   126,   128,   131,
     133,   135,   141,   143,   145,   148,   150,   151,   153,   154,
     158,   160,   162,   163,   164,   166,   167,   170,   171,   173,
     174,   177,   180,   181,   183,   184,   185,   186,   187,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     203,   204,   205,   206,   207,   208,   212,   213,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   227,   228,
     229,   230,   231,   236,   237,   239,   240,   241
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OCBRACKET", "CCBRACKET", "ORBRACKET",
  "CRBRACKET", "SEMICOLON", "COLON", "COMMA", "PLUSEQUAL", "MINUSEQUAL",
  "MULTIPLYEQUAL", "DIVIDEEQUAL", "INC", "DEC", "GREATERTHAN", "LESSTHAN",
  "GREATERTHANOREQUAL", "LESSTHANOREQUAL", "EQUALEQUAL", "NOTEQUAL",
  "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "ASSIGN", "REM", "AND", "OR",
  "NOT", "WHILE", "DO", "FOR", "IF", "ELSE", "PRINT", "BOOL", "INT",
  "FLOAT", "CHAR", "STRING", "CONST", "BREAK", "SWITCH", "CASE", "FALSE",
  "TRUE", "RETURN", "FLOATNUMBER", "TEXT", "CHARACTER", "DEFAULT",
  "IDENTIFIER", "INTEGER", "EXIT", "IFX", "UMINUS", "$accept", "mystart",
  "startProgram", "stmt", "function", "callFunction", "callList",
  "argList", "commas", "blockScope", "switchScope", "manyStatements",
  "type", "equalFamily", "increments", "forExpression",
  "booleanExpression", "DataTypes", "expression", "caseExpression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      62,    63,    64,    64,    64,    65,    65,    66,    66,    67,
      67,    68,    69,    69,    70,    70,    70,    70,    70,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      72,    72,    72,    72,    72,    72,    73,    73,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    75,    75,
      75,    75,    75,    76,    76,    77,    77,    77
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     4,     5,     6,     5,
       7,    12,     5,     7,     5,     3,     1,     1,     1,     2,
      11,     5,     2,     3,     0,     3,     0,     4,     0,     3,
       2,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     2,     2,     3,
       2,     2,     3,     3,     3,     3,     1,     3,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     5,     7,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
      38,    34,    35,    36,    37,     0,     0,     0,     3,    16,
      17,    18,     0,     0,    30,    32,     0,     0,     0,     0,
       0,     0,     0,    70,    71,    39,    72,    69,    41,    40,
      68,    74,    73,     0,     0,     0,    24,     0,     0,     0,
       0,    50,    51,     0,     0,    19,    29,    33,     0,     0,
       0,     0,    68,    74,     0,    60,    47,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
       0,     0,     0,     0,    24,     0,     0,    52,    53,    54,
      55,     0,    26,     5,     0,     0,     0,     0,     0,    49,
      67,    42,    43,    44,    45,    46,    61,    62,    63,    64,
      66,    65,    58,    59,     0,     0,    24,    22,     0,     0,
       6,     0,     0,     0,     9,     0,     0,    12,     0,     0,
      14,    23,    21,     0,    28,     7,     0,     0,     0,     8,
       0,     0,     0,     0,     0,    25,    10,     0,    13,     0,
       0,    31,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,    27,     0,    56,     0,     0,    77,    75,
       0,     0,     0,     0,    20,    57,    11,    76
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    25,    19,    20,    85,   121,   145,    21,
     130,    26,    22,    40,    23,   166,    41,    42,    43,   142
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -146
static const yytype_int16 yypact[] =
{
    -146,    13,   173,  -146,   131,     3,    20,    11,    39,   189,
    -146,  -146,  -146,  -146,  -146,   238,    56,   236,  -146,  -146,
    -146,  -146,    12,    62,  -146,  -146,   149,   189,    45,    66,
     189,   189,   189,  -146,  -146,  -146,  -146,  -146,    49,  -146,
     247,  -146,   179,    -2,    67,    71,    75,    17,    17,    17,
      17,  -146,  -146,   189,   122,  -146,  -146,  -146,     1,   114,
      77,     8,   231,   115,    86,  -146,  -146,  -146,    17,    17,
      17,    17,    17,   174,   174,   174,   174,   174,   174,  -146,
     189,   189,   123,   135,    15,   144,    17,   247,   247,   247,
     247,     5,   238,  -146,   189,   173,   189,   128,    20,  -146,
    -146,   133,   133,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,   189,   134,    75,  -146,   154,   231,
    -146,   150,   121,    88,  -146,    68,   124,   142,   111,   -14,
    -146,  -146,  -146,   198,   183,  -146,   196,   201,    20,  -146,
     162,   210,   218,   173,   238,  -146,  -146,   189,  -146,   244,
     173,  -146,    14,   191,   116,   173,    69,   189,   183,   204,
      46,   252,   118,  -146,   219,  -146,   254,   266,  -146,  -146,
     257,    17,    20,   -14,  -146,   247,  -146,  -146
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -146,  -146,  -146,    -1,  -146,  -146,   -81,  -146,   125,    -6,
    -146,   -12,   -11,   -29,   126,  -146,   249,   190,   -21,  -145
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      28,    18,    62,   117,    44,    79,    58,    95,    27,    61,
      64,    65,   120,     3,    98,   168,    29,     4,    87,    88,
      89,    90,    86,     4,   116,    57,    80,    81,   177,    80,
      81,   140,    91,    80,    81,   131,    80,    81,   141,   101,
     102,   103,   104,   105,    30,     5,     6,     7,     8,     4,
       9,    10,    11,    12,    13,    14,    15,   119,    16,   112,
     113,    45,   157,    66,    67,    54,    35,    17,    84,    55,
      38,    39,     4,   123,   136,   125,    59,     5,     6,     7,
       8,   122,     9,    10,    11,    12,    13,    14,    15,   167,
      16,   140,   127,   128,   124,   135,    80,    81,   141,    17,
       5,     6,     7,     8,    60,     9,    10,    11,    12,    13,
      14,    15,   161,    16,    80,    81,    80,    81,   139,    96,
      82,   100,    17,   159,    83,   170,   154,    92,    84,    93,
      97,   152,   148,   153,     4,    24,   162,   129,   156,    80,
      81,   115,   175,   160,    80,    81,    80,    81,    94,   114,
     118,    57,     4,    56,   126,    57,   133,    70,    71,    57,
      72,   132,     5,     6,     7,     8,   176,     9,    10,    11,
      12,    13,    14,    15,   134,    16,     4,   138,   137,    86,
       5,     6,     7,     8,    17,     9,    10,    11,    12,    13,
      14,    15,   144,    16,    31,    73,    74,    75,    76,    77,
      78,   143,    17,   146,     5,     6,     7,     8,   147,     9,
      10,    11,    12,    13,    14,    15,   149,    16,   150,    32,
      33,    34,   151,    35,    36,    37,    17,    38,    39,    47,
      48,    49,    50,    51,    52,    33,    34,    99,    35,    36,
      37,    46,    38,    39,   158,   171,    47,    48,    49,    50,
      51,    52,   155,    68,    69,    70,    71,   164,    72,   169,
     172,   174,    53,   106,   107,   108,   109,   110,   111,    68,
      69,    70,    71,   173,    72,    10,    11,    12,    13,    14,
      63,     0,     0,   163,     0,   165
};

static const yytype_int16 yycheck[] =
{
       6,     2,    31,    84,    15,     7,    27,     6,     5,    30,
      31,    32,     7,     0,     6,   160,     5,     3,    47,    48,
      49,    50,     5,     3,     9,    26,    28,    29,   173,    28,
      29,    45,    53,    28,    29,   116,    28,    29,    52,    68,
      69,    70,    71,    72,     5,    31,    32,    33,    34,     3,
      36,    37,    38,    39,    40,    41,    42,    86,    44,    80,
      81,     5,    48,    14,    15,    53,    49,    53,    53,     7,
      53,    54,     3,    94,     6,    96,    31,    31,    32,    33,
      34,    92,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    98,   114,    95,     7,    28,    29,    52,    53,
      31,    32,    33,    34,    38,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    28,    29,    28,    29,     7,     5,
      53,     6,    53,     7,    53,     7,   147,     5,    53,     7,
      53,   143,   138,   144,     3,     4,   157,     3,   150,    28,
      29,     6,   171,   155,    28,    29,    28,    29,    26,    26,
       6,   152,     3,     4,    26,   156,     6,    24,    25,   160,
      27,     7,    31,    32,    33,    34,   172,    36,    37,    38,
      39,    40,    41,    42,    53,    44,     3,    35,    54,     5,
      31,    32,    33,    34,    53,    36,    37,    38,    39,    40,
      41,    42,     9,    44,     5,    16,    17,    18,    19,    20,
      21,     3,    53,     7,    31,    32,    33,    34,     7,    36,
      37,    38,    39,    40,    41,    42,    54,    44,     8,    30,
      46,    47,     4,    49,    50,    51,    53,    53,    54,    10,
      11,    12,    13,    14,    15,    46,    47,     6,    49,    50,
      51,     5,    53,    54,    53,    26,    10,    11,    12,    13,
      14,    15,     8,    22,    23,    24,    25,    53,    27,     7,
       6,     4,    26,    73,    74,    75,    76,    77,    78,    22,
      23,    24,    25,     7,    27,    37,    38,    39,    40,    41,
      31,    -1,    -1,   158,    -1,   159
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    59,    60,     0,     3,    31,    32,    33,    34,    36,
      37,    38,    39,    40,    41,    42,    44,    53,    61,    62,
      63,    67,    70,    72,     4,    61,    69,     5,    67,     5,
       5,     5,    30,    46,    47,    49,    50,    51,    53,    54,
      71,    74,    75,    76,    70,     5,     5,    10,    11,    12,
      13,    14,    15,    26,    53,     7,     4,    61,    76,    31,
      38,    76,    71,    74,    76,    76,    14,    15,    22,    23,
      24,    25,    27,    16,    17,    18,    19,    20,    21,     7,
      28,    29,    53,    53,    53,    64,     5,    71,    71,    71,
      71,    76,     5,     7,    26,     6,     5,    53,     6,     6,
       6,    71,    71,    71,    71,    71,    75,    75,    75,    75,
      75,    75,    76,    76,    26,     6,     9,    64,     6,    71,
       7,    65,    70,    76,    61,    76,    26,    67,    76,     3,
      68,    64,     7,     6,    53,     7,     6,    54,    35,     7,
      45,    52,    77,     3,     9,    66,     7,     7,    67,    54,
       8,     4,    69,    70,    76,     8,    69,    48,    53,     7,
      69,    43,    76,    66,    53,    72,    73,    43,    77,     7,
       7,    26,     6,     7,     4,    71,    67,    77
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:

/* Line 1455 of yacc.c  */
#line 122 "mylang.y"
    {printf("Declaration\n");}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 124 "mylang.y"
    {printf("Assignment\n");}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 126 "mylang.y"
    {printf("Declaration and Assignment\n");}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 128 "mylang.y"
    {printf("Constant assignment\n");}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 131 "mylang.y"
    {printf("While loop\n");}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 133 "mylang.y"
    {printf("Do while\n");}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 138 "mylang.y"
    {printf("For loop\n");}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 141 "mylang.y"
    {printf("If statement\n");}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 143 "mylang.y"
    {printf("If-Elsestatement\n");}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 145 "mylang.y"
    {printf("Switch case\n");}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 148 "mylang.y"
    {printf("Print\n");}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 150 "mylang.y"
    {printf("Function Body\n");}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 151 "mylang.y"
    {printf("Function Call\n");}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 153 "mylang.y"
    {printf("New  block\n");}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 158 "mylang.y"
    {printf("function\n");}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 173 "mylang.y"
    {printf("blockScope\n");}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 177 "mylang.y"
    {printf("Switch Case block\n");}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 190 "mylang.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 191 "mylang.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 192 "mylang.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 193 "mylang.y"
    { (yyval) = (yyvsp[(1) - (3)]) + (yyvsp[(3) - (3)]);}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 194 "mylang.y"
    { (yyval) = (yyvsp[(1) - (3)]) - (yyvsp[(3) - (3)]); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 195 "mylang.y"
    { (yyval) = (yyvsp[(1) - (3)]) * (yyvsp[(3) - (3)]); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 196 "mylang.y"
    { (yyval) = (yyvsp[(1) - (3)]) / (yyvsp[(3) - (3)]); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 197 "mylang.y"
    { (yyval) = (yyvsp[(1) - (3)]) % (yyvsp[(3) - (3)]); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 198 "mylang.y"
    { (yyval) = (yyvsp[(1) - (2)])+1; }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 199 "mylang.y"
    { (yyval) = (yyvsp[(1) - (2)])+1; }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 200 "mylang.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 203 "mylang.y"
    { (yyval) = (yyvsp[(1) - (2)])+1; }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 204 "mylang.y"
    { (yyval) = (yyvsp[(1) - (2)])-1; }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 205 "mylang.y"
    { (yyvsp[(1) - (3)]) = (yyvsp[(1) - (3)])+(yyvsp[(3) - (3)]); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 206 "mylang.y"
    { (yyvsp[(1) - (3)]) = (yyvsp[(1) - (3)])-(yyvsp[(3) - (3)]); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 207 "mylang.y"
    { (yyvsp[(1) - (3)]) = (yyvsp[(1) - (3)])*(yyvsp[(3) - (3)]); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 208 "mylang.y"
    { (yyvsp[(1) - (3)]) = (yyvsp[(1) - (3)])/(yyvsp[(3) - (3)]); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 212 "mylang.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 215 "mylang.y"
    { (yyval) = (yyvsp[(1) - (3)]) && (yyvsp[(3) - (3)]); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 216 "mylang.y"
    { (yyval) = (yyvsp[(1) - (3)]) || (yyvsp[(3) - (3)]); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 217 "mylang.y"
    { (yyval) = ! (yyvsp[(2) - (2)]); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 218 "mylang.y"
    { (yyval) = (yyvsp[(1) - (3)]) > (yyvsp[(3) - (3)]); }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 219 "mylang.y"
    { (yyval) = (yyvsp[(1) - (3)]) < (yyvsp[(3) - (3)]); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 220 "mylang.y"
    { (yyval) = (yyvsp[(1) - (3)]) >= (yyvsp[(3) - (3)]); }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 221 "mylang.y"
    { (yyval) = (yyvsp[(1) - (3)]) <= (yyvsp[(3) - (3)]); }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 222 "mylang.y"
    { (yyval) = (yyvsp[(1) - (3)]) != (yyvsp[(3) - (3)]); }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 223 "mylang.y"
    { (yyval) = (yyvsp[(1) - (3)]) == (yyvsp[(3) - (3)]); }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 239 "mylang.y"
    {printf(" Case Statment\n");}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 240 "mylang.y"
    {printf(" Case Statment\n");}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 241 "mylang.y"
    {printf(" Case Statment\n");}
    break;



/* Line 1455 of yacc.c  */
#line 1933 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 244 "mylang.y"
 
 int yyerror(char *s) {  int lineno=++yylineno;   fprintf(stderr, "line number : %d %s\n", lineno,s);     return 0; }
 
 int main(void) {
	
	inFile = fopen("input.txt", "r");
 
	outFile=fopen("output.txt","w");
	
	if(!yyparse()) {
		printf("\nParsing complete\n");
		fprintf(outFile,"Completed");
	}
	else {
		printf("\nParsing failed\n %d",yylineno);
		return 0;
	}
	
	fclose(inFile);
	fclose(outFile);
    return 0;
}