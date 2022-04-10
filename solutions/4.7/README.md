# Exercise 4.7
__[Harder] Write a C program that determines the values of the macros defined in
*<float.h>* solely by performing arithmetic. Assume that you don't know the
underlying floating-point representation.__

That would mean performing operations until you trigger implementation-defined
or undefined behavior. On my implementation, I get floating point exceptions.
