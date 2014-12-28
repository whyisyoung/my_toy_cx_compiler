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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 12 "cxYacc.y"
{
    char *ident;
    int number;
}
/* Line 1529 of yacc.c.  */
#line 136 "cxYacc.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

