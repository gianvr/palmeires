/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ELSE = 258,                    /* ELSE  */
    IF = 259,                      /* IF  */
    FOR = 260,                     /* FOR  */
    TYPE_INT = 261,                /* TYPE_INT  */
    EQUAL = 262,                   /* EQUAL  */
    LESS_THAN = 263,               /* LESS_THAN  */
    GREATER_THAN = 264,            /* GREATER_THAN  */
    NEG = 265,                     /* NEG  */
    EQUALS = 266,                  /* EQUALS  */
    SCAN = 267,                    /* SCAN  */
    OR = 268,                      /* OR  */
    AND = 269,                     /* AND  */
    PLUS = 270,                    /* PLUS  */
    MINUS = 271,                   /* MINUS  */
    TIMES = 272,                   /* TIMES  */
    DIVIDE = 273,                  /* DIVIDE  */
    PRINT = 274,                   /* PRINT  */
    VAR = 275,                     /* VAR  */
    OPEN_PAREN = 276,              /* OPEN_PAREN  */
    CLOSE_PAREN = 277,             /* CLOSE_PAREN  */
    OPEN_BRACE = 278,              /* OPEN_BRACE  */
    CLOSE_BRACE = 279,             /* CLOSE_BRACE  */
    COLON = 280,                   /* COLON  */
    SEMICOLON = 281,               /* SEMICOLON  */
    EOL = 282,                     /* EOL  */
    NUMBER = 283,                  /* NUMBER  */
    IDENTIFIER = 284               /* IDENTIFIER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 5 "parser.y"

    int num;
    char sym;
    char* str;

#line 99 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
