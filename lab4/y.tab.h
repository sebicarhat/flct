#define ID 257
#define INT 258
#define CHAR 259
#define FLOAT 260
#define CIN 261
#define COUT 262
#define IF 263
#define ELSE 264
#define WHILE 265
#define FOR 266
#define MAIN 267
#define OBRACE 268
#define EBRACE 269
#define SEMICOLON 270
#define OPAR 271
#define EPAR 272
#define PLUS 273
#define MINUS 274
#define MULT 275
#define DIV 276
#define MOD 277
#define GT 278
#define LT 279
#define GE 280
#define LE 281
#define EQ 282
#define NOTEQ 283
#define ASSIGN 284
#define RETURN 285
#define INTEGER 286
#define REAL 287
#define TEXT 288
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union
{
  int integer;
  float real;
  char *text;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
