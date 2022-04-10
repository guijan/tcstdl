/* errno.h standard header */
#ifndef _ERRNO
#define _ERRNO
#ifndef _YVALS
#include <yvals.h>
#endif
        /* error codes */
#define EDOM _EDOM
#define ERANGE _ERANGE
#define EFPOS _EFPOS
    /* ADD YOURS HERE */
#define _NERR _ERRMAX              /* one more than last code */
        /* declarations */

#if !defined(errno)
#define errno (*_Errno())
int *_Errno(void);
#endif

#endif
