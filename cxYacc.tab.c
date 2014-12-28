/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SYM_call = 258,
     SYM_const = 259,
     SYM_function = 260,
     SYM_read = 261,
     SYM_odd = 262,
     SYM_int = 263,
     SYM_bool = 264,
     SYM_while = 265,
     SYM_write = 266,
     SYM_if = 267,
     SYM_else = 268,
     SYM_true = 269,
     SYM_false = 270,
     SYM_becomes = 271,
     SYM_or = 272,
     SYM_and = 273,
     SYM_eql = 274,
     SYM_neq = 275,
     SYM_lss = 276,
     SYM_leq = 277,
     SYM_gtr = 278,
     SYM_geq = 279,
     SYM_plus = 280,
     SYM_minus = 281,
     SYM_times = 282,
     SYM_slash = 283,
     SYM_mod = 284,
     SYM_not = 285,
     SYM_addself = 286,
     SYM_minusself = 287,
     SYM_lparen = 288,
     SYM_rparen = 289,
     SYM_lbrace = 290,
     SYM_rbrace = 291,
     SYM_semicolon = 292,
     SYM_lcomment = 293,
     SYM_rcomment = 294,
     SYM_ident = 295,
     SYM_number = 296
   };
#endif
/* Tokens.  */
#define SYM_call 258
#define SYM_const 259
#define SYM_function 260
#define SYM_read 261
#define SYM_odd 262
#define SYM_int 263
#define SYM_bool 264
#define SYM_while 265
#define SYM_write 266
#define SYM_if 267
#define SYM_else 268
#define SYM_true 269
#define SYM_false 270
#define SYM_becomes 271
#define SYM_or 272
#define SYM_and 273
#define SYM_eql 274
#define SYM_neq 275
#define SYM_lss 276
#define SYM_leq 277
#define SYM_gtr 278
#define SYM_geq 279
#define SYM_plus 280
#define SYM_minus 281
#define SYM_times 282
#define SYM_slash 283
#define SYM_mod 284
#define SYM_not 285
#define SYM_addself 286
#define SYM_minusself 287
#define SYM_lparen 288
#define SYM_rparen 289
#define SYM_lbrace 290
#define SYM_rbrace 291
#define SYM_semicolon 292
#define SYM_lcomment 293
#define SYM_rcomment 294
#define SYM_ident 295
#define SYM_number 296




