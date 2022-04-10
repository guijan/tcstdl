# Exercise 5.3
__Consider the following code sequence:__
```c
int in = 1.0;
short a[N];

for (i = 0; i < n; ++i)
    in *= a[i];
```
__For the C translator you use, how large can *n* be before you have to worry
about overflow in the computation of *in*? How large can *N* be in a program
intended to run with an arbitrary C translator?__

This is undefined behavior. The array `a` is not initialized.
