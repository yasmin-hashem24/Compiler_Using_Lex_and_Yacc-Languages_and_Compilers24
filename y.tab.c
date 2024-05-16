/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison implementation for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "Compiler.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <string.h>
    #include <stdarg.h>
    #include "node.h"
    #include "symbolTable/symbolTable.h"
    #include "symbolTable/symbolEntry.h"
    #include "Errors/error.h"

    void yyerror(const char *s);
    bool handleOperandsExpressionInDeclaration(const nodeType *node1, const nodeType *node2, const nodeType *node4, bool mainCall, int isConst);
    bool handleConNodeExpressionInDeclaration(const nodeType *node1, const nodeType *node2, const nodeType *node4, bool mainCall, int isConst);
    bool handleIdNodeExpressionInDeclaration(const nodeType *node1, const nodeType *node2, const nodeType *node4, bool mainCall, int isConst);
    bool handleReturnTypeCheck(const nodeType *node1, const nodeType *node10);
    bool handleOperNodeReturnTypeCheck(const nodeType *node1, const nodeType *node10);
    void getArgList(nodeType *node, int *argCount, char*** argList);

    int yylex();
    extern FILE *yyin;
    FILE *syntaxErrorsFile;
    FILE *semanticErrorsFile;
    FILE *warningFile;
    FILE *symbolTableFile;
    extern int currentLineNumber;


    int currentScope = -1;
    SymbolTable *globalTable;
    SymbolTable *currTable;
    SymbolTable *prevTable;
    char** argList;  // List of arguments of the function declaration

    const char *conEnumToString(conEnum enumValue);


