# Exercise 5.4
__Consider the following code sequence:__
```c
long lo = 1.0;
int a[N];

for (i = 0; i < n; ++i)
    lo *= a[i];
```
__For the C translator you use, how large can *n* be before you have to worry
about overflow in the computation of *lo*? How large can *N* be in a program
intended to run with an arbitrary C translator?__

Undefined behavior just like [Exercise 5.3](../5.3/README.md).
