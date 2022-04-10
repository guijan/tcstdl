/* assert.h standard header */
#undef assert                   /* remove existing definition */

void _Assert(char *, int);
    /* macros */
#define _STR(x) _VAL(x)
#define _VAL(x) #x
#define assert(test)    (_Assert(__FILE__ ":" _STR(__LINE__) " " #test, (test)))