/* Copy the first part of user declarations.  */
#line 1 "cxYacc.y"

    #include "gencode.h"
    #define YYDEBUG 1
    #ifdef YYDEBUG
        #define TRACE printf("reduce at line %d\n", __LINE__);
    #else
        #define TRACE
    #endif


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 12 "cxYacc.y"
{
    char *ident;
    int number;
}
/* Line 193 of yacc.c.  */
#line 193 "cxYacc.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 206 "cxYacc.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   152

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNRULES -- Number of states.  */
#define YYNSTATES  142

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,     8,     9,    10,    18,    19,
      22,    23,    28,    29,    34,    35,    36,    45,    46,    51,
      53,    55,    56,    59,    60,    61,    68,    69,    70,    71,
      82,    83,    84,    85,    95,    99,   103,   107,   111,   115,
     119,   123,   127,   128,   131,   133,   135,   138,   142,   146,
     148,   152,   156,   160,   162,   164,   166,   170,   174,   176,
     180,   182,   184,   186,   188,   191,   195,   197,   201,   205,
     209,   213,   217,   221,   224,   226
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,
      35,    46,    49,    47,    58,    48,    36,    -1,    -1,    49,
      50,    -1,    -1,     8,    56,    51,    37,    -1,    -1,     9,
      57,    52,    37,    -1,    -1,    -1,     4,     8,    56,    53,
      16,    41,    54,    37,    -1,    -1,     5,    56,    55,    45,
      -1,    40,    -1,    40,    -1,    -1,    58,    59,    -1,    -1,
      -1,    56,    60,    16,    69,    61,    37,    -1,    -1,    -1,
      -1,    12,    33,    73,    34,    62,    59,    63,    68,    64,
      37,    -1,    -1,    -1,    -1,    10,    65,    33,    73,    34,
      66,    59,    67,    37,    -1,    11,    70,    37,    -1,     6,
      56,    37,    -1,    56,    31,    37,    -1,    31,    56,    37,
      -1,    56,    32,    37,    -1,    32,    56,    37,    -1,     3,
      56,    37,    -1,    35,    58,    36,    -1,    -1,    13,    59,
      -1,    70,    -1,    73,    -1,    26,    71,    -1,    71,    25,
      71,    -1,    71,    26,    71,    -1,    71,    -1,    72,    27,
      72,    -1,    72,    28,    72,    -1,    72,    29,    72,    -1,
      72,    -1,    56,    -1,    41,    -1,    33,    70,    34,    -1,
      73,    17,    74,    -1,    74,    -1,    74,    18,    75,    -1,
      75,    -1,    57,    -1,    14,    -1,    15,    -1,    30,    75,
      -1,    33,    73,    34,    -1,    76,    -1,    77,    21,    70,
      -1,    77,    22,    70,    -1,    77,    23,    70,    -1,    77,
      24,    70,    -1,    77,    19,    70,    -1,    77,    20,    70,
      -1,     7,    70,    -1,    56,    -1,    41,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    62,    62,    62,    68,    78,    86,    67,    93,    94,
      99,    98,   104,   103,   109,   111,   108,   116,   115,   129,
     133,   136,   137,   142,   157,   141,   165,   170,   176,   164,
     180,   184,   188,   179,   192,   196,   208,   222,   236,   250,
     273,   286,   289,   290,   294,   295,   299,   301,   303,   305,
     309,   311,   313,   315,   319,   340,   349,   353,   357,   361,
     365,   369,   389,   393,   397,   401,   402,   406,   410,   414,
     418,   422,   426,   430,   444,   462
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SYM_call", "SYM_const", "SYM_function",
  "SYM_read", "SYM_odd", "SYM_int", "SYM_bool", "SYM_while", "SYM_write",
  "SYM_if", "SYM_else", "SYM_true", "SYM_false", "SYM_becomes", "SYM_or",
  "SYM_and", "SYM_eql", "SYM_neq", "SYM_lss", "SYM_leq", "SYM_gtr",
  "SYM_geq", "SYM_plus", "SYM_minus", "SYM_times", "SYM_slash", "SYM_mod",
  "SYM_not", "SYM_addself", "SYM_minusself", "SYM_lparen", "SYM_rparen",
  "SYM_lbrace", "SYM_rbrace", "SYM_semicolon", "SYM_lcomment",
  "SYM_rcomment", "SYM_ident", "SYM_number", "$accept", "program", "@1",
  "block", "@2", "@3", "@4", "declaration_list", "declaration", "@5", "@6",
  "@7", "@8", "@9", "some_ident", "another_ident", "statement_list",
  "statement", "@10", "@11", "@12", "@13", "@14", "@15", "@16", "@17",
  "else_statement", "expression", "some_expression", "some_term",
  "some_factor", "another_expression", "another_term", "another_factor",
  "condition", "left_condition", 0
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
     295,   296
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    44,    43,    46,    47,    48,    45,    49,    49,
      51,    50,    52,    50,    53,    54,    50,    55,    50,    56,
      57,    58,    58,    60,    61,    59,    62,    63,    64,    59,
      65,    66,    67,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    68,    68,    69,    69,    70,    70,    70,    70,
      71,    71,    71,    71,    72,    72,    72,    73,    73,    74,
      74,    75,    75,    75,    75,    75,    75,    76,    76,    76,
      76,    76,    76,    76,    77,    77
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     0,     0,     7,     0,     2,
       0,     4,     0,     4,     0,     0,     8,     0,     4,     1,
       1,     0,     2,     0,     0,     6,     0,     0,     0,    10,
       0,     0,     0,     9,     3,     3,     3,     3,     3,     3,
       3,     3,     0,     2,     1,     1,     2,     3,     3,     1,
       3,     3,     3,     1,     1,     1,     3,     3,     1,     3,
       1,     1,     1,     1,     2,     3,     1,     3,     3,     3,
       3,     3,     3,     2,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     4,     3,     8,     5,     0,     0,
       0,     0,    21,     9,     0,    19,    17,    10,    20,    12,
       6,    14,     0,     0,     0,     0,     0,    30,     0,     0,
       0,     0,    21,     0,    23,    22,     0,    18,    11,    13,
       0,     0,     0,     0,     0,    55,    54,     0,    49,    53,
       0,     0,     0,     0,     7,     0,     0,     0,     0,    40,
      35,     0,    46,     0,    34,     0,     0,     0,     0,     0,
       0,    62,    63,     0,     0,    19,    75,    74,    61,     0,
      58,    60,    66,     0,    37,    39,    41,    36,    38,     0,
      15,     0,    56,    47,    48,    50,    51,    52,    73,    64,
       0,     0,    26,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    54,    24,    44,    45,     0,    31,    65,    57,
       0,    59,    71,    72,    67,    68,    69,    70,     0,    16,
       0,    27,    25,    32,    42,     0,     0,    28,    33,    43,
       0,    29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,     6,    12,    33,     7,    13,    23,
      24,    36,   116,    22,    46,    78,    20,    35,    57,   128,
     120,   134,   140,    42,   130,   135,   137,   113,    63,    48,
      49,   100,    80,    81,    82,    83
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -113
static const yytype_int8 yypact[] =
{
    -113,    15,    -6,  -113,  -113,  -113,  -113,    94,    28,    -1,
      -1,     7,  -113,  -113,    -1,  -113,  -113,  -113,  -113,  -113,
      65,  -113,    -6,    35,    53,    -1,    -1,  -113,    33,    30,
      -1,    -1,  -113,    25,    24,  -113,    75,  -113,  -113,  -113,
      56,    58,    73,   -31,    33,  -113,  -113,    76,    44,    81,
      74,    79,    80,    22,  -113,    82,    83,    96,    77,  -113,
    -113,    74,  -113,    88,  -113,   -31,   -31,   -31,   -31,   -31,
      33,  -113,  -113,    74,    74,    61,  -113,  -113,  -113,    -4,
     105,  -113,  -113,   109,  -113,  -113,  -113,  -113,  -113,     5,
    -113,     6,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
      26,    74,  -113,    74,    33,    33,    33,    33,    33,    33,
       5,   115,   121,  -113,  -113,   107,    89,  -113,  -113,   105,
      65,  -113,  -113,  -113,  -113,  -113,  -113,  -113,   110,  -113,
      65,  -113,  -113,  -113,   112,   111,    65,  -113,  -113,  -113,
     113,  -113
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -113,  -113,  -113,   124,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,    -9,   138,   119,  -112,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,   -22,   -39,
     -18,   -47,    51,   -66,  -113,  -113
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -76
static const yytype_int16 yytable[] =
{
      16,    17,    44,    79,    62,    21,    47,    99,   131,    15,
      45,    34,    70,   101,    91,     3,    40,    41,   133,    71,
      72,    51,    52,   101,   139,    25,    93,    94,    26,     4,
     102,    43,    27,    28,    29,    73,    14,   121,   110,    15,
     117,    77,   115,   101,    34,    75,   111,    18,    98,    95,
      96,    97,    77,    30,    31,    55,    56,    32,    86,    43,
     118,    54,    15,    50,    77,    77,    44,   114,    25,    65,
      66,    26,    38,    15,    45,    27,    28,    29,   -20,   -20,
     112,    70,   122,   123,   124,   125,   126,   127,    71,    72,
      39,    58,    77,    59,    77,    60,    30,    31,     8,     9,
      32,   112,    10,    11,    73,    15,    61,    74,    67,    68,
      69,    34,    89,    64,    75,    76,    84,    85,    90,    87,
      88,    34,    92,   103,   101,   136,   129,    34,   104,   105,
     106,   107,   108,   109,   -75,   -75,   -75,   -75,   -75,   -75,
     -74,   -74,   -74,   -74,   -74,   -74,    37,   132,   138,    19,
     141,    53,   119
};

static const yytype_uint8 yycheck[] =
{
       9,    10,    33,    50,    43,    14,    28,    73,   120,    40,
      41,    20,     7,    17,    61,     0,    25,    26,   130,    14,
      15,    30,    31,    17,   136,     3,    65,    66,     6,    35,
      34,    26,    10,    11,    12,    30,     8,   103,    33,    40,
      34,    50,    89,    17,    53,    40,    41,    40,    70,    67,
      68,    69,    61,    31,    32,    31,    32,    35,    36,    26,
      34,    36,    40,    33,    73,    74,    33,    89,     3,    25,
      26,     6,    37,    40,    41,    10,    11,    12,    17,    18,
      89,     7,   104,   105,   106,   107,   108,   109,    14,    15,
      37,    16,   101,    37,   103,    37,    31,    32,     4,     5,
      35,   110,     8,     9,    30,    40,    33,    33,    27,    28,
      29,   120,    16,    37,    40,    41,    37,    37,    41,    37,
      37,   130,    34,    18,    17,    13,    37,   136,    19,    20,
      21,    22,    23,    24,    19,    20,    21,    22,    23,    24,
      19,    20,    21,    22,    23,    24,    22,    37,    37,    11,
      37,    32,   101
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    43,    44,     0,    35,    45,    46,    49,     4,     5,
       8,     9,    47,    50,     8,    40,    56,    56,    40,    57,
      58,    56,    55,    51,    52,     3,     6,    10,    11,    12,
      31,    32,    35,    48,    56,    59,    53,    45,    37,    37,
      56,    56,    65,    26,    33,    41,    56,    70,    71,    72,
      33,    56,    56,    58,    36,    31,    32,    60,    16,    37,
      37,    33,    71,    70,    37,    25,    26,    27,    28,    29,
       7,    14,    15,    30,    33,    40,    41,    56,    57,    73,
      74,    75,    76,    77,    37,    37,    36,    37,    37,    16,
      41,    73,    34,    71,    71,    72,    72,    72,    70,    75,
      73,    17,    34,    18,    19,    20,    21,    22,    23,    24,
      33,    41,    56,    69,    70,    73,    54,    34,    34,    74,
      62,    75,    70,    70,    70,    70,    70,    70,    61,    37,
      66,    59,    37,    59,    63,    67,    13,    68,    37,    59,
      64,    37
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 2:
#line 62 "cxYacc.y"
    { level--; ;}
    break;

  case 4:
#line 68 "cxYacc.y"
    {
        level++;
        data_allocation_index = 3;
        level_registration[level].init_tx = table_index;
        table[table_index].adr = code_index;
        gen_middle_code(jmp, 0, 1); // 为什么这里是 1
        if(level > LEV_MAX)
            error(32);
    ;}
    break;

  case 5:
#line 78 "cxYacc.y"
    {
        code[table[level_registration[level].init_tx].adr].adr = code_index; // 填写过程体在 code 中的入口地址
        table[level_registration[level].init_tx].adr = code_index;  // 填写过程体在 table 中的入口地址
        table[level_registration[level].init_tx].size = data_allocation_index;
        level_registration[level].init_cx = code_index;
        gen_middle_code(ini, 0, data_allocation_index);
    ;}
    break;

  case 6:
#line 86 "cxYacc.y"
    {
        gen_middle_code(opr, 0, 0);
        printf("\n");
    ;}
    break;

  case 10:
#line 99 "cxYacc.y"
    {
        strcpy(ident, (yyvsp[(2) - (2)].ident));
        enter_object_to_table(variable);
    ;}
    break;

  case 12:
#line 104 "cxYacc.y"
    {
        strcpy(ident, (yyvsp[(2) - (2)].ident));
        enter_object_to_table(variable); // 暂时将 bool 型变量当作 variable 处理
    ;}
    break;

  case 14:
#line 109 "cxYacc.y"
    { strcpy(ident, (yyvsp[(3) - (3)].ident)); ;}
    break;

  case 15:
#line 111 "cxYacc.y"
    {
        number = (yyvsp[(6) - (6)].number);
        enter_object_to_table(constant);
    ;}
    break;

  case 17:
#line 116 "cxYacc.y"
    {
        strcpy(ident, (yyvsp[(2) - (2)].ident));
        enter_object_to_table(func);
        level_registration[level].init_dx = data_allocation_index;
    ;}
    break;

  case 18:
#line 122 "cxYacc.y"
    {
        level--; // Why???
        data_allocation_index = level_registration[level].init_dx;
    ;}
    break;

  case 23:
#line 142 "cxYacc.y"
    {
        int pos;
        strcpy(ident, (yyvsp[(1) - (1)].ident));
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            if(table[pos].kind != variable){
                error(12);
                pos = 0;
            }
        }
        (yyval.number) = pos;
    ;}
    break;

  case 24:
#line 157 "cxYacc.y"
    {
        int pos;
        if((yyvsp[(2) - (4)].number) != 0) { // 其实就是 SYM_ident 后面那个大括号保留下来的 i， 因为此处无法访问上一个段落的 i, 所以要在上一段中用 $<number>$2 保存下来， $<number>$ 是指定 i 的类型为 数字
            pos = (yyvsp[(2) - (4)].number);
            gen_middle_code(sto, level-table[pos].level, table[pos].adr);
        }
    ;}
    break;

  case 26:
#line 165 "cxYacc.y"
    {
        (yyval.number) = code_index; /// Warning: $<number>0 是什么？？？
        gen_middle_code(jpc, 0, 0); // 回填用 L1
    ;}
    break;

  case 27:
#line 170 "cxYacc.y"
    {
        (yyval.number) = code_index;
        gen_middle_code(jmp, 0, 0); // 回填用 L2， 如果条件成立，执行完 statement 后应该无条件跳转至 if..else.. 之后的地址， 该地址待回填
        code[(yyvsp[(5) - (6)].number)].adr = code_index; // L1
    ;}
    break;

  case 28:
#line 176 "cxYacc.y"
    {
        code[(yyvsp[(7) - (8)].number)].adr = code_index; // L2
    ;}
    break;

  case 30:
#line 180 "cxYacc.y"
    {
        (yyval.number) = code_index;
    ;}
    break;

  case 31:
#line 184 "cxYacc.y"
    {
        (yyval.number) = code_index;
        gen_middle_code(jpc, 0, 0); // 用 statement 之后的地址回填
    ;}
    break;

  case 32:
#line 188 "cxYacc.y"
    {
        gen_middle_code(jmp, 0, (yyvsp[(2) - (7)].number)); // 无条件跳转回 while 循环
        code[(yyvsp[(6) - (7)].number)].adr = code_index;
    ;}
    break;

  case 34:
#line 193 "cxYacc.y"
    {
        gen_middle_code(opr, 0, 14); // Warning: 此处的 write 是为了输出变量，实际上也就是输出栈顶内容
    ;}
    break;

  case 35:
#line 197 "cxYacc.y"
    {
        int pos;
        strcpy(ident, (yyvsp[(2) - (3)].ident));
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            gen_middle_code(opr, 0, 16);
            gen_middle_code(sto, level - table[pos].level, table[pos].adr);
        }
    ;}
    break;

  case 36:
