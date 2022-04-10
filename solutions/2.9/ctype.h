/* ctype.h standard header */
#ifndef _CTYPE
#define _CTYPE
        /* _Ctype code bits */
#define _XA     0x200 /* extra alphabetic */
#define _XS     0x100 /* estra space */
#define _BB     0x80 /* BEL, BS, etc. */
#define _CN     0x40 /* Cr, FF, HT, NL, VT */
#define _DI     0x20 /* '0'-'9' */
#define _LO     0x10 /* 'a'-'z' */
#define _PU     0x08 /* punctuation */
#define _SP     0x04 /* space */
#define _UP     0x02 /* 'A'-'Z' */
#define _XD     0x01 /* '0'-'9', 'A'-'F', 'a'-'f' */
        /* declarations */
int isalnum(int), isalpha(int), iscntrl(int), isdigit(int);
int isgraph(int), islower(int), isprint(int), ispunct(int);
int isspace(int), isupper(int), isxdigit(int);
int tolower(int), toupper(int);
extern const short *_Ctype, *_Tolower, *_Toupper;
        /* macro overrides */
#define isalnum(c)  ((isalnum)(c))
#define isalpha(c)  ((isalpha)(c))
#define iscntrl(c)  ((iscntrl)(c))
#define isdigit(c)  ((isdigit)(c))
#define isgraph(c)  ((isgraph)(c))
#define islower(c)  ((islower)(c))
#define isprint(c)  ((isprint)(c))
#define ispunct(c)  ((ispunct)(c))
#define isspace(c)  ((isspace)(c))
#define isupper(c)  ((isupper)(c))
#define isxdigit(c) ((isxdigit)(c))
#define tolower(c)  ((tolower)(c))
#define toupper(c)  ((toupper)(c))
#endif