#line 109 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    INTEGER = 258,                 /* INTEGER  */
    FLOAT = 259,                   /* FLOAT  */
    BOOL = 260,                    /* BOOL  */
    CHAR = 261,                    /* CHAR  */
    STRING = 262,                  /* STRING  */
    IDENTIFIER = 263,              /* IDENTIFIER  */
    BOOL_FALSE = 264,              /* BOOL_FALSE  */
    BOOL_TRUE = 265,               /* BOOL_TRUE  */
    INT_TYPE = 266,                /* INT_TYPE  */
    FLOAT_TYPE = 267,              /* FLOAT_TYPE  */
    BOOL_TYPE = 268,               /* BOOL_TYPE  */
    CHAR_TYPE = 269,               /* CHAR_TYPE  */
    STRING_TYPE = 270,             /* STRING_TYPE  */
    VOID_TYPE = 271,               /* VOID_TYPE  */
    LBRACE = 272,                  /* LBRACE  */
    RBRACE = 273,                  /* RBRACE  */
    EQ = 274,                      /* EQ  */
    NEQ = 275,                     /* NEQ  */
    LT = 276,                      /* LT  */
    GT = 277,                      /* GT  */
    LTE = 278,                     /* LTE  */
    GTE = 279,                     /* GTE  */
    AND = 280,                     /* AND  */
    OR = 281,                      /* OR  */
    CONST = 282,                   /* CONST  */
    FUNC = 283,                    /* FUNC  */
    MAIN = 284,                    /* MAIN  */
    INCLUDE = 285,                 /* INCLUDE  */
    DEFINE = 286,                  /* DEFINE  */
    VAR = 287,                     /* VAR  */
    IF = 288,                      /* IF  */
    ELSE = 289,                    /* ELSE  */
    WHILE = 290,                   /* WHILE  */
    DO = 291,                      /* DO  */
    FOR = 292,                     /* FOR  */
    SWITCH = 293,                  /* SWITCH  */
    CASE = 294,                    /* CASE  */
    DEFAULT = 295,                 /* DEFAULT  */
    BREAK = 296,                   /* BREAK  */
    RETURN = 297,                  /* RETURN  */
    EXIT = 298,                    /* EXIT  */
    CONTINUE = 299,                /* CONTINUE  */
    PRINT = 300,                   /* PRINT  */
    ENUM = 301,                    /* ENUM  */
    CALL = 302,                    /* CALL  */
    IFX = 303,                     /* IFX  */
    UMINUS = 304,                  /* UMINUS  */
    NOT = 305                      /* NOT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INTEGER 258
#define FLOAT 259
#define BOOL 260
#define CHAR 261
#define STRING 262
#define IDENTIFIER 263
#define BOOL_FALSE 264
#define BOOL_TRUE 265
#define INT_TYPE 266
#define FLOAT_TYPE 267
#define BOOL_TYPE 268
#define CHAR_TYPE 269
#define STRING_TYPE 270
#define VOID_TYPE 271
#define LBRACE 272
#define RBRACE 273
#define EQ 274
#define NEQ 275
#define LT 276
#define GT 277
#define LTE 278
#define GTE 279
#define AND 280
#define OR 281
#define CONST 282
#define FUNC 283
#define MAIN 284
#define INCLUDE 285
#define DEFINE 286
#define VAR 287
#define IF 288
#define ELSE 289
#define WHILE 290
#define DO 291
#define FOR 292
#define SWITCH 293
#define CASE 294
#define DEFAULT 295
#define BREAK 296
#define RETURN 297
#define EXIT 298
#define CONTINUE 299
#define PRINT 300
#define ENUM 301
#define CALL 302
#define IFX 303
#define UMINUS 304
#define NOT 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 40 "Compiler.y"

    int iVal;
    float fVal;
    bool bVal;
    char cVal;
    char *sVal;
    nodeType *nPtr;

#line 271 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INTEGER = 3,                    /* INTEGER  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_BOOL = 5,                       /* BOOL  */
  YYSYMBOL_CHAR = 6,                       /* CHAR  */
  YYSYMBOL_STRING = 7,                     /* STRING  */
  YYSYMBOL_IDENTIFIER = 8,                 /* IDENTIFIER  */
  YYSYMBOL_BOOL_FALSE = 9,                 /* BOOL_FALSE  */
  YYSYMBOL_BOOL_TRUE = 10,                 /* BOOL_TRUE  */
  YYSYMBOL_INT_TYPE = 11,                  /* INT_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 12,                /* FLOAT_TYPE  */
  YYSYMBOL_BOOL_TYPE = 13,                 /* BOOL_TYPE  */
  YYSYMBOL_CHAR_TYPE = 14,                 /* CHAR_TYPE  */
  YYSYMBOL_STRING_TYPE = 15,               /* STRING_TYPE  */
  YYSYMBOL_VOID_TYPE = 16,                 /* VOID_TYPE  */
  YYSYMBOL_LBRACE = 17,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 18,                    /* RBRACE  */
  YYSYMBOL_EQ = 19,                        /* EQ  */
  YYSYMBOL_NEQ = 20,                       /* NEQ  */
  YYSYMBOL_LT = 21,                        /* LT  */
  YYSYMBOL_GT = 22,                        /* GT  */
  YYSYMBOL_LTE = 23,                       /* LTE  */
  YYSYMBOL_GTE = 24,                       /* GTE  */
  YYSYMBOL_AND = 25,                       /* AND  */
  YYSYMBOL_OR = 26,                        /* OR  */
  YYSYMBOL_CONST = 27,                     /* CONST  */
  YYSYMBOL_FUNC = 28,                      /* FUNC  */
  YYSYMBOL_MAIN = 29,                      /* MAIN  */
  YYSYMBOL_INCLUDE = 30,                   /* INCLUDE  */
  YYSYMBOL_DEFINE = 31,                    /* DEFINE  */
  YYSYMBOL_VAR = 32,                       /* VAR  */
  YYSYMBOL_IF = 33,                        /* IF  */
  YYSYMBOL_ELSE = 34,                      /* ELSE  */
  YYSYMBOL_WHILE = 35,                     /* WHILE  */
  YYSYMBOL_DO = 36,                        /* DO  */
  YYSYMBOL_FOR = 37,                       /* FOR  */
  YYSYMBOL_SWITCH = 38,                    /* SWITCH  */
  YYSYMBOL_CASE = 39,                      /* CASE  */
  YYSYMBOL_DEFAULT = 40,                   /* DEFAULT  */
  YYSYMBOL_BREAK = 41,                     /* BREAK  */
  YYSYMBOL_RETURN = 42,                    /* RETURN  */
  YYSYMBOL_EXIT = 43,                      /* EXIT  */
  YYSYMBOL_CONTINUE = 44,                  /* CONTINUE  */
  YYSYMBOL_PRINT = 45,                     /* PRINT  */
  YYSYMBOL_ENUM = 46,                      /* ENUM  */
  YYSYMBOL_CALL = 47,                      /* CALL  */
  YYSYMBOL_IFX = 48,                       /* IFX  */
  YYSYMBOL_49_ = 49,                       /* '+'  */
  YYSYMBOL_50_ = 50,                       /* '-'  */
  YYSYMBOL_51_ = 51,                       /* '*'  */
  YYSYMBOL_52_ = 52,                       /* '/'  */
  YYSYMBOL_53_ = 53,                       /* '%'  */
  YYSYMBOL_UMINUS = 54,                    /* UMINUS  */
  YYSYMBOL_NOT = 55,                       /* NOT  */
  YYSYMBOL_56_ = 56,                       /* '('  */
  YYSYMBOL_57_ = 57,                       /* ')'  */
  YYSYMBOL_58_ = 58,                       /* ';'  */
  YYSYMBOL_59_ = 59,                       /* ':'  */
  YYSYMBOL_60_ = 60,                       /* ','  */
  YYSYMBOL_61_ = 61,                       /* '='  */
  YYSYMBOL_62_ = 62,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 63,                  /* $accept  */
  YYSYMBOL_program = 64,                   /* program  */
  YYSYMBOL_statement_list = 65,            /* statement_list  */
  YYSYMBOL_statement = 66,                 /* statement  */
  YYSYMBOL_print_statement = 67,           /* print_statement  */
  YYSYMBOL_if_condition_statement = 68,    /* if_condition_statement  */
  YYSYMBOL_switch_statement = 69,          /* switch_statement  */
  YYSYMBOL_case_list = 70,                 /* case_list  */
  YYSYMBOL_case_default = 71,              /* case_default  */
  YYSYMBOL_while_loop = 72,                /* while_loop  */
  YYSYMBOL_do_while_loop = 73,             /* do_while_loop  */
  YYSYMBOL_for_loop = 74,                  /* for_loop  */
  YYSYMBOL_function_declaration = 75,      /* function_declaration  */
  YYSYMBOL_function_call = 76,             /* function_call  */
  YYSYMBOL_function_call_expression = 77,  /* function_call_expression  */
  YYSYMBOL_arg_list = 78,                  /* arg_list  */
  YYSYMBOL_arg_list_call = 79,             /* arg_list_call  */
  YYSYMBOL_declaration_assignment = 80,    /* declaration_assignment  */
  YYSYMBOL_declaration_assignment_loop = 81, /* declaration_assignment_loop  */
  YYSYMBOL_declaration = 82,               /* declaration  */
  YYSYMBOL_assignment = 83,                /* assignment  */
  YYSYMBOL_enum_declaration = 84,          /* enum_declaration  */
  YYSYMBOL_enum_list = 85,                 /* enum_list  */
  YYSYMBOL_expression = 86,                /* expression  */
  YYSYMBOL_binary_expression = 87,         /* binary_expression  */
  YYSYMBOL_unary_expression = 88,          /* unary_expression  */
  YYSYMBOL_type = 89,                      /* type  */
  YYSYMBOL_value = 90,                     /* value  */
  YYSYMBOL_start_scope = 91,               /* start_scope  */
  YYSYMBOL_end_scope = 92                  /* end_scope  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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
#define YYLAST   1194

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  225

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,     2,     2,     2,    53,     2,     2,
      56,    57,    51,    49,    60,    50,     2,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    59,    58,
       2,    61,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    54,    55
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    84,    84,    89,    90,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   109,   112,   113,   115,
     118,   119,   122,   127,   136,   139,   143,   169,   184,   210,
     213,   216,   224,   232,   235,   236,   237,   244,   245,   248,
     249,   253,   267,   300,   331,   335,   400,   404,   405,   406,
     407,   412,   413,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     433,   434,   438,   439,   440,   441,   442,   445,   446,   447,
     448,   449,   450,   451,   454,   472
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INTEGER", "FLOAT",
  "BOOL", "CHAR", "STRING", "IDENTIFIER", "BOOL_FALSE", "BOOL_TRUE",
  "INT_TYPE", "FLOAT_TYPE", "BOOL_TYPE", "CHAR_TYPE", "STRING_TYPE",
  "VOID_TYPE", "LBRACE", "RBRACE", "EQ", "NEQ", "LT", "GT", "LTE", "GTE",
  "AND", "OR", "CONST", "FUNC", "MAIN", "INCLUDE", "DEFINE", "VAR", "IF",
  "ELSE", "WHILE", "DO", "FOR", "SWITCH", "CASE", "DEFAULT", "BREAK",
  "RETURN", "EXIT", "CONTINUE", "PRINT", "ENUM", "CALL", "IFX", "'+'",
  "'-'", "'*'", "'/'", "'%'", "UMINUS", "NOT", "'('", "')'", "';'", "':'",
  "','", "'='", "'!'", "$accept", "program", "statement_list", "statement",
  "print_statement", "if_condition_statement", "switch_statement",
  "case_list", "case_default", "while_loop", "do_while_loop", "for_loop",
  "function_declaration", "function_call", "function_call_expression",
  "arg_list", "arg_list_call", "declaration_assignment",
  "declaration_assignment_loop", "declaration", "assignment",
  "enum_declaration", "enum_list", "expression", "binary_expression",
  "unary_expression", "type", "value", "start_scope", "end_scope", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,    43,
      45,    42,    47,    37,   304,   305,    40,    41,    59,    58,
      44,    61,    33
};
#endif

#define YYPACT_NINF (-175)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-85)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -175,    12,   852,  -175,  -175,  -175,  -175,  -175,  -175,   -48,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,     7,   120,   -28,
     -25,    10,  -175,   -20,   -19,    27,   866,   866,   866,   852,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,   -17,   -15,  -175,  1106,  -175,  -175,    30,  -175,   866,
     866,  -175,    36,   866,   866,  -175,     0,   866,   866,     1,
       2,  -175,   992,  -175,  -175,  -175,  -175,   866,   866,   866,
     866,   866,   866,   866,   866,   866,   866,   866,   866,   866,
     -45,   -38,  1106,  1106,     4,   -13,  1031,  1040,   852,   113,
    1049,  1088,    -4,    45,   866,  -175,   190,   190,    -5,    -5,
      -5,    -5,    35,  -175,  1141,  1141,   370,   370,    74,   866,
       6,     5,   866,   120,   866,    61,    62,   192,    19,    77,
      28,  -175,  -175,    79,    72,    32,    94,    43,    -8,   -31,
    1106,   120,  -175,  1106,    48,    99,  1106,  -175,  -175,  -175,
     100,   866,    52,    75,  -175,  -175,   866,    57,   110,  -175,
      63,   105,    69,   852,   852,   104,   932,   866,    -7,  1106,
    -175,    80,   125,   852,   120,   252,   312,    89,   113,   910,
     866,    88,   130,   866,   372,   432,  -175,  -175,  -175,   866,
      92,   852,   921,   852,  -175,  1106,   866,   492,  -175,   116,
    -175,  1097,   134,   552,   852,   612,   972,   866,  -175,   136,
      97,   852,   102,   672,   103,   139,   982,  -175,  -175,   732,
    -175,   107,  -175,  -175,   144,   852,  -175,  -175,  -175,  -175,
     792,  -175,  -175,  -175,  -175
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      84,     0,     0,     1,    77,    78,    79,    80,    81,    68,
      83,    82,    72,    73,    74,    75,    76,     0,     0,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     2,
       3,     8,     9,    10,    11,    12,    13,    14,     7,    69,
       5,     0,     0,     6,    15,    51,    52,     0,    67,    36,
       0,    84,     0,     0,     0,    84,     0,     0,     0,     0,
      68,    70,     0,    71,     4,    37,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      41,     0,    35,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,    66,    58,    59,    60,    61,
      62,    63,    64,    65,    53,    54,    55,    56,    57,     0,
       0,    30,     0,    33,     0,     0,     0,     0,     0,     0,
       0,    39,    40,     0,     0,     0,     0,    49,     0,     0,
      42,    33,    29,    34,     0,     0,    43,    84,    84,    85,
       0,     0,    41,     0,    16,    44,     0,     0,     0,    30,
       0,     0,    32,     0,     0,     0,     0,     0,     0,    50,
      46,    47,     0,     0,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    85,    85,     0,
       0,     0,     0,     0,    19,    48,     0,     0,    85,    17,
      23,     0,     0,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    24,     0,
      21,     0,    22,    85,     0,     0,    85,    20,    28,    85,
       0,    25,    26,    85,    18
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -175,  -175,   -71,   -29,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -124,    78,  -175,     3,   -87,
     -84,  -175,  -175,    -3,  -175,  -175,   -12,  -175,   -21,  -174
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    29,    30,    31,    32,    33,   158,   172,    34,
      35,    36,    37,    38,    39,   134,    81,    40,   120,    41,
      42,    43,   128,    44,    45,    46,    47,    48,     2,   155
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      64,    56,   121,   189,   190,   122,    52,   150,    49,    92,
     147,   -84,     3,    50,   198,    51,   109,   117,    93,   111,
      73,    74,   112,    61,    62,    63,   149,    55,    53,   112,
      84,    54,   170,   171,    88,    59,    57,    58,    80,   218,
     176,    65,   221,    66,    85,   222,    82,    83,   114,   224,
      86,    87,   148,   127,    90,    91,    89,   126,    94,   110,
     113,    74,   131,   132,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   123,   137,   138,
      50,   121,   165,   166,   122,   140,   141,   142,    64,   143,
     144,    82,   175,    67,    68,    69,    70,    71,    72,    73,
      74,   135,   145,   187,   146,   151,   130,   152,    92,   133,
     193,   136,   195,   109,   157,   160,   153,   154,   161,   135,
     162,   118,   163,   203,    12,    13,    14,    15,    16,   164,
     209,    12,    13,    14,    15,    16,    64,    64,   156,   167,
      18,   173,   174,   159,   220,   179,    64,   183,   184,   192,
     199,   201,   135,   207,   169,   208,   123,   213,    64,   119,
     210,   212,   219,     0,    64,   217,    64,   182,     0,     0,
     185,   180,   129,     0,    64,     0,   191,     0,     0,     0,
      64,     0,     0,   196,     0,     0,   215,     0,     0,     0,
       0,    64,     0,     0,   206,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     0,
     139,    69,    70,    71,    72,    73,    74,     0,     0,    18,
       0,     0,     0,     0,     0,    19,     0,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,    24,    25,     0,
       0,     0,    26,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,    28,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     0,
     177,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,     0,    19,     0,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,    24,    25,     0,
       0,     0,    26,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,    28,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     0,
     178,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,     0,    19,     0,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,    24,    25,     0,
       0,     0,    26,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,    28,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    67,
      68,    69,    70,    71,    72,    73,    74,     0,     0,    18,
       0,     0,     0,     0,     0,    19,     0,    20,    21,    22,
      23,     0,     0,     0,   186,     0,     0,    24,    25,     0,
       0,     0,    26,    79,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,    28,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     0,
     188,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,     0,    19,     0,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,    24,    25,     0,
       0,     0,    26,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,    28,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,     0,    19,     0,    20,    21,    22,
      23,     0,     0,     0,   197,     0,     0,    24,    25,     0,
       0,     0,    26,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,    28,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,     0,    19,     0,    20,    21,    22,
      23,     0,     0,   202,     0,     0,     0,    24,    25,     0,
       0,     0,    26,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,    28,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,     0,    19,     0,    20,    21,    22,
      23,     0,     0,   204,     0,     0,     0,    24,    25,     0,
       0,     0,    26,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,    28,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,     0,    19,     0,    20,    21,    22,
      23,     0,     0,   211,     0,     0,     0,    24,    25,     0,
       0,     0,    26,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,    28,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     0,
     216,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,     0,    19,     0,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,    24,    25,     0,
       0,     0,    26,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,    28,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     0,
     223,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,     0,    19,     0,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,    24,    25,     0,
       0,     0,    26,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,    28,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     4,
       5,     6,     7,     8,    60,    10,    11,     0,     0,    18,
       0,     0,     0,     0,     0,    19,     0,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,    24,    25,     0,
       0,     0,    26,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,    28,     0,    26,     0,     0,     0,
       0,     0,    27,     0,     0,     0,     0,     0,    28,    67,
      68,    69,    70,    71,    72,    73,    74,     0,     0,     0,
      67,    68,    69,    70,    71,    72,    73,    74,     0,     0,
       0,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,   181,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
     194,    75,    76,    77,    78,    79,     0,     0,     0,     0,
     168,    67,    68,    69,    70,    71,    72,    73,    74,     0,
       0,    67,    68,    69,    70,    71,    72,    73,    74,     0,
       0,    67,    68,    69,    70,    71,    72,    73,    74,     0,
       0,    75,    76,    77,    78,    79,     0,     0,     0,     0,
     205,    75,    76,    77,    78,    79,     0,     0,     0,     0,
     214,    75,    76,    77,    78,    79,     0,     0,     0,    95,
      67,    68,    69,    70,    71,    72,    73,    74,     0,    67,
      68,    69,    70,    71,    72,    73,    74,     0,    67,    68,
      69,    70,    71,    72,    73,    74,     0,     0,     0,     0,
      75,    76,    77,    78,    79,     0,     0,     0,   115,    75,
      76,    77,    78,    79,     0,     0,     0,   116,    75,    76,
      77,    78,    79,     0,     0,     0,   124,    67,    68,    69,
      70,    71,    72,    73,    74,     0,    67,    68,    69,    70,
      71,    72,    73,    74,     0,    67,    68,    69,    70,    71,
      72,    73,    74,     0,     0,     0,     0,    75,    76,    77,
      78,    79,     0,     0,     0,   125,    75,    76,    77,    78,
      79,     0,     0,     0,   200,    75,    76,    77,    78,    79,
      67,    68,    69,    70,    71,    72,    73,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,    78,    79
};

static const yytype_int16 yycheck[] =
{
      29,    22,    89,   177,   178,    89,    18,   131,    56,     8,
      18,    56,     0,    61,   188,     8,    61,    88,    17,    57,
      25,    26,    60,    26,    27,    28,    57,    17,    56,    60,
      51,    56,    39,    40,    55,     8,    56,    56,     8,   213,
     164,    58,   216,    58,     8,   219,    49,    50,    61,   223,
      53,    54,    60,     8,    57,    58,    56,    61,    56,    80,
      56,    26,    56,    58,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    89,    17,    17,
      61,   168,   153,   154,   168,     8,    58,     8,   117,    17,
      58,    94,   163,    19,    20,    21,    22,    23,    24,    25,
      26,   113,     8,   174,    61,    57,   109,     8,     8,   112,
     181,   114,   183,    61,    39,    58,   137,   138,     8,   131,
      57,     8,    17,   194,    11,    12,    13,    14,    15,    60,
     201,    11,    12,    13,    14,    15,   165,   166,   141,    35,
      27,    61,    17,   146,   215,    56,   175,    59,    18,    57,
      34,    17,   164,    17,   157,    58,   168,    18,   187,    46,
      58,    58,    18,    -1,   193,    58,   195,   170,    -1,    -1,
     173,   168,    94,    -1,   203,    -1,   179,    -1,    -1,    -1,
     209,    -1,    -1,   186,    -1,    -1,   207,    -1,    -1,    -1,
      -1,   220,    -1,    -1,   197,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    21,    22,    23,    24,    25,    26,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    62,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    62,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    62,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    -1,    42,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    53,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    62,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    62,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    -1,    42,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    62,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    62,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    62,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    62,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    62,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    62,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    62,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,    59,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      59,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      58,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      58,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      58,    49,    50,    51,    52,    53,    -1,    -1,    -1,    57,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    57,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    57,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    57,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    57,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    57,    49,    50,    51,    52,    53,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    64,    91,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    27,    33,
      35,    36,    37,    38,    45,    46,    50,    56,    62,    65,
      66,    67,    68,    69,    72,    73,    74,    75,    76,    77,
      80,    82,    83,    84,    86,    87,    88,    89,    90,    56,
      61,     8,    89,    56,    56,    17,    91,    56,    56,     8,
       8,    86,    86,    86,    66,    58,    58,    19,    20,    21,
      22,    23,    24,    25,    26,    49,    50,    51,    52,    53,
       8,    79,    86,    86,    91,     8,    86,    86,    91,    56,
      86,    86,     8,    17,    56,    57,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    61,
      91,    57,    60,    56,    61,    57,    57,    65,     8,    46,
      81,    82,    83,    89,    57,    57,    61,     8,    85,    79,
      86,    56,    58,    86,    78,    89,    86,    17,    17,    18,
       8,    58,     8,    17,    58,     8,    61,    18,    60,    57,
      78,    57,     8,    91,    91,    92,    86,    39,    70,    86,
      58,     8,    57,    17,    60,    65,    65,    35,    58,    86,
      39,    40,    71,    61,    17,    65,    78,    18,    18,    56,
      81,    59,    86,    59,    18,    86,    42,    65,    18,    92,
      92,    86,    57,    65,    59,    65,    86,    42,    92,    34,
      57,    17,    41,    65,    41,    58,    86,    17,    58,    65,
      58,    41,    58,    18,    58,    91,    18,    58,    92,    18,
      65,    92,    92,    18,    92
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    63,    64,    65,    65,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    67,    68,    68,    69,
      70,    70,    71,    72,    73,    74,    75,    75,    75,    76,
      77,    78,    78,    78,    79,    79,    79,    80,    80,    81,
      81,    82,    82,    82,    82,    83,    84,    85,    85,    85,
      85,    86,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      88,    88,    89,    89,    89,    89,    89,    90,    90,    90,
      90,    90,    90,    90,    91,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     9,    15,     8,
       7,     6,     5,     9,    11,    13,    13,    10,    12,     5,
       4,     4,     2,     0,     3,     1,     0,     2,     2,     1,
       1,     2,     4,     5,     5,     3,     6,     3,     5,     1,
       3,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* program: start_scope statement_list  */
