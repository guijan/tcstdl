/* assert.h standard header */
#undef assert                   /* remove existing definition */

#ifdef NDEBUG
    #define assert(test)    ((void)0)
#else                           /* NDEBUG not defined */
    void _Assert(char *);
        /* macros */
    #define _STR(x) _VAL(x)
    #define _VAL(x) #x
    /*
     * This is the important part of the solution. The xassert.c in the book
     * will append " -- assertion failed\n" to the string passed to _Assert(),
     * so I had to edit xassert.c too.
     */
    #define assert(test)    ((test) ? (void) 0 \
        : _Assert("Assertion failed: " #test ", file " __FILE__ ", line " \
                  _STR(__LINE__ "\n"))
#endif
