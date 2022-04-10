# Exercise 5.5
__Can an implementation of Standard C have `sizeof (long)` equal to one byte?
What are some of the peculiar properties of such an implementation?__

Yes, C allows for this.

It complicates error checking `getchar()` and its related functions. A
`sizeof(long)` of 1 implies `int` is also 1 byte. If `char` is unsigned, This
means the entire range of numbers representable by `int` is used by characters,
and in turn this means `EOF` is a valid character.  One has to set `errno` to
`0` and then check if it was set if and only if the return value is `EOF`.

Casting any signed type to any signed type or any unsigned type to any unsigned
type always preserves the value, at least in C89 where the biggest type is
`long`.

No struct containing only integer types ever has any padding.

The machine (as far as C is concerned) doesn't have an endianness.
