
/*  A Bison parser, made from cx.y
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define	SYM_int	257
#define	SYM_bool	258
#define	SYM_array	259
#define	SYM_if	260
#define	SYM_else	261
#define	SYM_read	262
#define	SYM_write	263
#define	SYM_null	264
#define	SYM_true	265
#define	SYM_false	266
#define	SYM_while	267
#define	SYM_odd	268
#define	LP	269
#define	RP	270
#define	LC	271
#define	RC	272
#define	SEMICOLON	273
#define	COMMA	274
#define	LOG_not	275
#define	LOG_and	276
#define	LOG_or	277
#define	LOG_xor	278
#define	ASSIGN	279
#define	EQ	280
#define	NE	281
#define	GT	282
#define	GE	283
#define	LT	284
#define	LE	285
#define	ADD	286
#define	SUB	287
#define	MUL	288
#define	DIV	289
#define	MOD	290
#define	INCRE	291
#define	DECRE	292
#define	LF	293
#define	RF	294
#define	SYM_number	295
#define	SYM_ident	296
#define	IFX	297

#line 1 "cx.y"

	#include <stdio.h>
	#include <stdlib.h>
	#include "malloc.h"
	#include "code.h"

#line 8 "cx.y"
typedef union {
char *ident;
int number;
} YYSTYPE;
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		149
#define	YYFLAG		-32768
#define	YYNTBASE	44

#define YYTRANSLATE(x) ((unsigned)(x) <= 297 ? yytranslate[x] : 88)

static const char yytranslate[] = {     0,
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
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     4,     5,     6,     7,    15,    16,    19,    20,
    25,    26,    31,    32,    33,    42,    43,    46,    47,    48,
    55,    62,    63,    64,    75,    76,    77,    78,    88,    92,
    96,    97,   105,   107,   108,   109,   115,   116,   117,   123,
   124,   125,   135,   137,   139,   141,   145,   149,   151,   155,
   159,   161,   163,   165,   169,   174,   178,   182,   184,   188,
   190,   192,   194,   196,   199,   203,   205,   206,   211,   212,
   217,   218,   223,   224,   229,   230,   235,   236,   241,   246,
   247
};

static const short yyrhs[] = {    -1,
    45,    46,     0,     0,     0,     0,    47,    17,    50,    48,
    56,    49,    18,     0,     0,    50,    51,     0,     0,     3,
    42,    52,    19,     0,     0,     4,    42,    53,    19,     0,
     0,     0,     5,    42,    54,    39,    41,    40,    55,    19,
     0,     0,    56,    57,     0,     0,     0,    42,    58,    25,
    72,    59,    19,     0,     6,    15,    73,    16,    57,    19,
     0,     0,     0,     6,    15,    73,    16,    57,    60,     7,
    57,    61,    19,     0,     0,     0,     0,    13,    62,    15,
    77,    16,    63,    57,    64,    19,     0,     9,    74,    19,
     0,     8,    42,    19,     0,     0,     8,    42,    65,    39,
    75,    40,    19,     0,    46,     0,     0,     0,    42,    66,
    37,    67,    19,     0,     0,     0,    42,    68,    38,    69,
    19,     0,     0,     0,    42,    70,    39,    74,    40,    25,
    74,    71,    19,     0,    74,     0,    77,     0,    77,     0,
    75,    32,    75,     0,    75,    33,    75,     0,    75,     0,
    76,    34,    76,     0,    76,    35,    76,     0,    76,     0,
    42,     0,    41,     0,    15,    74,    16,     0,    42,    39,
    74,    40,     0,    77,    23,    78,     0,    77,    24,    78,
     0,    78,     0,    78,    22,    79,     0,    79,     0,    42,
     0,    11,     0,    12,     0,    21,    79,     0,    15,    77,
    16,     0,    80,     0,     0,    42,    81,    30,    74,     0,
     0,    42,    82,    31,    74,     0,     0,    42,    83,    28,
    74,     0,     0,    42,    84,    29,    74,     0,     0,    42,
    85,    26,    74,     0,     0,    42,    86,    27,    74,     0,
    14,    15,    76,    16,     0,     0,    42,    87,    36,    74,
     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    25,    28,    30,    43,    52,    57,    60,    61,    65,    70,
    70,    75,    75,    77,    81,    84,    85,    89,   104,   113,
   113,   117,   122,   127,   127,   131,   136,   141,   141,   143,
   156,   171,   180,   186,   203,   205,   205,   222,   224,   224,
   239,   248,   251,   252,   255,   262,   264,   266,   270,   272,
   274,   278,   291,   301,   302,   322,   324,   326,   330,   332,
   336,   347,   349,   351,   353,   354,   358,   370,   372,   384,
   386,   398,   400,   412,   414,   426,   428,   440,   442,   443,
   455
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","SYM_int",
"SYM_bool","SYM_array","SYM_if","SYM_else","SYM_read","SYM_write","SYM_null",
"SYM_true","SYM_false","SYM_while","SYM_odd","LP","RP","LC","RC","SEMICOLON",
"COMMA","LOG_not","LOG_and","LOG_or","LOG_xor","ASSIGN","EQ","NE","GT","GE",
"LT","LE","ADD","SUB","MUL","DIV","MOD","INCRE","DECRE","LF","RF","SYM_number",
"SYM_ident","IFX","program","@1","block","@2","@3","@4","decls","decl","@5",
"@6","@7","@8","stmts","stmt","@9","@10","@11","@12","@13","@14","@15","@16",
"@17","@18","@19","@20","@21","@22","expression","ifexpr","aexpr","aterm","afactor",
"bexpr","bterm","bfactor","rel","@23","@24","@25","@26","@27","@28","@29", NULL
};
#endif

static const short yyr1[] = {     0,
    45,    44,    47,    48,    49,    46,    50,    50,    52,    51,
    53,    51,    54,    55,    51,    56,    56,    58,    59,    57,
    57,    60,    61,    57,    62,    63,    64,    57,    57,    57,
    65,    57,    57,    66,    67,    57,    68,    69,    57,    70,
    71,    57,    72,    72,    73,    74,    74,    74,    75,    75,
    75,    76,    76,    76,    76,    77,    77,    77,    78,    78,
    79,    79,    79,    79,    79,    79,    81,    80,    82,    80,
    83,    80,    84,    80,    85,    80,    86,    80,    80,    87,
    80
};

static const short yyr2[] = {     0,
     0,     2,     0,     0,     0,     7,     0,     2,     0,     4,
     0,     4,     0,     0,     8,     0,     2,     0,     0,     6,
     6,     0,     0,    10,     0,     0,     0,     9,     3,     3,
     0,     7,     1,     0,     0,     5,     0,     0,     5,     0,
     0,     9,     1,     1,     1,     3,     3,     1,     3,     3,
     1,     1,     1,     3,     4,     3,     3,     1,     3,     1,
     1,     1,     1,     2,     3,     1,     0,     4,     0,     4,
     0,     4,     0,     4,     0,     4,     0,     4,     4,     0,
     4
};

static const short yydefact[] = {     1,
     3,     2,     0,     7,     4,     0,     0,     0,    16,     8,
     9,    11,    13,     3,     0,     0,     0,     0,     0,     0,
    25,    18,    33,     0,    17,    10,    12,     0,     0,    31,
     0,    53,    52,     0,    48,    51,     0,     0,     0,     0,
     0,     6,     0,    62,    63,     0,     0,     0,    61,     0,
    45,    58,    60,    66,    30,     0,     0,     0,    29,     0,
     0,     0,     0,     0,     0,    35,    38,     0,    14,     0,
     0,    64,     0,     0,     0,     0,     0,     0,     0,     3,
     0,     0,     0,     0,    54,     0,    46,    47,    49,    50,
     0,     0,    52,    19,    43,    44,     0,     0,     0,     0,
     0,    65,     0,     0,     0,     0,     0,     0,     0,    22,
    56,    57,    59,     0,    55,    26,     0,    36,    39,     0,
    15,    79,    68,    70,    72,    74,    76,    78,    81,    21,
     0,     0,     3,    20,     0,     3,    32,    27,    41,    23,
     0,     0,     0,    28,    42,    24,     0,     0,     0
};

static const short yydefgoto[] = {   147,
     1,    23,     3,     9,    24,     5,    10,    15,    16,    17,
   100,    14,    25,    38,   117,   131,   143,    37,   133,   141,
    56,    39,    97,    40,    98,    41,   142,    94,    50,    57,
    35,    36,    71,    52,    53,    54,    73,    74,    75,    76,
    77,    78,    79
};

static const short yypact[] = {-32768,
-32768,-32768,    -5,-32768,    74,   -21,     4,    11,-32768,-32768,
-32768,-32768,-32768,    -3,     7,    37,    22,    81,    55,   -11,
-32768,    43,-32768,    80,-32768,-32768,-32768,    58,    13,    82,
   -11,-32768,    63,    84,   -16,     1,    89,    83,    68,    69,
    67,-32768,    70,-32768,-32768,    94,    13,    13,    64,    95,
    47,    90,-32768,-32768,-32768,    75,    97,   -11,-32768,   -11,
   -11,   -11,   -11,    13,     8,-32768,-32768,   -11,-32768,   -11,
    17,-32768,    86,    87,    91,    88,    96,    93,    85,     5,
    13,    13,    13,   -11,-32768,    92,-32768,-32768,-32768,-32768,
    28,     8,    36,-32768,-32768,    47,   104,   105,    98,   106,
   110,-32768,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   108,
    90,    90,-32768,    99,-32768,-32768,   109,-32768,-32768,   111,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   122,   112,     5,-32768,   -11,     5,-32768,-32768,-32768,-32768,
   114,   115,   116,-32768,-32768,-32768,   130,   137,-32768
};

static const short yypgoto[] = {-32768,
-32768,   139,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   -79,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   -20,
   -52,     6,   -22,    -8,   -46,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768
};


#define	YYLAST		140


static const short yytable[] = {    34,
   110,    72,    18,    31,    19,    20,    51,    87,    88,    21,
    18,     4,    19,    20,    -5,    60,    61,    21,    44,    45,
    11,    46,    92,    44,    45,    26,    46,    47,    48,    32,
    33,   114,   102,    48,    62,    63,   113,    86,    22,    81,
    82,    91,    96,   116,    95,    12,    22,    99,    32,    93,
    81,    82,    13,   138,    49,    27,   140,   -61,   -61,   -61,
    28,   -75,   -77,   -71,   -73,   -67,   -69,    89,    90,    81,
    82,   -80,   111,   112,    58,   101,     6,     7,     8,   -34,
   -37,   -40,   123,   124,   125,   126,   127,   128,   129,   -75,
   -77,   -71,   -73,   -67,   -69,    29,    30,    42,    43,   -80,
    55,    58,    59,    64,    66,    68,    67,    65,    70,    69,
    80,    83,    85,    84,   139,   103,   106,   104,   105,   108,
   109,   107,   118,   119,   121,   122,   130,   134,   136,   148,
   137,   115,   144,   145,   146,   135,   149,   120,   132,     2
};

static const short yycheck[] = {    20,
    80,    48,     6,    15,     8,     9,    29,    60,    61,    13,
     6,    17,     8,     9,    18,    32,    33,    13,    11,    12,
    42,    14,    15,    11,    12,    19,    14,    15,    21,    41,
    42,    84,    16,    21,    34,    35,    83,    58,    42,    23,
    24,    64,    65,    16,    65,    42,    42,    68,    41,    42,
    23,    24,    42,   133,    42,    19,   136,    22,    23,    24,
    39,    26,    27,    28,    29,    30,    31,    62,    63,    23,
    24,    36,    81,    82,    39,    70,     3,     4,     5,    37,
    38,    39,   103,   104,   105,   106,   107,   108,   109,    26,
    27,    28,    29,    30,    31,    15,    42,    18,    41,    36,
    19,    39,    19,    15,    37,    39,    38,    25,    15,    40,
    16,    22,    16,    39,   135,    30,    29,    31,    28,    27,
    36,    26,    19,    19,    19,    16,    19,    19,     7,     0,
    19,    40,    19,    19,    19,    25,     0,    40,    40,     1
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

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
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 192 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 26 "cx.y"
{lev--;;
    break;}
case 3:
#line 31 "cx.y"
{ // px0 block
		strcpy(id,"pro");
		enter(VALUE_INT);
		lev++;
		dx=3;
		levelReg[lev].tx0=tx;
		table[tx].adr=cx;
		gen(jmp,0,1);
		if(lev>LEVMAX)
			error(32);
	;
    break;}
case 4:
#line 44 "cx.y"
{ // pl0 declarelist
		code[table[levelReg[lev].tx0].adr].a=cx;
		table[levelReg[lev].tx0].adr=cx;
		table[levelReg[lev].tx0].size=dx;
		levelReg[lev].cx0=cx;
		gen(ini,0,dx);
	;
    break;}
case 5:
#line 52 "cx.y"
{
		gen(opr,0,0);
		printf("\n");
	;
    break;}
case 9:
#line 66 "cx.y"
{
		strcpy(id,yyvsp[0].ident);
		enter(VALUE_INT);
	;
    break;}
case 11:
#line 71 "cx.y"
{
		strcpy(id,yyvsp[0].ident);
		enter(VALUE_BOOL);
	;
    break;}
case 13:
#line 75 "cx.y"
{
		strcpy(id,yyvsp[0].ident);
	;
    break;}
case 14:
#line 77 "cx.y"
{
		num=yyvsp[-1].number;
		enter(VALUE_ARRAY);
	;
    break;}
case 18:
#line 90 "cx.y"
{
		int i;
		strcpy(id,yyvsp[0].ident);
		i=position(id);
		if(i==0){
			error(0);
		}else{
			if(table[i].kind!=VALUE_INT&&table[i].kind!=VALUE_BOOL){
				error(12);
				i=0;
				}
			}
			yyval.number=i;
	;
    break;}
case 19:
#line 105 "cx.y"
{
		int i,inum;
		if(yyvsp[-2].number!=0){
			i=yyvsp[-2].number;
			gen(sto,lev-table[i].level,table[i].adr);
		}
	;
    break;}
case 21:
#line 114 "cx.y"
{
		code[yyvsp[-3].number].a=cx;
	;
    break;}
case 22:
#line 117 "cx.y"
{
		yyval.number=cx;
		code[yyvsp[-2].number].a=cx+1;
		gen(jmp,0,0);
	;
    break;}
case 23:
#line 123 "cx.y"
{
		code[yyvsp[-2].number].a=cx;
	;
    break;}
case 25:
#line 128 "cx.y"
{
		yyval.number=cx;
	;
    break;}
case 26:
#line 132 "cx.y"
{
		yyval.number=cx;
		gen(jpc,0,0);
	;
    break;}
case 27:
#line 136 "cx.y"
{
		gen(jmp,0,yyvsp[-5].number);
		code[yyvsp[-1].number].a=cx;
	;
    break;}
case 29:
#line 142 "cx.y"
{gen(opr,0,14);;
    break;}
case 30:
#line 144 "cx.y"
{
		int i;
		strcpy(id,yyvsp[-1].ident);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(opr,0,16);
			gen(sto,lev-table[i].level,table[i].adr);
		}
	;
    break;}
case 31:
#line 157 "cx.y"
{
		int i;
		strcpy(id,yyvsp[0].ident);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			if(table[i].kind!=VALUE_ARRAY){
				error(12);
				i=0;
			}
		}
		yyval.number=i;
	;
    break;}
case 32:
#line 172 "cx.y"
{
		int i;
		if(yyvsp[-4].number!=0){
			i = yyvsp[-4].number;
			gen(opr,0,16);
			gen(ast,lev-table[i].level,table[i].adr);
		}
	;
    break;}
case 33:
#line 181 "cx.y"
{
		tx = levelReg[lev].tx0 - 1;
		lev --;
		dx = levelReg[lev].dx0;
	;
    break;}
case 34:
#line 187 "cx.y"
{
		int i;
		int fl = 0;
		strcpy(id,yyvsp[0].ident);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			if(table[i].kind!=VALUE_INT){
				error(12);
				i=0;
			}
			else
				gen(lod,lev-table[i].level,table[i].adr);
		}
	;
    break;}
case 35:
#line 203 "cx.y"
{gen(opr,0,23);;
    break;}
case 37:
#line 206 "cx.y"
{
		int i;
		int fl = 0;
		strcpy(id,yyvsp[0].ident);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			if(table[i].kind!=VALUE_INT){
				error(12);
				i=0;
			}
			else
				gen(lod,lev-table[i].level,table[i].adr);
		}
	;
    break;}
case 38:
#line 222 "cx.y"
{gen(opr,0,24);;
    break;}
case 40:
#line 225 "cx.y"
{
		int i;
		strcpy(id,yyvsp[0].ident);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			if(table[i].kind!=VALUE_ARRAY){
				error(12);
				i=0;
			}
		}
		yyval.number=i;
	;
    break;}
case 41:
#line 240 "cx.y"
{
		int i;
		if(yyvsp[-5].number!=0){
			i = yyvsp[-5].number;
			gen(ast,lev-table[i].level,table[i].adr);
		}
	;
    break;}
case 45:
#line 256 "cx.y"
{
		yyval.number=cx;
		gen(jpc,0,0);
	;
    break;}
case 46:
#line 263 "cx.y"
{gen(opr,0,2);;
    break;}
case 47:
#line 265 "cx.y"
{gen(opr,0,3);;
    break;}
case 49:
#line 271 "cx.y"
{gen(opr,0,4);;
    break;}
case 50:
#line 273 "cx.y"
{gen(opr,0,5);;
    break;}
case 52:
#line 279 "cx.y"
{
		int i;
		int fl = 0;
		strcpy(id,yyvsp[0].ident);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	;
    break;}
case 53:
#line 292 "cx.y"
{
		int num;
		num=yyvsp[0].number;
		if(num>AMAX){
			error(31);
			num=0;
		}
		gen(lit,0,num);
	;
    break;}
case 55:
#line 303 "cx.y"
{
		int i;
		strcpy(id,yyvsp[-3].ident);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			if(table[i].kind != VALUE_ARRAY){
				error(12);
				i=0;
			}
			else{
				gen(ald,lev-table[i].level,table[i].adr);
			}
		}		
	;
    break;}
case 56:
#line 323 "cx.y"
{gen(opr,0,18);;
    break;}
case 57:
#line 325 "cx.y"
{gen(opr,0,7);;
    break;}
case 59:
#line 331 "cx.y"
{gen(opr,0,19);;
    break;}
case 61:
#line 337 "cx.y"
{
		int i;
		strcpy(id,yyvsp[0].ident);
		i=position(id);
		if(i==0)
			error(35);
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	;
    break;}
case 62:
#line 348 "cx.y"
{gen(opr,0,20);;
    break;}
case 63:
#line 350 "cx.y"
{gen(opr,0,21);;
    break;}
case 64:
#line 352 "cx.y"
{gen(opr,0,22);;
    break;}
case 67:
#line 359 "cx.y"
{
		int i;
		int fl = 0;
		strcpy(id,yyvsp[0].ident);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	;
    break;}
case 68:
#line 371 "cx.y"
{gen(opr,0,10);;
    break;}
case 69:
#line 373 "cx.y"
{
		int i;
		int fl = 0;
		strcpy(id,yyvsp[0].ident);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	;
    break;}
case 70:
#line 385 "cx.y"
{gen(opr,0,13);;
    break;}
case 71:
#line 387 "cx.y"
{
		int i;
		int fl = 0;
		strcpy(id,yyvsp[0].ident);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	;
    break;}
case 72:
#line 399 "cx.y"
{gen(opr,0,12);;
    break;}
case 73:
#line 401 "cx.y"
{
		int i;
		int fl = 0;
		strcpy(id,yyvsp[0].ident);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	;
    break;}
case 74:
#line 413 "cx.y"
{gen(opr,0,11);;
    break;}
case 75:
#line 415 "cx.y"
{
		int i;
		int fl = 0;
		strcpy(id,yyvsp[0].ident);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	;
    break;}
case 76:
#line 427 "cx.y"
{gen(opr,0,8);;
    break;}
case 77:
#line 429 "cx.y"
{
		int i;
		int fl = 0;
		strcpy(id,yyvsp[0].ident);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	;
    break;}
case 78:
#line 441 "cx.y"
{gen(opr,0,9);;
    break;}
case 79:
#line 442 "cx.y"
{gen(opr,0,6);;
    break;}
case 80:
#line 444 "cx.y"
{
		int i;
		int fl = 0;
		strcpy(id,yyvsp[0].ident);
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	;
    break;}
case 81:
#line 456 "cx.y"
{gen(opr,0,15);;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 487 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 459 "cx.y"

int yyerror(char const *str){
	extern char *yytext;
	fprintf(stderr, "parser error near %s\n", yytext);
	return 0;
}

int main()
{
	
	printf("Please input the filename:\n");
	scanf("%s",&fname);
	if((fin=fopen(fname,"r"))==NULL){
		printf("Cann't open file according to given filename\n");
		exit(0);
	}
	redirectInput(fin);
	listswitch=true;
	err=0;

	yyparse();

	if(err==0){
		listcode();
		interpret();
		//stack();
	}
	else{
		printf("%d errors in cx program\n",err);
	}
	//fclose(fin);
	//getchar();
	return 0;
}