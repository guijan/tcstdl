/* isprint function */
#include <ctype.h>
#include <limits.h>
#include <stdio.h>

int (isprint)(int c)
    {                          /* test for printable character */
    if (c < 0 || c > UCHAR_MAX)
        return (EOF);
    return (_Ctype[c] & (_DI|_LO|_PU|_SP|_UP|_XA));
    }
