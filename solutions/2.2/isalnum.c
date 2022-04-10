/* isalnum function */
#include <ctype.h>
#include <limits.h>
#include <stdio.h>

int (isalnum)(int c)
    {                       /* test for alphanumeric character */
    if (c < 0 || c > UCHAR_MAX)
        return (EOF);
    return (_Ctype[c] & (_DI|_LO|_UP|_XA));
    }