#line 209 "cxYacc.y"
    {
        int pos;
        strcpy(ident, (yyvsp[(1) - (3)].ident));
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0); // Warning: 应该还要列出其他错误，必须是 variable 才能自增自减
        else {
            gen_middle_code(lit, 0, 1);
            gen_middle_code(lod, level - table[pos].level, table[pos].adr);
            gen_middle_code(opr, 0, 2);
            gen_middle_code(sto, level - table[pos].level, table[pos].adr);
        }
    ;}
    break;

  case 37:
#line 223 "cxYacc.y"
    {
        int pos;
        strcpy(ident, (yyvsp[(2) - (3)].ident));
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            gen_middle_code(lit, 0, 1);
            gen_middle_code(lod, level - table[pos].level, table[pos].adr);
            gen_middle_code(opr, 0, 2);
            gen_middle_code(sto, level - table[pos].level, table[pos].adr);
        }
    ;}
    break;

  case 38:
#line 237 "cxYacc.y"
    {
        int pos;
        strcpy(ident, (yyvsp[(1) - (3)].ident));
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            gen_middle_code(lit, 0, -1);
            gen_middle_code(lod, level - table[pos].level, table[pos].adr);
            gen_middle_code(opr, 0, 2);
            gen_middle_code(sto, level - table[pos].level, table[pos].adr);
        }
    ;}
    break;

  case 39:
