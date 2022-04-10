# Exercise 4.6
__You are given the function `_Getrnd(void)` that returns the current
floating-point rounding status. Alter the macro `FLT_RADIX` to return the
current status.__

I'm guessing this is supposed to be about the macro `FLT_ROUNDS` because
`FLT_RADIX` is the base of floating point numbers and not the rounding mode.

The solution is at [float.h](float.h).
