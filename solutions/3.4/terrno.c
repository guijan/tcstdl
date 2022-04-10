/* test errno macro */
#include <assert.h>
#include <errno.h>
#include <math.h>
#include <stdio.h>
int main()
    {                          /* test basic workings of errno */
    int i;
    assert(errno == 0);
    perror("no error reported as");
    errno = ERANGE;
    assert(errno == ERANGE);
    perror("Range error reported as");
    errno = 0;
    assert(errno == 0);
    sqrt(-1.0);
    assert(errno == EDOM);
    perror("Domain error reported as");

    for (i = 0; i < _NERR; i++) {
        fprintf(stderr, "Error %d: ", i);
        errno = i;
        perror(NULL);
    }

    puts("SUCCESS testing <errno.h>");
    return (0);
    }
