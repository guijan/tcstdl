/* iscntrl function */
#include <ctype.h>

int (iscntrl)(int c)
    {                         /* test for alphabetic character */
    return (_Ctype[c] & (_LO|_UP|_XA));
    }
