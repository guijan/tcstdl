# Exercise 1.1
__Write a version of assert.h, using the version of xassert.c in
[Figure 1.2](../Figure 1.2: xassert.c), that exactly matches the format shown
in the C Standard.__

Here's the C standard exerpt from the book:
> The message written might be of the form:
> Assertion failed: expression, file xyz, line nnn

My solution is at [assert.h](assert.h).

# Exercise 1.2
__Write a version of xassert.c, using the version of assert.h in Figure 1.1,
that exactly matches the format shown in the C Standard.__

My solution is at [xassert.c](xassert.c).

# Exercise 1.3
__What are the relative merits of the approaches in the previous two
exercises?__

Plauger seems to not have thought these exercises through.

The xassert.c from the book always prints `" -- assertion failed\n"`, thus
exercise 1.1 requires modifying xassert.c also, as otherwise output would not
match the standard's example. I'm sure it's possible for an implementation to
do something silly by redefining `stderr`, but that's just nonsensical.

On the other hand, writing a xassert.c that matches the standard's example
output while using the assert.h from the book would involve xassert.c parsing
the string it receives. This is actually an impossible task. You cannot
differentiate the colon character that separates the filename from the line and the
stringified test. Both could contain the colon. In fact, the entire string
passed to `_Assert()` could be a valid filename. How would one separate the
arguments to `_Assert()` after they have been joined in a string?

Because of this, my solutions to exercises 1.1 and 1.2 rely on each other. This
is my best approximation of what the exercises really want.
As to what the relative merits of the approaches in the previous two exercises
are, I would say that if you take the exercises literally, they are none.
Otherwise, it's an open problem, but Plauger's implementation seems good.
