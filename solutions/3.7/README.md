# Exercise 3.7
__[Very Hard] Eliminate the need for `errno` in the Standard C library.
Consider every function that can store values in `errno`. Ensure that each has
a way to specify several different error return values.__

This is not really difficult, but it is laborious.
I've searched for "errno" in the C89 standard and implemented every function
that mentions it.
The results are in [m_math.c](m_math.c), [m_signal.c](m_signal.c),
[m_stdio.c](m_stdio.c), and [m_stdlib.c](m_stdlib.c).
