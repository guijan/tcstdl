# Exercise 2.2
__Modify the functions declared in <ctype.h> to work properly with arbitrary
argument values. Treat an argument value that is out of range the same way
you treat the value EOF. Describe at least two ways to report an error for an
argument value out of range.__

Passing an invalid argument to the ctype.h functions results in undefined
behavior, so it's easy to come up with extensions to report an invalid
argument. The obvious one would be to set `errno` to a suitable value like
`EINVAL` or `ERANGE` when the passed value is out of range. Another one would be
to return a specific numeric value which signifies there was an error.

Here's a list of all the solutions:
[isalnum.c](isalnum.c) [isalpha.c](isalpha.c) [iscntrl.c](iscntrl.c)
[isdigit.c](isdigit.c) [isgraph.c](isgraph.c) [islower.c](islower.c)
[isprint.c](isprint.c) [ispunct.c](ispunct.c) [isspace.c](isspace.c)
[isupper.c](isupper.c) [isxdigit.c](isxdigit.c) [tolower.c](tolower.c)
[toupper.c](toupper.c).
