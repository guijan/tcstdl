# Exercise 4.1
__Determine the parameters that characterize floating-point arithmetic for the C
translator you use. Do they conform to the IEEE 754 standard?__

Yes. OpenBSD 7.0 amd64 uses IEEE 754 math. float is 32-bit, double and long
double are 64-bit. It seems the free unix systems of today are all the same in
this regard.
However, it appears that the average i386 C implementation uses the 80-bit
format for long double.
