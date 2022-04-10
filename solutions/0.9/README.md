# Exercise 0.9
__[Very hard] Describe an implementation that tolerates standard headers
being included inside function definitions, or at any arbitrary place within
a source file.__

The implementation would have to avoid function definitions in its standard
headers. Functions can be declared inside other functions, but they can't be
defined inside other functions.
