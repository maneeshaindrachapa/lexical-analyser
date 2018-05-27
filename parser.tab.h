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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    START_OF_COMMENT = 258,
    END_OF_COMMENT = 259,
    IF = 260,
    ELSE = 261,
    INT = 262,
    FLOAT = 263,
    RETURN = 264,
    VOID = 265,
    WHILE = 266,
    PLUS = 267,
    MINUS = 268,
    MULTIPLY = 269,
    DIVIDE = 270,
    LESS_THAN = 271,
    LESS_OR_EQUAL = 272,
    GREATER_THAN = 273,
    GREATER_OR_EQUAL = 274,
    EQUALS = 275,
    ASSIGNMENT = 276,
    NOT_EQUALS = 277,
    EOL = 278,
    COMMA = 279,
    LEFT_PARANTHESIS = 280,
    RIGHT_PARANTHESIS = 281,
    LEFT_BRACKET = 282,
    RIGHT_BRACKET = 283,
    LEFT_SQR_BRACKET = 284,
    RIGHT_SQR_BRACKET = 285,
    ID = 286,
    NUM = 287
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
