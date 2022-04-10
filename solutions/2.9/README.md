# Exercise 2.9
__[Very Hard] Modify the macros defined in `<ctype.h>` to work properly with
arbitrary argument values. Treat an argument value that is out of range the
same way you treat the value EOF.__

The solution is at [ctype.h](ctype.h).

I simply made the macros call the functions. This assumes a scenario where the
functions themselves cope with out of range input, as I have already written
such functions for a previous exercise.

This does make the program a bit slower as the ctype.h macros are now a function
calls, and the ctype.h macros are so simple in machine code form that the
function call overhead is about the same as the cost of their operations. I
believe this is the approach that is least likely to cause trouble in the
future. One could also move all the function definitions into the header, make
the functions `static`, and hope the compiler is intelligent enough to inline
every usage of the functions. I'm a follower of the idea that any program we
write in C is at least an order of magnitude faster than the equivalent program
written in any other language, and that so we should use this gap to write the
simplest and most obvious code we can and worry about algorithms, readability,
and maintainability instead.
