
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENT = 258,
     FCONST = 259,
     SCONST = 260,
     BCONST = 261,
     XCONST = 262,
     Op = 263,
     ICONST = 264,
     PARAM = 265,
     TYPECAST = 266,
     DOT_DOT = 267,
     COLON_EQUALS = 268,
     ABORT_P = 269,
     ABSOLUTE_P = 270,
     ACCESS = 271,
     ACTION = 272,
     ADD_P = 273,
     ADMIN = 274,
     AFTER = 275,
     AGGREGATE = 276,
     ALL = 277,
     ALSO = 278,
     ALTER = 279,
     ALWAYS = 280,
     ANALYSE = 281,
     ANALYZE = 282,
     AND = 283,
     ANY = 284,
     ARRAY = 285,
     AS = 286,
     ASC = 287,
     ASSERTION = 288,
     ASSIGNMENT = 289,
     ASYMMETRIC = 290,
     AT = 291,
     ATTRIBUTE = 292,
     AUTHORIZATION = 293,
     BACKWARD = 294,
     BEFORE = 295,
     BEGIN_P = 296,
     BETWEEN = 297,
     BIGINT = 298,
     BINARY = 299,
     BIT = 300,
     BOOLEAN_P = 301,
     BOTH = 302,
     BY = 303,
     CACHE = 304,
     CALLED = 305,
     CASCADE = 306,
     CASCADED = 307,
     CASE = 308,
     CAST = 309,
     CATALOG_P = 310,
     CHAIN = 311,
     CHAR_P = 312,
     CHARACTER = 313,
     CHARACTERISTICS = 314,
     CHECK = 315,
     CHECKPOINT = 316,
     CLASS = 317,
     CLOSE = 318,
     CLUSTER = 319,
     COALESCE = 320,
     COLLATE = 321,
     COLLATION = 322,
     COLUMN = 323,
     COMMENT = 324,
     COMMENTS = 325,
     COMMIT = 326,
     COMMITTED = 327,
     CONCURRENTLY = 328,
     CONFIGURATION = 329,
     CONNECTION = 330,
     CONSTRAINT = 331,
     CONSTRAINTS = 332,
     CONTENT_P = 333,
     CONTINUE_P = 334,
     CONVERSION_P = 335,
     COPY = 336,
     COST = 337,
     CREATE = 338,
     CROSS = 339,
     CSV = 340,
     CURRENT_P = 341,
     CURRENT_CATALOG = 342,
     CURRENT_DATE = 343,
     CURRENT_ROLE = 344,
     CURRENT_SCHEMA = 345,
     CURRENT_TIME = 346,
     CURRENT_TIMESTAMP = 347,
     CURRENT_USER = 348,
     CURSOR = 349,
     CYCLE = 350,
     DATA_P = 351,
     DATABASE = 352,
     DAY_P = 353,
     DEALLOCATE = 354,
     DEC = 355,
     DECIMAL_P = 356,
     DECLARE = 357,
     DEFAULT = 358,
     DEFAULTS = 359,
     DEFERRABLE = 360,
     DEFERRED = 361,
     DEFINER = 362,
     DELETE_P = 363,
     DELIMITER = 364,
     DELIMITERS = 365,
     DESC = 366,
     DICTIONARY = 367,
     DISABLE_P = 368,
     DISCARD = 369,
     DISTINCT = 370,
     DO = 371,
     DOCUMENT_P = 372,
     DOMAIN_P = 373,
     DOUBLE_P = 374,
     DROP = 375,
     EACH = 376,
     ELSE = 377,
     ENABLE_P = 378,
     ENCODING = 379,
     ENCRYPTED = 380,
     END_P = 381,
     ENUM_P = 382,
     ESCAPE = 383,
     EVENT = 384,
     EXCEPT = 385,
     EXCLUDE = 386,
     EXCLUDING = 387,
     EXCLUSIVE = 388,
     EXECUTE = 389,
     EXISTS = 390,
     EXPLAIN = 391,
     EXTENSION = 392,
     EXTERNAL = 393,
     EXTRACT = 394,
     FALSE_P = 395,
     FAMILY = 396,
     FETCH = 397,
     FILTER = 398,
     FIRST_P = 399,
     FLOAT_P = 400,
     FOLLOWING = 401,
     FOR = 402,
     FORCE = 403,
     FOREIGN = 404,
     FORWARD = 405,
     FREEZE = 406,
     FROM = 407,
     FULL = 408,
     FUNCTION = 409,
     FUNCTIONS = 410,
     GLOBAL = 411,
     GRANT = 412,
     GRANTED = 413,
     GREATEST = 414,
     GROUP_P = 415,
     HANDLER = 416,
     HAVING = 417,
     HEADER_P = 418,
     HOLD = 419,
     HOUR_P = 420,
     IDENTITY_P = 421,
     IF_P = 422,
     ILIKE = 423,
     IMMEDIATE = 424,
     IMMUTABLE = 425,
     IMPLICIT_P = 426,
     IMPORT_P = 427,
     IN_P = 428,
     INCLUDING = 429,
     INCREMENT = 430,
     INDEX = 431,
     INDEXES = 432,
     INHERIT = 433,
     INHERITS = 434,
     INITIALLY = 435,
     INLINE_P = 436,
     INNER_P = 437,
     INOUT = 438,
     INPUT_P = 439,
     INSENSITIVE = 440,
     INSERT = 441,
     INSTEAD = 442,
     INT_P = 443,
     INTEGER = 444,
     INTERSECT = 445,
     INTERVAL = 446,
     INTO = 447,
     INVOKER = 448,
     IS = 449,
     ISNULL = 450,
     ISOLATION = 451,
     JOIN = 452,
     KEY = 453,
     LABEL = 454,
     LANGUAGE = 455,
     LARGE_P = 456,
     LAST_P = 457,
     LATERAL_P = 458,
     LEADING = 459,
     LEAKPROOF = 460,
     LEAST = 461,
     LEFT = 462,
     LEVEL = 463,
     LIKE = 464,
     LIMIT = 465,
     LISTEN = 466,
     LOAD = 467,
     LOCAL = 468,
     LOCALTIME = 469,
     LOCALTIMESTAMP = 470,
     LOCATION = 471,
     LOCK_P = 472,
     LOGGED = 473,
     MAPPING = 474,
     MATCH = 475,
     MATERIALIZED = 476,
     MAXVALUE = 477,
     MINUTE_P = 478,
     MINVALUE = 479,
     MODE = 480,
     MONTH_P = 481,
     MOVE = 482,
     NAME_P = 483,
     NAMES = 484,
     NATIONAL = 485,
     NATURAL = 486,
     NCHAR = 487,
     NEXT = 488,
     NO = 489,
     NONE = 490,
     NOT = 491,
     NOTHING = 492,
     NOTIFY = 493,
     NOTNULL = 494,
     NOWAIT = 495,
     NULL_P = 496,
     NULLIF = 497,
     NULLS_P = 498,
     NUMERIC = 499,
     OBJECT_P = 500,
     OF = 501,
     OFF = 502,
     OFFSET = 503,
     OIDS = 504,
     ON = 505,
     ONLY = 506,
     OPERATOR = 507,
     OPTION = 508,
     OPTIONS = 509,
     OR = 510,
     ORDER = 511,
     ORDINALITY = 512,
     OUT_P = 513,
     OUTER_P = 514,
     OVER = 515,
     OVERLAPS = 516,
     OVERLAY = 517,
     OWNED = 518,
     OWNER = 519,
     PARSER = 520,
     PARTIAL = 521,
     PARTITION = 522,
     PASSING = 523,
     PASSWORD = 524,
     PLACING = 525,
     PLANS = 526,
     POLICY = 527,
     POSITION = 528,
     PRECEDING = 529,
     PRECISION = 530,
     PRESERVE = 531,
     PREPARE = 532,
     PREPARED = 533,
     PRIMARY = 534,
     PRIOR = 535,
     PRIVILEGES = 536,
     PROCEDURAL = 537,
     PROCEDURE = 538,
     PROGRAM = 539,
     QUOTE = 540,
     RANGE = 541,
     READ = 542,
     REAL = 543,
     REASSIGN = 544,
     RECHECK = 545,
     RECURSIVE = 546,
     REF = 547,
     REFERENCES = 548,
     REFRESH = 549,
     REINDEX = 550,
     RELATIVE_P = 551,
     RELEASE = 552,
     RENAME = 553,
     REPEATABLE = 554,
     REPLACE = 555,
     REPLICA = 556,
     RESET = 557,
     RESTART = 558,
     RESTRICT = 559,
     RETURNING = 560,
     RETURNS = 561,
     REVOKE = 562,
     RIGHT = 563,
     ROLE = 564,
     ROLLBACK = 565,
     ROW = 566,
     ROWS = 567,
     RULE = 568,
     SAVEPOINT = 569,
     SCHEMA = 570,
     SCROLL = 571,
     SEARCH = 572,
     SECOND_P = 573,
     SECURITY = 574,
     SELECT = 575,
     SEQUENCE = 576,
     SEQUENCES = 577,
     SERIALIZABLE = 578,
     SERVER = 579,
     SESSION = 580,
     SESSION_USER = 581,
     SET = 582,
     SETOF = 583,
     SHARE = 584,
     SHOW = 585,
     SIMILAR = 586,
     SIMPLE = 587,
     SMALLINT = 588,
     SNAPSHOT = 589,
     SOME = 590,
     STABLE = 591,
     STANDALONE_P = 592,
     START = 593,
     STATEMENT = 594,
     STATISTICS = 595,
     STDIN = 596,
     STDOUT = 597,
     STORAGE = 598,
     STRICT_P = 599,
     STRIP_P = 600,
     SUBSTRING = 601,
     SYMMETRIC = 602,
     SYSID = 603,
     SYSTEM_P = 604,
     TABLE = 605,
     TABLES = 606,
     TABLESPACE = 607,
     TEMP = 608,
     TEMPLATE = 609,
     TEMPORARY = 610,
     TEXT_P = 611,
     THEN = 612,
     TIME = 613,
     TIMESTAMP = 614,
     TO = 615,
     TRAILING = 616,
     TRANSACTION = 617,
     TREAT = 618,
     TRIGGER = 619,
     TRIM = 620,
     TRUE_P = 621,
     TRUNCATE = 622,
     TRUSTED = 623,
     TYPE_P = 624,
     TYPES_P = 625,
     UNBOUNDED = 626,
     UNCOMMITTED = 627,
     UNENCRYPTED = 628,
     UNION = 629,
     UNIQUE = 630,
     UNKNOWN = 631,
     UNLISTEN = 632,
     UNLOGGED = 633,
     UNTIL = 634,
     UPDATE = 635,
     USER = 636,
     USING = 637,
     VACUUM = 638,
     VALID = 639,
     VALIDATE = 640,
     VALIDATOR = 641,
     VALUE_P = 642,
     VALUES = 643,
     VARCHAR = 644,
     VARIADIC = 645,
     VARYING = 646,
     VERBOSE = 647,
     VERSION_P = 648,
     VIEW = 649,
     VIEWS = 650,
     VOLATILE = 651,
     WHEN = 652,
     WHERE = 653,
     WHITESPACE_P = 654,
     WINDOW = 655,
     WITH = 656,
     WITHIN = 657,
     WITHOUT = 658,
     WORK = 659,
     WRAPPER = 660,
     WRITE = 661,
     XML_P = 662,
     XMLATTRIBUTES = 663,
     XMLCONCAT = 664,
     XMLELEMENT = 665,
     XMLEXISTS = 666,
     XMLFOREST = 667,
     XMLPARSE = 668,
     XMLPI = 669,
     XMLROOT = 670,
     XMLSERIALIZE = 671,
     YEAR_P = 672,
     YES_P = 673,
     ZONE = 674,
     NULLS_FIRST = 675,
     NULLS_LAST = 676,
     WITH_ORDINALITY = 677,
     WITH_TIME = 678,
     POSTFIXOP = 679,
     UMINUS = 680
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 189 "gram.y"

	core_YYSTYPE		core_yystype;
	/* these fields must match core_YYSTYPE: */
	int					ival;
	char				*str;
	const char			*keyword;

	char				chr;
	bool				boolean;
	JoinType			jtype;
	DropBehavior		dbehavior;
	OnCommitAction		oncommit;
	List				*list;
	Node				*node;
	Value				*value;
	ObjectType			objtype;
	TypeName			*typnam;
	FunctionParameter   *fun_param;
	FunctionParameterMode fun_param_mode;
	FuncWithArgs		*funwithargs;
	DefElem				*defelt;
	SortBy				*sortby;
	WindowDef			*windef;
	JoinExpr			*jexpr;
	IndexElem			*ielem;
	Alias				*alias;
	RangeVar			*range;
	IntoClause			*into;
	WithClause			*with;
	A_Indices			*aind;
	ResTarget			*target;
	struct PrivTarget	*privtarget;
	AccessPriv			*accesspriv;
	struct ImportQual	*importqual;
	InsertStmt			*istmt;
	VariableSetStmt		*vsetstmt;



/* Line 1676 of yacc.c  */
#line 517 "gram.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif



#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



