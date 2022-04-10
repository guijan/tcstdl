# Exercise 4.4
__Consider the following code sequence:__
```c
long double ld = 1.0;
double a[N];

for (i = 0; i < n; ++i)
    ld *= a[i];
```

This suffers from the same issue as [Exercise 4.3](../4.3/README.md).
