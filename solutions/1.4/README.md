# Exercise 1.4
__Write a version of assert.h and xassert.c that prints *all* assertions. Why
would you want to use this version?__

The code is at [assert.h](assert.h) and [xassert.c](xassert.c).
This version is pretty simple. It always prints the assertion followed by
a message describing whether the assertion succeeded or not, but it only
calls `abort()` if the assertion fails and `NDEBUG` is not defined.

Writing such an implementation seems to be a lot like `printf()`-debugging to
me. I would guess a programmer would want such an implementation if he wants
the program to produce more verbose informative output, the same reason we
debug with `printf()` at times.
