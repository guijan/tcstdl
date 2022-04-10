/* isxdigit function */
#include <ctype.h>
#include <limits.h>
#include <stdio.h>

int (isxdigit)(int c)
    {                            /* test for hexadecimal digit */
    if (c < 0 || c > UCHAR_MAX)
        return (EOF);
    return (_Ctype[c] & _XD);
    }