#line 84 "Compiler.y"
                                                         {execute((yyvsp[0].nPtr),1);freeNode((yyvsp[0].nPtr));}
#line 1690 "y.tab.c"
    break;

  case 3: /* statement_list: statement  */
#line 89 "Compiler.y"
                                                             {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1696 "y.tab.c"
    break;

  case 4: /* statement_list: statement_list statement  */
#line 90 "Compiler.y"
                                                             {(yyval.nPtr)=createOperatorNode(';', 2, (yyvsp[-1].nPtr), (yyvsp[0].nPtr));}
#line 1702 "y.tab.c"
    break;

  case 5: /* statement: declaration_assignment  */
#line 95 "Compiler.y"
                                                            {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1708 "y.tab.c"
    break;

  case 6: /* statement: enum_declaration  */
#line 96 "Compiler.y"
                                                            {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1714 "y.tab.c"
    break;

  case 7: /* statement: function_call  */
#line 97 "Compiler.y"
                                                            {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1720 "y.tab.c"
    break;

  case 8: /* statement: print_statement  */
#line 98 "Compiler.y"
                                                            {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1726 "y.tab.c"
    break;

  case 9: /* statement: if_condition_statement  */
#line 99 "Compiler.y"
                                                            {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1732 "y.tab.c"
    break;

  case 10: /* statement: switch_statement  */
#line 100 "Compiler.y"
                                                            {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1738 "y.tab.c"
    break;

  case 11: /* statement: while_loop  */
#line 101 "Compiler.y"
                                                            {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1744 "y.tab.c"
    break;

  case 12: /* statement: do_while_loop  */
#line 102 "Compiler.y"
                                                            {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1750 "y.tab.c"
    break;

  case 13: /* statement: for_loop  */
#line 103 "Compiler.y"
                                                            {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1756 "y.tab.c"
    break;

  case 14: /* statement: function_declaration  */
#line 104 "Compiler.y"
                                                             {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1762 "y.tab.c"
    break;

  case 15: /* statement: expression  */
#line 105 "Compiler.y"
                                                             {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1768 "y.tab.c"
    break;

  case 16: /* print_statement: PRINT '(' expression ')' ';'  */
#line 109 "Compiler.y"
                                                          {(yyval.nPtr)= createOperatorNode(PRINT, 1, (yyvsp[-2].nPtr));}
#line 1774 "y.tab.c"
    break;

  case 17: /* if_condition_statement: IF '(' expression ')' LBRACE start_scope statement_list RBRACE end_scope  */
#line 112 "Compiler.y"
                                                                                                                                                                {(yyval.nPtr) = createOperatorNode(IF,2,(yyvsp[-6].nPtr),(yyvsp[-2].nPtr));}
#line 1780 "y.tab.c"
    break;

  case 18: /* if_condition_statement: IF '(' expression ')' LBRACE start_scope statement_list RBRACE end_scope ELSE LBRACE start_scope statement_list RBRACE end_scope  */
#line 113 "Compiler.y"
                                                                                                                                                                {(yyval.nPtr) = createOperatorNode(IF, 2, (yyvsp[-12].nPtr), (yyvsp[-8].nPtr), (yyvsp[-2].nPtr));}
#line 1786 "y.tab.c"
    break;

  case 19: /* switch_statement: SWITCH '(' expression ')' LBRACE case_list case_default RBRACE  */
#line 115 "Compiler.y"
                                                                                            {(yyval.nPtr) = createOperatorNode(SWITCH, 2, (yyvsp[-5].nPtr), (yyvsp[-2].nPtr));}
#line 1792 "y.tab.c"
    break;

  case 20: /* case_list: case_list CASE expression ':' statement_list BREAK ';'  */
#line 118 "Compiler.y"
                                                                               {(yyval.nPtr) = createOperatorNode(CASE,3,(yyvsp[-6].nPtr),(yyvsp[-4].nPtr),(yyvsp[-2].nPtr));}
#line 1798 "y.tab.c"
    break;

  case 21: /* case_list: CASE expression ':' statement_list BREAK ';'  */
#line 119 "Compiler.y"
                                                                               {(yyval.nPtr) = createOperatorNode(CASE, 2, (yyvsp[-4].nPtr), (yyvsp[-2].nPtr));}
#line 1804 "y.tab.c"
    break;

  case 22: /* case_default: DEFAULT ':' statement_list BREAK ';'  */
#line 122 "Compiler.y"
                                                                                {(yyval.nPtr) = createOperatorNode(DEFAULT, 1, (yyvsp[-2].nPtr));}
#line 1810 "y.tab.c"
    break;

  case 23: /* while_loop: WHILE '(' expression ')' LBRACE start_scope statement_list RBRACE end_scope  */
#line 127 "Compiler.y"
                                                                                                                {
                                                                                                                                printf("Content of expression node: ");
                                                                                                                                            printNode((yyvsp[-6].nPtr));
                                                                                                                                            printf("Content of statement list node: ");
                                                                                                                                            printNode((yyvsp[-2].nPtr));
                                                                                                                                (yyval.nPtr) = createOperatorNode(WHILE, 2, (yyvsp[-6].nPtr), (yyvsp[-2].nPtr));
                                                                                                                                }
#line 1822 "y.tab.c"
    break;

  case 24: /* do_while_loop: DO LBRACE start_scope statement_list RBRACE end_scope WHILE '(' expression ')' ';'  */
#line 136 "Compiler.y"
                                                                                                                { (yyval.nPtr) = createOperatorNode(DO, 2, (yyvsp[-7].nPtr), (yyvsp[-2].nPtr));}
#line 1828 "y.tab.c"
    break;

  case 25: /* for_loop: FOR start_scope '(' declaration_assignment_loop ';' expression ';' declaration_assignment_loop ')' LBRACE statement_list RBRACE end_scope  */
#line 139 "Compiler.y"
                                                                                                                                                                     {(yyval.nPtr) = createOperatorNode(FOR, 3, (yyvsp[-9].nPtr), (yyvsp[-7].nPtr), (yyvsp[-5].nPtr));}
#line 1834 "y.tab.c"
    break;

  case 26: /* function_declaration: type IDENTIFIER start_scope '(' arg_list ')' LBRACE statement_list RETURN expression ';' RBRACE end_scope  */
#line 144 "Compiler.y"
                                                                                                                                        { 

                                                                                                                                            SymbolEntry *entry = getSymbolEntryFromParentScope(currTable, (yyvsp[-11].sVal));
                                                                    
                                                                                                                                            if(entry == NULL){
                                                                                                                                                bool noError = handleReturnTypeCheck((yyvsp[-12].nPtr), (yyvsp[-3].nPtr));
                                                                                                                                                

                                                                                                                                                if (noError) {
                                                                                                                                                    // Itirate over the arguments types to add them
                                                                                                                                                    int argCount = 0;
                                                                                                                                                    char** argList = NULL;
                                                                                                                                                    getArgList((yyvsp[-8].nPtr), &argCount, &argList);
                                                                                                                                                    SymbolEntry *newEntry = create_function_SymbolEntry((yyvsp[-11].sVal), 0, 1, currentLineNumber, argCount, argList, conEnumToString((yyvsp[-12].nPtr)->typ.type));
                                                                                                                                                    addSymbolEntry(currTable, newEntry);
                                                                                                                                                    (yyval.nPtr)=createOperatorNode(FUNC, 5, createTypeNode((yyvsp[-12].nPtr)->typ.type), createIdentifierNode((yyvsp[-11].sVal)), (yyvsp[-8].nPtr), (yyvsp[-5].nPtr), (yyvsp[-3].nPtr));
                                                                                                                                                }
                                                                                                                                                else{
                                                                                                                                                    throwError("Type mismatch. Return type does not match function declaration", currentLineNumber, semanticErrorsFile);
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                            else{
                                                                                                                                                throwError("Function name already declared", currentLineNumber, semanticErrorsFile);
                                                                                                                                            }
                                                                                                                                        }
#line 1864 "y.tab.c"
    break;

  case 27: /* function_declaration: VOID_TYPE IDENTIFIER start_scope '(' arg_list ')' LBRACE statement_list RBRACE end_scope  */
#line 170 "Compiler.y"
                                                                                                                                        { 

                                                                                                                                            SymbolEntry *entry = getSymbolEntryFromParentScope(currTable, (yyvsp[-8].sVal));
                                                                    
                                                                                                                                            if(entry == NULL){
                                                                                                                                                // Itirate over the arguments types to add them
                                                                                                                                                SymbolEntry *newEntry = create_function_SymbolEntry((yyvsp[-8].sVal), 0, 1, currentLineNumber, 0, NULL, "Void");
                                                                                                                                                addSymbolEntry(currTable, newEntry);
                                                                                                                                                (yyval.nPtr)=createOperatorNode(FUNC, 4, createTypeNode(typeVoid), createIdentifierNode((yyvsp[-8].sVal)), (yyvsp[-5].nPtr), (yyvsp[-2].nPtr));
                                                                                                                                            }
                                                                                                                                            else{
                                                                                                                                                throwError("Function name already declared", currentLineNumber, semanticErrorsFile);
                                                                                                                                            }
                                                                                                                                        }
#line 1883 "y.tab.c"
    break;

  case 28: /* function_declaration: type IDENTIFIER start_scope '(' arg_list ')' LBRACE RETURN expression ';' RBRACE end_scope  */
#line 185 "Compiler.y"
                                                                                                                                        { 

                                                                                                                                            SymbolEntry *entry = getSymbolEntryFromParentScope(currTable, (yyvsp[-10].sVal));
                                                                    
                                                                                                                                            if(entry == NULL){
                                                                                                                                                bool noError = handleReturnTypeCheck((yyvsp[-11].nPtr), (yyvsp[-3].nPtr));
                                                                                                                                                

                                                                                                                                                if (noError) {
                                                                                                                                                    // Itirate over the arguments types to add them
                                                                                                                                                    SymbolEntry *newEntry = create_function_SymbolEntry((yyvsp[-10].sVal), 0, 1, currentLineNumber, 0, NULL, conEnumToString((yyvsp[-11].nPtr)->typ.type));
                                                                                                                                                    addSymbolEntry(currTable, newEntry);
                                                                                                                                                    (yyval.nPtr)=createOperatorNode(FUNC, 3, createTypeNode((yyvsp[-11].nPtr)->typ.type), createIdentifierNode((yyvsp[-10].sVal)), (yyvsp[-7].nPtr), (yyvsp[-3].nPtr));
                                                                                                                                                }
                                                                                                                                                else{
                                                                                                                                                    throwError("Type mismatch. Return type does not match function declaration", currentLineNumber, semanticErrorsFile);
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                            else{
                                                                                                                                                throwError("Function name already declared", currentLineNumber, semanticErrorsFile);
                                                                                                                                            }
                                                                                                                                        }
#line 1910 "y.tab.c"
    break;

  case 29: /* function_call: IDENTIFIER '(' arg_list_call ')' ';'  */
#line 210 "Compiler.y"
                                                                { (yyval.nPtr)=createOperatorNode(CALL, 1, createIdentifierNode((yyvsp[-4].sVal)), (yyvsp[-2].nPtr));}
#line 1916 "y.tab.c"
    break;

  case 30: /* function_call_expression: IDENTIFIER '(' arg_list_call ')'  */
#line 213 "Compiler.y"
                                                                 { (yyval.nPtr)=createOperatorNode(CALL, 1, createIdentifierNode((yyvsp[-3].sVal)), (yyvsp[-1].nPtr));}
#line 1922 "y.tab.c"
    break;

  case 31: /* arg_list: type IDENTIFIER ',' arg_list  */
#line 216 "Compiler.y"
                                                                { 
                                                                    //add the variable in arg list to the symbol table
                                                                    SymbolEntry *newEntry = create_variable_SymbolEntry((yyvsp[-2].sVal), conEnumToString((yyvsp[-3].nPtr)->typ.type), 1, 0, 0, NULL, currentLineNumber);
                                                                    addSymbolEntry(currTable, newEntry);
                                                                    (yyval.nPtr)=createOperatorNode(',', 2, createTypeNode((yyvsp[-3].nPtr)->typ.type), createIdentifierNode((yyvsp[-2].sVal)));
                                                                    // Concatenate the current node with the rest of the list
                                                                    (yyval.nPtr) = createOperatorNode(',', 2, (yyval.nPtr), (yyvsp[0].nPtr));
                                                                }
#line 1935 "y.tab.c"
    break;

  case 32: /* arg_list: type IDENTIFIER  */
#line 225 "Compiler.y"
                                                                { 
                                                                    (yyval.nPtr)=createOperatorNode(',', 2, createTypeNode((yyvsp[-1].nPtr)->typ.type), createIdentifierNode((yyvsp[0].sVal)));
                                                                    
                                                                    //add the variable in arg list to the symbol table
                                                                    SymbolEntry *newEntry = create_variable_SymbolEntry((yyvsp[0].sVal), conEnumToString((yyvsp[-1].nPtr)->typ.type), 1, 0, 0, NULL, currentLineNumber);
                                                                    addSymbolEntry(currTable, newEntry);
                                                                }
#line 1947 "y.tab.c"
    break;

  case 33: /* arg_list: %empty  */
#line 232 "Compiler.y"
                                                                { (yyval.nPtr)=NULL;}
#line 1953 "y.tab.c"
    break;

  case 34: /* arg_list_call: arg_list_call ',' expression  */
#line 235 "Compiler.y"
                                                                 { (yyval.nPtr)=createOperatorNode(',', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1959 "y.tab.c"
    break;

  case 35: /* arg_list_call: expression  */
#line 236 "Compiler.y"
                                                                 { (yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1965 "y.tab.c"
    break;

  case 36: /* arg_list_call: %empty  */
#line 237 "Compiler.y"
                                                                 { (yyval.nPtr)=NULL;}
#line 1971 "y.tab.c"
    break;

  case 37: /* declaration_assignment: declaration ';'  */
#line 244 "Compiler.y"
                                          { (yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 1977 "y.tab.c"
    break;

  case 38: /* declaration_assignment: assignment ';'  */
#line 245 "Compiler.y"
                                         { (yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 1983 "y.tab.c"
    break;

  case 39: /* declaration_assignment_loop: declaration  */
#line 248 "Compiler.y"
                                                { (yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1989 "y.tab.c"
    break;

  case 40: /* declaration_assignment_loop: assignment  */
#line 249 "Compiler.y"
                                                { (yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1995 "y.tab.c"
    break;

  case 41: /* declaration: type IDENTIFIER  */
#line 254 "Compiler.y"
                                                                    { 
                                                                        SymbolEntry *entry = getSymbolEntryFomCurrentScope(currTable, (yyvsp[0].sVal));

                                                                        if(entry == NULL){
                                                                            SymbolEntry *newEntry = create_variable_SymbolEntry((yyvsp[0].sVal), conEnumToString((yyvsp[-1].nPtr)->typ.type), 0, 0, 0, NULL, currentLineNumber);
                                                                            addSymbolEntry(currTable, newEntry);
                                                                            (yyval.nPtr) = createOperatorNode(VAR, 2, createTypeNode((yyvsp[-1].nPtr)->typ.type), createIdentifierNode((yyvsp[0].sVal)));  
                                                                        }
                                                                        else{
                                                                            throwError("Variable already declared in this scope", currentLineNumber, semanticErrorsFile);
                                                                        }

                                                                    }
#line 2013 "y.tab.c"
    break;

  case 42: /* declaration: type IDENTIFIER '=' expression  */
#line 268 "Compiler.y"
                                                                    {  
                                                                        
                                                                        SymbolEntry *entry = getSymbolEntryFomCurrentScope(currTable, (yyvsp[-2].sVal));
                                                                        if(entry == NULL){
                                                                            
                                                                            char* typeUnion;
                                                                            CheckTypeFunc checkFunc = getCheckFunction((yyvsp[-3].nPtr)->typ.type, &typeUnion);
                                                                            bool noError = true;
                                                                            //expression can be => con, ID or op
                                                                            if((yyvsp[0].nPtr)->type == typeCon){
                                                                                noError = handleConNodeExpressionInDeclaration((yyvsp[-3].nPtr), (yyvsp[-2].sVal), (yyvsp[0].nPtr), true, 0);
                                                                                
                                                                            }
                                                                            else if((yyvsp[0].nPtr)->type == typeId){
                                                                                //i.e. int x = expr
                                                                                noError = handleIdNodeExpressionInDeclaration((yyvsp[-3].nPtr), (yyvsp[-2].sVal), (yyvsp[0].nPtr), true, 0);
                                                                                
                                                                            }
                                                                            else if((yyvsp[0].nPtr)->type==typeOpr){
                                                                                noError = handleOperandsExpressionInDeclaration((yyvsp[-3].nPtr), (yyvsp[-2].sVal), (yyvsp[0].nPtr), true, 0);
                                                                            }

                                                                            if(noError){
                                                                                (yyval.nPtr) = createOperatorNode('=', 3, createTypeNode((yyvsp[-3].nPtr)->typ.type), createIdentifierNode((yyvsp[-2].sVal)), (yyvsp[0].nPtr)); 
                                                                            }

                                                                        }
                                                                        else{
                                                                            throwError("Variable already declared in this scope", 1, semanticErrorsFile);
                                                                        }
                                                                    }
#line 2049 "y.tab.c"
    break;

  case 43: /* declaration: CONST type IDENTIFIER '=' expression  */
#line 301 "Compiler.y"
                                                                    {  
                                                                        SymbolEntry *entry = getSymbolEntryFomCurrentScope(currTable, (yyvsp[-2].sVal));
                                                                        if(entry == NULL){
                                                                            
                                                                            char* typeUnion;
                                                                            CheckTypeFunc checkFunc = getCheckFunction((yyvsp[-3].nPtr)->typ.type, &typeUnion);
                                                                            bool noError = true;
                                                                            //expression can be => con, ID or op
                                                                            if((yyvsp[0].nPtr)->type == typeCon){
                                                                                noError = handleConNodeExpressionInDeclaration((yyvsp[-3].nPtr), (yyvsp[-2].sVal), (yyvsp[0].nPtr), true, 1);
                                                                                
                                                                            }
                                                                            else if((yyvsp[0].nPtr)->type == typeId){
                                                                                //i.e. int x = expr
                                                                                noError = handleIdNodeExpressionInDeclaration((yyvsp[-3].nPtr), (yyvsp[-2].sVal), (yyvsp[0].nPtr), true, 1);
                                                                                
                                                                            }
                                                                            else if((yyvsp[0].nPtr)->type==typeOpr){
                                                                                noError = handleOperandsExpressionInDeclaration((yyvsp[-3].nPtr), (yyvsp[-2].sVal), (yyvsp[0].nPtr), true, 1);
                                                                            }

                                                                            if(noError){
                                                                                (yyval.nPtr) = createOperatorNode(CONST, 3, createTypeNode((yyvsp[-3].nPtr)->typ.type), createIdentifierNode((yyvsp[-2].sVal)), (yyvsp[0].nPtr));
                                                                            }

                                                                        }
                                                                        else{
                                                                            throwError("Variable already declared in this scope", 1, semanticErrorsFile);
                                                                        }
                                                                    }
#line 2084 "y.tab.c"
    break;

  case 44: /* declaration: ENUM IDENTIFIER IDENTIFIER '=' IDENTIFIER  */
#line 331 "Compiler.y"
                                                                    {  (yyval.nPtr) = createOperatorNode(ENUM, 3, createIdentifierNode((yyvsp[-3].sVal)),createIdentifierNode((yyvsp[-2].sVal)) ,createIdentifierNode((yyvsp[0].sVal)));}
#line 2090 "y.tab.c"
    break;

  case 45: /* assignment: IDENTIFIER '=' expression  */
#line 336 "Compiler.y"
                                                                    {     (yyval.nPtr)=createOperatorNode('=', 2, createIdentifierNode((yyvsp[-2].sVal)), (yyvsp[0].nPtr));
                                                                        SymbolEntry *entry = getSymbolEntryFomCurrentScope(currTable, (yyvsp[-2].sVal));
                                                                        if(entry != NULL){
                                                                            //check that it's not constant
                                                                            if(getIsConstant(entry)){
                                                                                throwError("Cannot assign to constant variable", currentLineNumber, semanticErrorsFile);
                                                                            }
                                                                            else{
                                                                                char* typeUnion;
                                                                                CheckTypeFunc checkFunc = getCheckFunction(stringToConEnum(entry->type), &typeUnion);
                                                                                bool noError = true;
                                                                                //expression can be => con, ID or op
                                                                                if((yyvsp[0].nPtr)->type == typeCon){
                                                                                    char symbolValue[20];

                                                                                    if (checkTypeMismatchConNode((yyvsp[0].nPtr), symbolValue, typeUnion, checkFunc)) {
                                                                                        setValue(entry, symbolValue);
                                                                                        setIsInitialized(entry, 1);
                                                                                        setIsUsed(entry, 1);
                                                                                    } else {
                                                                                        throwError("Type mismatch", currentLineNumber, semanticErrorsFile);
                                                                                    }
                                                                                    
                                                                                }
                                                                                else if((yyvsp[0].nPtr)->type == typeId){

                                                                                    SymbolEntry *idEntry = checkIdNodeDeclaration(currTable, (yyvsp[0].nPtr)->id.id);
                                                                                    if (idEntry != NULL) {
                                                                                        bool isInitialized = getIsInitialized(idEntry);
                                                                                        if (isInitialized) {
                                                                                            setIsUsed(idEntry, 1);
                                                                                            char *idEntryValue = getValue(idEntry);
                                                                                            char *idEntryType = getType(idEntry);
                                                                                            if (strcmp(typeUnion, idEntryType) == 0) {
                                                                                                setValue(entry, idEntryValue);
                                                                                                setIsInitialized(entry, 1);
                                                                                                setIsUsed(entry, 1);
                                                                                            } else {
                                                                                                throwError("Type mismatch", currentLineNumber, semanticErrorsFile);
                                                                                            }
                                                                                        } else {
                                                                                            throwError("Variable has not been initialized before", currentLineNumber, semanticErrorsFile);
                                                                                        }
                                                                                    } else {
                                                                                        throwError("There is no such variable existing, Variable in expression is not declared", currentLineNumber, semanticErrorsFile);
                                                                                    }
                                                                                    
                                                                                }
                                                                                else if((yyvsp[0].nPtr)->type==typeOpr){
                                                                                    noError = handleOperandsExpressionInDeclaration((yyvsp[-2].sVal), (yyvsp[-2].sVal), (yyvsp[0].nPtr), false, 0);
                                                                                }

                                                                                if(noError){
                                                                                    (yyval.nPtr)=createOperatorNode('=', 2, createIdentifierNode((yyvsp[-2].sVal)), (yyvsp[0].nPtr));
                                                                                }
                                                                            }
                                                                        }
                                                                        else{
                                                                            throwError("Use of undeclared variable", 1, semanticErrorsFile);
                                                                        }
                                                                    }
#line 2156 "y.tab.c"
    break;

  case 46: /* enum_declaration: ENUM IDENTIFIER LBRACE enum_list RBRACE ';'  */
#line 400 "Compiler.y"
                                                                        {(yyval.nPtr)=createOperatorNode(ENUM, 2, createIdentifierNode((yyvsp[-4].sVal)), (yyvsp[-2].nPtr));}
#line 2162 "y.tab.c"
    break;

  case 47: /* enum_list: enum_list ',' IDENTIFIER  */
#line 404 "Compiler.y"
                                                                        { (yyval.nPtr) = createOperatorNode(ENUM, 1, createIdentifierNode((yyvsp[0].sVal))); }
#line 2168 "y.tab.c"
    break;

  case 48: /* enum_list: enum_list ',' IDENTIFIER '=' expression  */
#line 405 "Compiler.y"
                                                                        { (yyval.nPtr) = createOperatorNode(ENUM, 2, createIdentifierNode((yyvsp[-2].sVal)), (yyvsp[0].nPtr)); }
#line 2174 "y.tab.c"
    break;

  case 49: /* enum_list: IDENTIFIER  */
#line 406 "Compiler.y"
                                                                        { (yyval.nPtr) = createOperatorNode(ENUM, 1, createIdentifierNode((yyvsp[0].sVal))); }
#line 2180 "y.tab.c"
    break;

  case 50: /* enum_list: IDENTIFIER '=' expression  */
#line 407 "Compiler.y"
                                                                        { (yyval.nPtr) = createOperatorNode(ENUM, 2, createIdentifierNode((yyvsp[-2].sVal)), (yyvsp[0].nPtr)); }
#line 2186 "y.tab.c"
    break;

  case 51: /* expression: binary_expression  */
#line 412 "Compiler.y"
                                             { (yyval.nPtr)=(yyvsp[0].nPtr);}
#line 2192 "y.tab.c"
    break;

  case 52: /* expression: unary_expression  */
#line 413 "Compiler.y"
                                             { (yyval.nPtr)=(yyvsp[0].nPtr);}
#line 2198 "y.tab.c"
    break;

  case 53: /* binary_expression: expression '+' expression  */
#line 415 "Compiler.y"
                                                     { (yyval.nPtr)=createOperatorNode('+', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2204 "y.tab.c"
    break;

  case 54: /* binary_expression: expression '-' expression  */
#line 416 "Compiler.y"
                                                     { (yyval.nPtr)=createOperatorNode('-', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2210 "y.tab.c"
    break;

  case 55: /* binary_expression: expression '*' expression  */
#line 417 "Compiler.y"
                                                     { (yyval.nPtr)=createOperatorNode('*', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2216 "y.tab.c"
    break;

  case 56: /* binary_expression: expression '/' expression  */
#line 418 "Compiler.y"
                                                     { (yyval.nPtr)=createOperatorNode('/', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2222 "y.tab.c"
    break;

  case 57: /* binary_expression: expression '%' expression  */
#line 419 "Compiler.y"
                                                     { (yyval.nPtr)=createOperatorNode('%', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2228 "y.tab.c"
    break;

  case 58: /* binary_expression: expression EQ expression  */
#line 420 "Compiler.y"
                                                     { (yyval.nPtr)=createOperatorNode(EQ, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2234 "y.tab.c"
    break;

  case 59: /* binary_expression: expression NEQ expression  */
#line 421 "Compiler.y"
                                                     { (yyval.nPtr)=createOperatorNode(NEQ, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2240 "y.tab.c"
    break;

  case 60: /* binary_expression: expression LT expression  */
#line 422 "Compiler.y"
                                                     { (yyval.nPtr)=createOperatorNode(LT, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2246 "y.tab.c"
    break;

  case 61: /* binary_expression: expression GT expression  */
#line 423 "Compiler.y"
                                                     { (yyval.nPtr)=createOperatorNode(GT, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2252 "y.tab.c"
    break;

  case 62: /* binary_expression: expression LTE expression  */
#line 424 "Compiler.y"
                                                     { (yyval.nPtr)=createOperatorNode(LTE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2258 "y.tab.c"
    break;

  case 63: /* binary_expression: expression GTE expression  */
#line 425 "Compiler.y"
                                                     { (yyval.nPtr)=createOperatorNode(GTE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2264 "y.tab.c"
    break;

  case 64: /* binary_expression: expression AND expression  */
#line 426 "Compiler.y"
                                                     { (yyval.nPtr)=createOperatorNode(AND, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2270 "y.tab.c"
    break;

  case 65: /* binary_expression: expression OR expression  */
#line 427 "Compiler.y"
                                                     { (yyval.nPtr)=createOperatorNode(OR, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 2276 "y.tab.c"
    break;

  case 66: /* binary_expression: '(' expression ')'  */
#line 428 "Compiler.y"
                                                     { (yyval.nPtr)=(yyvsp[-1].nPtr); }
#line 2282 "y.tab.c"
    break;

  case 67: /* binary_expression: value  */
#line 429 "Compiler.y"
                                                     { (yyval.nPtr)=(yyvsp[0].nPtr); }
#line 2288 "y.tab.c"
    break;

  case 68: /* binary_expression: IDENTIFIER  */
#line 430 "Compiler.y"
                                                     { (yyval.nPtr)=createIdentifierNode((yyvsp[0].sVal)); }
#line 2294 "y.tab.c"
    break;

  case 69: /* binary_expression: function_call_expression  */
#line 431 "Compiler.y"
                                                     { (yyval.nPtr)=(yyvsp[0].nPtr);}
#line 2300 "y.tab.c"
    break;

  case 70: /* unary_expression: '-' expression  */
#line 433 "Compiler.y"
                                                      { (yyval.nPtr) = createOperatorNode('-', 1, (yyvsp[0].nPtr)); }
#line 2306 "y.tab.c"
    break;

  case 71: /* unary_expression: '!' expression  */
#line 434 "Compiler.y"
                                                      { (yyval.nPtr) = createOperatorNode('!', 1, (yyvsp[0].nPtr)); }
#line 2312 "y.tab.c"
    break;

  case 72: /* type: INT_TYPE  */
#line 438 "Compiler.y"
                                     { (yyval.nPtr) = createTypeNode(typeInt); }
#line 2318 "y.tab.c"
    break;

  case 73: /* type: FLOAT_TYPE  */
#line 439 "Compiler.y"
                                     { (yyval.nPtr) = createTypeNode(typeFloat); }
#line 2324 "y.tab.c"
    break;

  case 74: /* type: BOOL_TYPE  */
#line 440 "Compiler.y"
                                     { (yyval.nPtr) = createTypeNode(typeBool); }
#line 2330 "y.tab.c"
    break;

  case 75: /* type: CHAR_TYPE  */
#line 441 "Compiler.y"
                                     { (yyval.nPtr) = createTypeNode(typeChar); }
#line 2336 "y.tab.c"
    break;

  case 76: /* type: STRING_TYPE  */
#line 442 "Compiler.y"
                                      { (yyval.nPtr) = createTypeNode(typeString); }
#line 2342 "y.tab.c"
    break;

  case 77: /* value: INTEGER  */
#line 445 "Compiler.y"
                                  { (yyval.nPtr) = createIntConstantNode((yyvsp[0].iVal)); }
#line 2348 "y.tab.c"
    break;

  case 78: /* value: FLOAT  */
#line 446 "Compiler.y"
                                  { (yyval.nPtr) = createFloatConstantNode((yyvsp[0].fVal)); }
#line 2354 "y.tab.c"
    break;

  case 79: /* value: BOOL  */
#line 447 "Compiler.y"
                                  { (yyval.nPtr) = createBoolConstantNode((yyvsp[0].bVal)); }
#line 2360 "y.tab.c"
    break;

  case 80: /* value: CHAR  */
#line 448 "Compiler.y"
                                  { (yyval.nPtr) = createCharConstantNode((yyvsp[0].cVal)); }
#line 2366 "y.tab.c"
    break;

  case 81: /* value: STRING  */
#line 449 "Compiler.y"
                                  { (yyval.nPtr) = createStringConstantNode((yyvsp[0].sVal)); }
#line 2372 "y.tab.c"
    break;

  case 82: /* value: BOOL_TRUE  */
#line 450 "Compiler.y"
                                     { (yyval.nPtr) = createBoolConstantNode((yyvsp[0].bVal)); }
#line 2378 "y.tab.c"
    break;

  case 83: /* value: BOOL_FALSE  */
#line 451 "Compiler.y"
                                     { (yyval.nPtr) = createBoolConstantNode((yyvsp[0].bVal)); }
#line 2384 "y.tab.c"
    break;

  case 84: /* start_scope: %empty  */
#line 454 "Compiler.y"
                            {
                                printf("start of scope\n");
                                //we want to increment scope and add new ST (child to current scope)
                                currentScope++;
                                if(currentScope==0){
                                    globalTable = createSymbolTable("global", NULL);
                                    currTable = globalTable;
                                }
                                else{
                                    prevTable = currTable;
                                    SymbolTable *childTable = createSymbolTable("local", currTable);
                                    addChildrenToSymbolTable(currTable,childTable );
                                    currTable = childTable;
                                }
                                
                            }
#line 2405 "y.tab.c"
    break;

  case 85: /* end_scope: %empty  */
#line 472 "Compiler.y"
                            {
                                printf("end of scope\n");
                                currentScope--;
                                prevTable = currTable;
                                currTable = currTable->parent;
                            }
#line 2416 "y.tab.c"
    break;


#line 2420 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 480 "Compiler.y"


void yyerror(const char *s) {
    fprintf(syntaxErrorsFile, "Syntax error at line %d: %s\n", currentLineNumber, s);
}

bool handleOperandsExpressionInDeclaration(const nodeType *node1, const nodeType *node2, const nodeType *node4, bool mainCall, int isConst) {

    bool correctOperands = true;
    for(int i = 0; i < node4->opr.nops; i++) {
        if(node4->opr.op[i]->type == typeCon) {
            if(!handleConNodeExpressionInDeclaration(node1, node2, node4->opr.op[i],false, -1)) {
                correctOperands = false;
                break;
            }
        } else if(node4->opr.op[i]->type == typeId) {
            if(!handleIdNodeExpressionInDeclaration(node1, node2, node4->opr.op[i], false, -1)) {
                correctOperands = false;
                break;
            }
        } else if(node4->opr.op[i]->type == typeOpr) {
            if(!handleOperandsExpressionInDeclaration(node1, node2, node4->opr.op[i], false, -1)) {
                correctOperands = false;
                break;
            }
        }
    }

    if(!correctOperands) {
        return false;
    }
    // create the symbol entry and add it to the symbol table
    if(mainCall) {
        SymbolEntry *newEntry = create_variable_SymbolEntry(node2, conEnumToString(node1->typ.type), 1, isConst, 1, NULL, currentLineNumber);
        addSymbolEntry(currTable, newEntry);
    }
    return true;
        
}

bool handleConNodeExpressionInDeclaration(const nodeType *node1, const nodeType *node2, const nodeType *node4, bool mainCall, int isConst){

    char* typeUnion;
    CheckTypeFunc checkFunc = getCheckFunction(node1->typ.type, &typeUnion);
    char symbolValue[20];

    if (checkTypeMismatchConNode(node4, symbolValue, typeUnion, checkFunc)) {
        if(!mainCall) {
            return true;
        }
        SymbolEntry *newEntry = create_variable_SymbolEntry(node2, conEnumToString(node1->typ.type), 1, isConst, 1, symbolValue, currentLineNumber);
        addSymbolEntry(currTable, newEntry);
        return true;
    } else {
        throwError("Type mismatch", currentLineNumber, semanticErrorsFile);
        return false;
    }

}

bool handleIdNodeExpressionInDeclaration(const nodeType *node1, const nodeType *node2, const nodeType *node4, bool mainCall, int isConst){

    char* typeUnion;
    CheckTypeFunc checkFunc = getCheckFunction(node1->typ.type, &typeUnion);

    SymbolEntry *idEntry = checkIdNodeDeclaration(currTable, node4->id.id);
    if (idEntry != NULL) {
        bool isInitialized = getIsInitialized(idEntry);
        if (isInitialized) {
            setIsUsed(idEntry, 1);
            char *idEntryValue = getValue(idEntry);
            char *idEntryType = getType(idEntry);
            if (strcmp(typeUnion, idEntryType) == 0) {
                if(!mainCall) {
                    return true;
                }
                SymbolEntry *newEntry = create_variable_SymbolEntry(node2, conEnumToString(node1->typ.type), 1, isConst, 1, idEntryValue, currentLineNumber);
                addSymbolEntry(currTable, newEntry);
                return true;
            } else {
                throwError("Type mismatch", currentLineNumber, semanticErrorsFile);
            }
        } else {
            throwError("Variable has not been initialized before", currentLineNumber, semanticErrorsFile);
        }
    } else {
        throwError("There is no such variable/function existing, Variable in expression is not variable/function", currentLineNumber, semanticErrorsFile);
    }
    return false;
}

// Function to handle the type check for return statements in functions
bool handleReturnTypeCheck(const nodeType *node1, const nodeType *node10) {

    if (node10->type == typeCon) {
        if (!(node1->typ.type == node10->con.typeConst)) {
            return false;
        }
    } else if (node10->type == typeId) {
        SymbolEntry *idEntry = checkIdNodeDeclaration(prevTable, node10->id.id);
        if (idEntry != NULL) {
            bool isInitialized = getIsInitialized(idEntry);
            if (isInitialized) {
                setIsUsed(idEntry, 1);
                char *idEntryType = getType(idEntry);
                if (strcmp(conEnumToString(node1->typ.type), idEntryType) != 0) {
                    return false;
                }
            } else {
                throwError("Variable has not been initialized before, can't return it", currentLineNumber, semanticErrorsFile);
                return false;
            }
        } else {
            throwError("There is no such variable existing, Variable in return is not declared", currentLineNumber, semanticErrorsFile);
            return false;
        }
    } else if (node10->type == typeOpr) {
        return handleOperNodeReturnTypeCheck(node1, node10);
    }

    return true;
}

// Function to handle type checks for operator nodes in return statements
bool handleOperNodeReturnTypeCheck(const nodeType *node1, const nodeType *node10) {
    for (int i = 0; i < node10->opr.nops; i++) {
        if (node10->opr.op[i]->type == typeCon) {
            // Handle constant node
            if (!(node1->typ.type == node10->opr.op[i]->con.typeConst)) {
                return false;  // Return false if type mismatch
            }
        } else if (node10->opr.op[i]->type == typeId) {
            // Handle identifier node
            SymbolEntry *idEntry = checkIdNodeDeclaration(prevTable, node10->opr.op[i]->id.id);
            if (idEntry != NULL) {
                bool isInitialized = getIsInitialized(idEntry);
                if (isInitialized) {
                    setIsUsed(idEntry, 1);
                    char *idEntryType = getType(idEntry);
                    if (strcmp(conEnumToString(node1->typ.type), idEntryType) != 0) {
                        return false;  // Return false if type mismatch
                    }
                } else {
                    throwError("Variable has not been initialized before, can't return it", currentLineNumber, semanticErrorsFile);
                    return false;
                }
            } else {
                throwError("There is no such variable existing, Variable in return is not declared", currentLineNumber, semanticErrorsFile);
                return false;
            }
        } else if (node10->opr.op[i]->type == typeOpr) {
            if (!handleOperNodeReturnTypeCheck(node1, node10->opr.op[i])) {
                return false;
            }
        }
    }
    return true;
}

void getArgList(nodeType *node, int *argCount, char*** argList) {
    if (node->type == typeOpr) {
        for (int i = 0; i < node->opr.nops; i++) {
            getArgList(node->opr.op[i], argCount, argList);
        }
    } else if (node->type == typeDef) {
        // Allocate memory for the new argument in argList
        (*argList) = realloc((*argList), ((*argCount) + 1) * sizeof(char*));
        // Allocate memory for the argument string
        (*argList)[*argCount] = malloc((strlen(conEnumToString(node->typ.type)) + 1) * sizeof(char));
        // Copy the argument string into the allocated memory
        strcpy((*argList)[*argCount], conEnumToString(node->typ.type));
        printf("string: %s\n", (*argList)[*argCount]);
        (*argCount)++;
    }
}


int main(int argc, char **argv) {

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (!fp) {
        perror("Error opening input file");
        return 1;
    }

    yyin = fp;


    syntaxErrorsFile = fopen("syntax_errors.txt", "w");
    if (!syntaxErrorsFile) {
        perror("Error opening syntax errors file");
        fclose(fp);
        return 1;
    }

    semanticErrorsFile = fopen("semantic_errors.txt", "w");
    if (!syntaxErrorsFile) {
        perror("Error opening syntax errors file");
        fclose(fp);
        fclose(syntaxErrorsFile);
        return 1;
    }

    warningFile = fopen("warnings.txt", "w");
    if (!warningFile) {
        perror("Error opening warnings file");
        fclose(fp);
        fclose(syntaxErrorsFile);
        fclose(semanticErrorsFile);
        return 1;
    }

    symbolTableFile = fopen("symbol_table.txt", "w");
    if (!symbolTableFile) {
        perror("Error opening symbol table file");
        fclose(fp);
        fclose(syntaxErrorsFile);
        fclose(semanticErrorsFile);
        fclose(warningFile);
        return 1;
    }

    if(!yyparse()) {
        printf("Parsing successful\n");
        writeAllSymbolTablesToFile(globalTable, symbolTableFile);


        fclose(fp);
        fclose(syntaxErrorsFile);
        fclose(semanticErrorsFile);
        fclose(warningFile);
        fclose(symbolTableFile);
    }
    else {
        printf("Parsing failed\n");
        fclose(fp);
        fclose(syntaxErrorsFile);
        fclose(semanticErrorsFile);
        fclose(warningFile);
        fclose(symbolTableFile);
    }
    return 0;
}
