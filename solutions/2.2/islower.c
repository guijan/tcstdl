/* islower function */
#include <ctype.h>
#include <limits.h>
#include <stdio.h>

int (islower)(int c)
    {                          /* test for lowercase character */
    if (c < 0 || c > UCHAR_MAX)
        return (EOF);
    return (_Ctype[c] & (_DI|_LO|_PU|_UP|_XA));
    }