#line 251 "cxYacc.y"
    {
        int pos;
        strcpy(ident, (yyvsp[(2) - (3)].ident));
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            gen_middle_code(lit, 0, -1);
            gen_middle_code(lod, level - table[pos].level, table[pos].adr);
            gen_middle_code(opr, 0, 2);
            gen_middle_code(sto, level - table[pos].level, table[pos].adr);
        }
    ;}
    break;

  case 40:
#line 274 "cxYacc.y"
    {
        int pos;
        strcpy(ident, (yyvsp[(2) - (3)].ident));
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(1);
        else if(table[pos].kind != func)
            error(3);
        else
            gen_middle_code(cal, level - table[pos].level, table[pos].adr);
    ;}
    break;

  case 46:
#line 300 "cxYacc.y"
    { gen_middle_code(opr, 0, 1); ;}
    break;

  case 47:
#line 302 "cxYacc.y"
    { gen_middle_code(opr, 0, 2); ;}
    break;

  case 48:
#line 304 "cxYacc.y"
    { gen_middle_code(opr, 0, 3); ;}
    break;

  case 50:
#line 310 "cxYacc.y"
    { gen_middle_code(opr, 0, 4); ;}
    break;

  case 51:
#line 312 "cxYacc.y"
    { gen_middle_code(opr, 0, 5); ;}
    break;

  case 52:
