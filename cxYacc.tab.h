/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
     SYM_int = 262,
     SYM_bool = 263,
     SYM_while = 264,
     SYM_write = 265,
     SYM_if = 266,
     SYM_else = 267,
     SYM_true = 268,
     SYM_false = 269,
     SYM_becomes = 270,
     SYM_or = 271,
     SYM_and = 272,
     SYM_eql = 273,
     SYM_neq = 274,
     SYM_lss = 275,
     SYM_leq = 276,
     SYM_gtr = 277,
     SYM_geq = 278,
     SYM_plus = 279,
     SYM_minus = 280,
     SYM_times = 281,
     SYM_slash = 282,
     SYM_mod = 283,
     SYM_not = 284,
     SYM_addself = 285,
     SYM_minusself = 286,
     SYM_lparen = 287,
     SYM_rparen = 288,
     SYM_lbrace = 289,
     SYM_rbrace = 290,
     SYM_semicolon = 291,
     SYM_lcomment = 292,
     SYM_rcomment = 293,
     SYM_ident = 294,
     SYM_number = 295
   };
#endif
/* Tokens.  */
#define SYM_call 258
#define SYM_const 259
#define SYM_function 260
#define SYM_read 261
#define SYM_int 262
#define SYM_bool 263
#define SYM_while 264
#define SYM_write 265
#define SYM_if 266
#define SYM_else 267
#define SYM_true 268
#define SYM_false 269
#define SYM_becomes 270
#define SYM_or 271
#define SYM_and 272
#define SYM_eql 273
#define SYM_neq 274
#define SYM_lss 275
#define SYM_leq 276
#define SYM_gtr 277
#define SYM_geq 278
#define SYM_plus 279
#define SYM_minus 280
#define SYM_times 281
#define SYM_slash 282
#define SYM_mod 283
#define SYM_not 284
#define SYM_addself 285
#define SYM_minusself 286
#define SYM_lparen 287
#define SYM_rparen 288
#define SYM_lbrace 289
#define SYM_rbrace 290
#define SYM_semicolon 291
#define SYM_lcomment 292
#define SYM_rcomment 293
#define SYM_ident 294
#define SYM_number 295




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 12 "cxYacc.y"
{
    char *ident;
    int number;
}
/* Line 1529 of yacc.c.  */
#line 134 "cxYacc.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

