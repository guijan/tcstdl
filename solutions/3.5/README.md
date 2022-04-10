# Exercise 3.5
__Assume you have the function `int _Getfcc(void)` that returns `0`, `EDOM`, or
`ERANGE` to reflect the last floating-point error (if any) since the previous
call to the function. Write a version of `<errno.h>` that uses this function to
collect floating-point errors only when the program uses the value stored in
`errno`.__

The solution is at [errno.c](errno.c).