#line 314 "cxYacc.y"
    { gen_middle_code(opr, 0, 6); ;}
    break;

  case 54:
#line 320 "cxYacc.y"
    {
        int pos;
        strcpy(ident, (yyvsp[(1) - (1)].ident));
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            switch(table[pos].kind) {
            case constant:
                gen_middle_code(lit, 0, table[pos].val);
                break;
            case variable:
                gen_middle_code(lod, level-table[pos].level, table[pos].adr);
                break;
            case func:
                error(4);
                break;
            }
        }
    ;}
    break;

  case 55:
#line 341 "cxYacc.y"
    {
        int num = (yyvsp[(1) - (1)].number);
        if(num > CONST_MAX) {
            error(31);
            num = 0;
        }
        gen_middle_code(lit, 0, num);
    ;}
    break;

  case 57:
#line 354 "cxYacc.y"
    {
        gen_middle_code(opr, 0, 17);
    ;}
    break;

  case 59:
#line 362 "cxYacc.y"
    {
        gen_middle_code(opr, 0, 18);
    ;}
    break;

  case 61:
#line 370 "cxYacc.y"
    {
        int pos;
        strcpy(ident, (yyvsp[(1) - (1)].ident));
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            switch(table[pos].kind) {
            case constant:
                gen_middle_code(lit, 0, table[pos].val); break;
            case variable:
                gen_middle_code(lod, level - table[pos].level, table[pos].adr); break;
                gen_middle_code(lit, 0, 0);
                gen_middle_code(opr, 0, 12); // ident > 0 ?
            case func:
                error(4); break;
            }
        }
    ;}
    break;

  case 62:
