# Exercise 0.3
__Consider the sequence:__
```c
double a[] = {1.0, 2.0};
double *p = a;
double sqr(x) {return (x*x); }
#define sqr(x) x*x
```

__What is the result of each of the following expressions?__
1. __`sqr(3.0)`__

The result is 9.0. It's a floating-point number, though its exact type is
up to the individual implementation.

2. __`sqr(3)`__

The result is 9.

3. __`sqr(3+3)`__

The result is 36.

4. __`!sqr(3)`__

The result is 0.

5. __`sqr(*p++)`__

This is undefined behavior. An unsequenced access to `*p` happens here.
It does however run and return 2 on my implementation, this might not be the
desired result.

6. __`(sqr) (3+3)`__

The result is 36.0. Its type depends on the implementation as with number 1.

# Exercise 0.4
__Which of the above expressions do not behave the same as the function call?__

2 and 3 because they return `int`s, not `double`s.
Also number 5 because it triggers undefined behavior.

# Exercise 0.5
__Which of the above expressions can be repaired by altering the macro
definition? Which cannot?__

Here's a macro that behaves the same as the function for 2 and 3:
`#define sqr(x) ((double)((int)(x) * (int)(x)))`

5 doesn't seem to be repairable.
