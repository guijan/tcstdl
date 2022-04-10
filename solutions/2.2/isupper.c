/* isupper function */
#include <ctype.h>
#include <limits.h>
#include <stdio.h>

int (isupper)(int c)
    {                          /* test for uppercase character */
    if (c < 0 || c > UCHAR_MAX)
        return (EOF);
    return (_Ctype[c] & _UP);
    }