#line 390 "cxYacc.y"
    {
        gen_middle_code(lit, 0, 1);
    ;}
    break;

  case 63:
#line 394 "cxYacc.y"
    {
        gen_middle_code(lit, 0, 0);
    ;}
    break;

  case 64:
#line 398 "cxYacc.y"
    {
        gen_middle_code(opr, 0, 19);
    ;}
    break;

  case 67:
#line 407 "cxYacc.y"
    {
        gen_middle_code(opr, 0, 10);
    ;}
    break;

  case 68:
#line 411 "cxYacc.y"
    {
        gen_middle_code(opr, 0, 13);
    ;}
    break;

  case 69:
#line 415 "cxYacc.y"
    {
        gen_middle_code(opr, 0, 12);
    ;}
    break;

  case 70:
#line 419 "cxYacc.y"
    {
        gen_middle_code(opr, 0, 11);
    ;}
    break;

  case 71:
#line 423 "cxYacc.y"
    {
        gen_middle_code(opr, 0, 8);
    ;}
    break;

  case 72:
#line 427 "cxYacc.y"
    {
        gen_middle_code(opr, 0, 9);
    ;}
    break;

  case 73:
#line 431 "cxYacc.y"
    {
        gen_middle_code(opr, 0, 7);
    ;}
    break;

  case 74:
