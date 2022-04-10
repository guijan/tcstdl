# Exercise 5.6
__[Harder] Write a program that determines the values of the macros defined in
*<limits.h>* solely by performing arithmetic. Assume that you don't know the
underlying integer representations__

Strictly speaking, this is impossible for signed integer types. Signed integer
overflow is undefined behavior and the types may have less precision than one
less than their unsigned equivalents, so there's no relation between the maximum
of an unsigned type and the maximum/minimum of an unsigned type.

There was a floating-point equivalent of this exercise which requested
essentially the same thing and was also impossible to solve both with the
strictest terms of the C standard and the behavior of my particular
implementation.
The same happens with this exercise. The most popular C compilers of today, that
is *gcc* and *clang*, both assume signed integer overflow doesn't happen and
take advantage of it in their optimizations, so I'm unwilling to write an
exercise that I know can't be solved neither within the standard nor within my implementation's guarantees.

However, it's very easy to derive the maximum values of the the unsigned
integer types. You just have to use the bitwise negation operator on a `0` value
of that type. Here's the solution:
```c
unsigned char uchar_max = ~(unsigned char)0;
unsigned short ushrt_max = ~(unsigned short)0;
unsigned int uint_max = ~(unsigned int)0;
```
And so on for any unsigned type.
