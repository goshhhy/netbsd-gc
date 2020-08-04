#ifndef _yy_defines_h_
#define _yy_defines_h_

#define T_LBRACE 257
#define T_RBRACE 258
#define T_LBRACK 259
#define T_RBRACK 260
#define T_LPARN 261
#define T_RPARN 262
#define T_STROP 263
#define T_UNOP 264
#define T_INCDEC 265
#define T_SIZEOF 266
#define T_BUILTIN_OFFSETOF 267
#define T_TYPEOF 268
#define T_EXTENSION 269
#define T_ALIGNOF 270
#define T_MULT 271
#define T_DIVOP 272
#define T_ADDOP 273
#define T_SHFTOP 274
#define T_RELOP 275
#define T_EQOP 276
#define T_AND 277
#define T_XOR 278
#define T_OR 279
#define T_LOGAND 280
#define T_LOGOR 281
#define T_QUEST 282
#define T_COLON 283
#define T_ASSIGN 284
#define T_OPASS 285
#define T_COMMA 286
#define T_SEMI 287
#define T_ELLIPSE 288
#define T_REAL 289
#define T_IMAG 290
#define T_GENERIC 291
#define T_NORETURN 292
#define T_SCLASS 293
#define T_TYPE 294
#define T_QUAL 295
#define T_SOU 296
#define T_ENUM 297
#define T_CASE 298
#define T_DEFAULT 299
#define T_IF 300
#define T_ELSE 301
#define T_SWITCH 302
#define T_DO 303
#define T_WHILE 304
#define T_FOR 305
#define T_GOTO 306
#define T_CONTINUE 307
#define T_BREAK 308
#define T_RETURN 309
#define T_ASM 310
#define T_SYMBOLRENAME 311
#define T_PACKED 312
#define T_ATTRIBUTE 313
#define T_AT_ALIAS 314
#define T_AT_ALIGNED 315
#define T_AT_ALWAYS_INLINE 316
#define T_AT_BOUNDED 317
#define T_AT_BUFFER 318
#define T_AT_COLD 319
#define T_AT_CONSTRUCTOR 320
#define T_AT_DEPRECATED 321
#define T_AT_FORMAT 322
#define T_AT_FORMAT_ARG 323
#define T_AT_FORMAT_PRINTF 324
#define T_AT_FORMAT_SCANF 325
#define T_AT_FORMAT_STRFMON 326
#define T_AT_FORMAT_STRFTIME 327
#define T_AT_FORMAT_SYSLOG 328
#define T_AT_GNU_INLINE 329
#define T_AT_MAY_ALIAS 330
#define T_AT_MINBYTES 331
#define T_AT_MODE 332
#define T_AT_NOINLINE 333
#define T_AT_NONNULL 334
#define T_AT_NORETURN 335
#define T_AT_NO_INSTRUMENT_FUNCTION 336
#define T_AT_PACKED 337
#define T_AT_PCS 338
#define T_AT_PURE 339
#define T_AT_RETURNS_TWICE 340
#define T_AT_SECTION 341
#define T_AT_SENTINEL 342
#define T_AT_STRING 343
#define T_AT_TUNION 344
#define T_AT_UNUSED 345
#define T_AT_USED 346
#define T_AT_VISIBILITY 347
#define T_AT_WEAK 348
#define TBUILTIN_SIZEOF 349
#define T_NAME 350
#define T_TYPENAME 351
#define T_CON 352
#define T_STRING 353
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	int	y_int;
	val_t	*y_val;
	sbuf_t	*y_sb;
	sym_t	*y_sym;
	op_t	y_op;
	scl_t	y_scl;
	tspec_t	y_tspec;
	tqual_t	y_tqual;
	type_t	*y_type;
	tnode_t	*y_tnode;
	range_t	y_range;
	strg_t	*y_strg;
	pqinf_t	*y_pqinf;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;

#endif /* _yy_defines_h_ */
