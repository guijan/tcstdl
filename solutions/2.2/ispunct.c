/* ispunct function */
#include <ctype.h>
#include <limits.h>
#include <stdio.h>

int (ispunct)(int c)
    {                        /* test for punctuation character */
    if (c < 0 || c > UCHAR_MAX)
        return (EOF);
    return (_Ctype[c] & _PU);
    }
