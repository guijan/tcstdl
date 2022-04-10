/* isdigit function */
#include <ctype.h>
#include <limits.h>
#include <stdio.h>

int (isdigit)(int c)
    {                                        /* test for digit */
    if (c < 0 || c > UCHAR_MAX)
        return (EOF);
    return (_Ctype[c] & _DI);
    }
