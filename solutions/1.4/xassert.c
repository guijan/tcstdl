/* _Assert function */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

void _Assert(char *mesg, int success)
    {                       /* print assertion message and abort */
    char *trailer;
    if (success)
        trailer = " -- assertion failed\n";
    else
        trailer = " -- assertion succeeded\n";
    fputs(mesg, stderr);
    fputs(trailer, stderr);
    #if !defined(NDEBUG)
        abort();
    #endif
    }
