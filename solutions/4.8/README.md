# Exercise 4.8
__[Very Hard] Alter the program from the previous exercise to work safely even
on an implementation that aborts execution on floating-point overflow. Assume
that the program cannot regain control once overflow occurs.__

This doesn't seem possible in C. You need the floating point limits defined by
the standard library to tell if an operation overflows in the first place.
