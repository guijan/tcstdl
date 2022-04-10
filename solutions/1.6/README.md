# Exercise 1.6
__[Harder] Write a handler for the signal SIGABRT that executes a longjmp to
a setmp at the top of main. Chapter 8: <setjmp.h> describes the longjmp
and setjmp functions.
Why would you want this capability? Describe a safe discipline for
initializing static storage in a program that uses this capability.__

The solution is in [program.c](program.c).

This perhaps makes sense for a C program that does not run on top of an OS.
It would essentially be a soft reset.

In this kind of program, It would be best to not use initializers when declaring
static storage, and then initialize all the global static variables with
assignments after the `setjmp()` call. This creates trouble with static
variables inside functions, as global state would need to be kept to tell
whether they've been initialized. This entire approach is very clunky and it
would be best to simply not use `longjmp()` as most C programmers seem to do.
