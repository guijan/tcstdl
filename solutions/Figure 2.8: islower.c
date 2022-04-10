/* islower function */
#include <ctype.h>

int (islower)(int c)
    {                          /* test for lowercase character */
    return (_Ctype[c] & (_DI|_LO|_PU|_UP|_XA));
    }
