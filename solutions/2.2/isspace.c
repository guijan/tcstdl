/* isspace function */
#include <ctype.h>
#include <limits.h>
#include <stdio.h>


int (isspace)(int c)
    {                            /* test for spacing character */
    if (c < 0 || c > UCHAR_MAX)
        return (EOF);
    return (_Ctype[c] & (_CN|_SP|_XS));
    }