#line 445 "cxYacc.y"
    {
        int pos;
        strcpy(ident, (yyvsp[(1) - (1)].ident));
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            switch(table[pos].kind) {
            case constant:
                gen_middle_code(lit, 0, table[pos].val); break;
            case variable:
                gen_middle_code(lod, level - table[pos].level, table[pos].adr); break;
            case func:
                error(4); break;
            }
        }
    ;}
    break;

  case 75:
#line 463 "cxYacc.y"
    {
        int num = (yyvsp[(1) - (1)].number);
        if(num > CONST_MAX) {
            error(31);
            num = 0;
        }
        gen_middle_code(lit, 0, num);
    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2003 "cxYacc.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 483 "cxYacc.y"


/////////////////////////////////////////////////////////////////////////////
// programs section

yyerror(char *s)
{
    error_count++;
    printf("%s in line %d\n", s, line);
    fprintf(error_file, "%s in line %d\n", s, line);
}

int main()
{
    #if YYDEBUG
        yydebug = 1;
    #endif

    if((error_file = fopen("error.txt", "w"))==NULL) {
        printf("Cann't open file!\n");
        exit(0);
    }

    printf("Input file: \n");
    fprintf(error_file, "Input file: \n");

    scanf("%s", src_file_name);
    fprintf(error_file, "%s\n", src_file_name);

    if((fin = fopen(src_file_name, "r")) == NULL) {
        printf("Cann't open file according to given filename\n");
        exit(0);
    }

    redirectInput(fin);

    // printf("List object code?[y/n]");

    // scanf("%s", src_file_name);
    // fprintf(error_file,"\nList object code?\n");
    // if(src_file_name[0]=='y')
    //     listswitch=true;
    // else
    //     listswitch=false;
    error_count = 0;
    code_index = 0;

    if((middle_code_file = fopen("middle_code.txt", "w")) == NULL) {
        printf("Cann't open middle_code.txt file!\n");
        exit(0);
    }

    if((stack_data_file = fopen("stack.txt", "w")) == NULL) {
        printf("Cann't open stack.txt file!\n");
        exit(0);
    }

    yyparse();

    fclose(middle_code_file);
    fclose(error_file);

    if(error_count == 0) {
        print_middle_code();
        interpret();
    }
    else
        printf("%d errors in CX program\n", error_count);

    fclose(fin);
    getchar();
    return 0;
}

