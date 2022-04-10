/* tolower function */
#include <ctype.h>
#include <limits.h>
#include <stdio.h>

int (tolower)(int c)
    {                        /* convert to lowercase character */
    if (c < 0 || c > UCHAR_MAX)
        return (EOF);
    return (_Tolower[c]);
    }
