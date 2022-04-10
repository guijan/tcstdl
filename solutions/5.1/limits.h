/* limits.h standard header -- 8-bit version */
#ifndef _LIMITS
#define _LIMITS

#define _ILONG
#define _MBMAX 4 /* utf-8 is at max 4 bytes */
#define _C2 1 /* we're 2's complement */

        /* char properties */
#define CHAR_BIT    8
#if _CSIGN
#define CHAR_MAX    127
#define CHAR_MIN    (-127-_C2)
#else
#define CHAR_MAX    255
#define CHAR_MIN    0
#endif
        /* int properties */
#ifdef _ILONG
#define INT_MAX     2147483647
#define INT_MIN     (-2147483647-_C2)
#define UINT_MAX    4294967295
#else
#define INT_MAX     32767
#define INT_MIN     (-32767-_C2)
#define UINT_MAX    65535
#endif
        /* long properties */
#define LONG_MAX    9223372036854775807
#define LONG_MIN    (9223372036854775807-_C2)
        /* multibyte properties */
#define MB_LEN_MAX  _MBMAX
#define SCHAR_MAX   127
#define SCHAR_MIN   (-127-_C2)
        /* short properties */
#define SHRT_MAX    32767
#define SHRT_MIN    (-32767-_C2)
        /* unsigned properties */
#define UCHAR_MAX   255
#define ULONG_MAX   18446744073709551615
#define USHRT_MAX   65535
#endif
