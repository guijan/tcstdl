# Exercise 4.3
__Consider the following code sequence:__
```c
double d = 1.0;
float a[N];

for (i = 0; i < n; ++i)
    d *= a[i];
```
__In IEEE 754 floating-point arithmetic, how large can *N* be before you have to
worry about overflow in the computation of *d*?__

Is this a trick question or perhaps errata in the book? That's undefined
behavior, the array *a* was not initialized. I'm also assuming *N* and *n*
differing in case is an OCR error.
