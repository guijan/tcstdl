/* toupper function */
#include <ctype.h>
#include <limits.h>
#include <stdio.h>

int (toupper)(int c)
    {                        /* convert to uppercase character */
    if (c < 0 || c > UCHAR_MAX)
        return (EOF);
    return (_Toupper[c]);
    }
