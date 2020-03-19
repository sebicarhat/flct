/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 1 "lab4.y"

#include<stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int yylex();
int yyparse();
int main_lex();

void yyerror(const char *str) {
  fprintf(stderr,"> Error: %s.\n",str);
  exit(0);
}

int yywrap() {
  return 1;
}

int yydebug = 1;

int main(argc, argv)
int argc;
char **argv;
{
  main_lex(argc, argv);
  yyparse();
  fprintf(stdout, "> Finished: No syntax errors\n");
}

#line 37 "lab4.y"
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
#line 66 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

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
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    2,    2,    2,    1,    1,    3,    3,    4,
    4,    4,    4,    4,    4,    4,    5,    5,    6,   13,
   13,   13,   13,   13,   14,   14,   12,   12,   12,   12,
   12,    7,    8,    8,   15,   16,   16,   16,   16,    9,
    9,   17,   18,   18,   18,   18,   18,   18,   10,   10,
   10,   10,   10,   10,   11,   11,
};
static const YYINT yylen[] = {                            2,
    0,    5,    1,    1,    1,    0,    3,    0,    2,    2,
    2,    2,    2,    1,    1,    1,    2,    2,    3,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    3,    3,
    3,    2,    1,    1,    2,    2,    2,    2,    2,    5,
    5,    3,    1,    1,    1,    1,    1,    1,    5,    5,
    7,    7,    7,    7,    9,    9,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    0,    0,    8,    2,    0,    0,    3,
    5,    4,    0,    0,    0,    0,    0,    7,    0,    0,
    9,    0,    0,    0,    0,   14,   15,   16,   33,   34,
    0,   35,   36,   39,   38,   37,    0,    0,    0,   32,
    0,   18,   10,   11,   12,   13,   27,    0,   25,   26,
    0,   28,    0,    0,    0,    0,    0,   20,   21,   22,
   23,   24,    0,   47,   45,   48,   46,   43,   44,    0,
    0,    0,    0,   31,   29,   30,    0,    0,    0,   40,
   41,    0,    0,    0,    0,   51,   52,   53,   54,    0,
    0,   56,   55,
};
static const YYINT yydgoto[] = {                          2,
    7,   20,    8,   21,   22,   23,   24,   25,   26,   27,
   28,   53,   63,   52,   29,   30,   54,   70,
};
static const YYINT yysindex[] = {                      -231,
 -259,    0, -241, -234, -229,    0,    0, -216, -233,    0,
    0,    0, -205, -250, -210, -207, -204,    0, -208, -170,
    0, -180, -172, -168, -167,    0,    0,    0,    0,    0,
 -254,    0,    0,    0,    0,    0, -254, -254, -152,    0,
 -233,    0,    0,    0,    0,    0,    0, -254,    0,    0,
 -182,    0, -164, -166, -165, -150, -261,    0,    0,    0,
    0,    0, -252,    0,    0,    0,    0,    0,    0, -254,
 -237, -237, -254,    0,    0,    0, -182, -143, -142,    0,
    0, -147, -237, -237, -152,    0,    0,    0,    0, -148,
 -237,    0,    0,
};
static const YYINT yyrindex[] = {                       125,
    0,    0,    0,    0,  126,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -141,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -266,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -183, -183,    0,    0,    0,    0, -202, -203, -186,    0,
    0,    0, -183, -183,    0,    0,    0,    0,    0,    0,
 -183,    0,    0,
};
static const YYINT yygindex[] = {                         0,
   13,    0,    0,   17,    0,  -20,    0,    0,    0,    0,
    0,  -30,    0,   64,    0,    0,  -36,    0,
};
#define YYTABLESIZE 129
static const YYINT yytable[] = {                         42,
   51,   55,   47,   19,   75,   19,   33,    3,   34,   35,
   74,   58,   59,   60,   61,   62,   48,   57,   56,    9,
   10,   11,   12,   13,   14,   15,    1,   16,   17,    4,
    6,   49,   50,   49,   50,   36,   82,    5,    6,   77,
    9,   10,   11,   12,   13,   14,   15,   19,   16,   17,
   31,   32,   18,   49,   49,   49,   49,   49,   49,   49,
   37,   49,   49,   38,   90,   49,   39,   42,   19,   42,
   50,   50,   50,   50,   50,   50,   50,   40,   50,   50,
    6,   49,   50,   78,   80,    6,   41,   79,   81,   43,
   58,   59,   60,   61,   62,   86,   88,   44,   50,   87,
   89,   45,   46,   92,    9,   71,   72,   93,   58,   59,
   60,   61,   62,   64,   65,   66,   67,   68,   69,   73,
   83,   84,   85,   91,    1,    6,   76,    0,   17,
};
static const YYINT yycheck[] = {                         20,
   31,   38,  257,  270,  257,  272,  257,  267,  259,  260,
  272,  273,  274,  275,  276,  277,  271,   48,   39,  257,
  258,  259,  260,  261,  262,  263,  258,  265,  266,  271,
  268,  286,  287,  286,  287,  286,   73,  272,  268,   70,
  257,  258,  259,  260,  261,  262,  263,  285,  265,  266,
  284,  257,  269,  257,  258,  259,  260,  261,  262,  263,
  271,  265,  266,  271,   85,  269,  271,  270,  285,  272,
  257,  258,  259,  260,  261,  262,  263,  286,  265,  266,
  264,  285,  269,   71,   72,  269,  257,   71,   72,  270,
  273,  274,  275,  276,  277,   83,   84,  270,  285,   83,
   84,  270,  270,   91,  257,  272,  272,   91,  273,  274,
  275,  276,  277,  278,  279,  280,  281,  282,  283,  270,
  264,  264,  270,  272,    0,    0,   63,   -1,  270,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 288
#define YYUNDFTOKEN 309
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ID","INT","CHAR","FLOAT","CIN",
"COUT","IF","ELSE","WHILE","FOR","MAIN","OBRACE","EBRACE","SEMICOLON","OPAR",
"EPAR","PLUS","MINUS","MULT","DIV","MOD","GT","LT","GE","LE","EQ","NOTEQ",
"ASSIGN","RETURN","INTEGER","REAL","TEXT",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program :",
"program : INT MAIN OPAR EPAR compound_stmt",
"type : INT",
"type : FLOAT",
"type : CHAR",
"compound_stmt :",
"compound_stmt : OBRACE stmt_list EBRACE",
"stmt_list :",
"stmt_list : stmt_list stmt",
"stmt : decl SEMICOLON",
"stmt : assign SEMICOLON",
"stmt : return SEMICOLON",
"stmt : iostmt SEMICOLON",
"stmt : loop",
"stmt : if_stmt",
"stmt : for",
"decl : type ID",
"decl : type assign",
"assign : ID ASSIGN expr",
"op : PLUS",
"op : MINUS",
"op : MULT",
"op : DIV",
"op : MOD",
"constant : INTEGER",
"constant : REAL",
"expr : ID",
"expr : constant",
"expr : expr op ID",
"expr : expr op constant",
"expr : OPAR expr EPAR",
"return : RETURN INTEGER",
"iostmt : input",
"iostmt : output",
"input : CIN ID",
"output : COUT ID",
"output : COUT INTEGER",
"output : COUT FLOAT",
"output : COUT CHAR",
"loop : WHILE OPAR condition EPAR compound_stmt",
"loop : WHILE OPAR condition EPAR stmt",
"condition : expr relation_op expr",
"relation_op : EQ",
"relation_op : NOTEQ",
"relation_op : LT",
"relation_op : LE",
"relation_op : GT",
"relation_op : GE",
"if_stmt : IF OPAR condition EPAR compound_stmt",
"if_stmt : IF OPAR condition EPAR stmt",
"if_stmt : IF OPAR condition EPAR compound_stmt ELSE compound_stmt",
"if_stmt : IF OPAR condition EPAR compound_stmt ELSE stmt",
"if_stmt : IF OPAR condition EPAR stmt ELSE compound_stmt",
"if_stmt : IF OPAR condition EPAR stmt ELSE stmt",
"for : FOR OPAR assign SEMICOLON condition SEMICOLON assign EPAR stmt",
"for : FOR OPAR assign SEMICOLON condition SEMICOLON assign EPAR compound_stmt",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 152 "lab4.y"


#line 344 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 36:
#line 110 "lab4.y"
	{
      printf("cout id\n");
    }
break;
case 37:
#line 113 "lab4.y"
	{
      printf("cout int\n");
    }
break;
case 38:
#line 116 "lab4.y"
	{
      printf("cout float\n");
    }
break;
case 39:
#line 119 "lab4.y"
	{
      printf("cout char\n");
    }
break;
#line 570 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
