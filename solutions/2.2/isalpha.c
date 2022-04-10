/* isalpha function */
#include <ctype.h>
#include <limits.h>
#include <stdio.h>

int (isalpha)(int c)
    {                         /* test for alphabetic character */
    if (c < 0 || c > UCHAR_MAX)
        return (EOF);
    return (_Ctype[c] & (_LO|_UP|_XA));
    }
