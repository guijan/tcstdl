# Exercise 0.2
__Write a (correct) program that contains the line:
`x: ((struct x*)x)->x = x(5);`__

My solution is at [program.c](program.c).

__Describe the five distinct uses of x. Can you make a case for using any two
of these meanings at once in a sensible program?__

`x` is the identifier of a struct type, the identifier of a member of this
struct, the identifier of a variable, and a function-like macro. I do not see a
5th distinct use. Perhaps this is an error in the book?

Naming a particular variable after its struct type doesn't seem unreasonable to
me, I would also give the same name to the member of a struct that points to a
struct of the same type, but to me doing it in the other cases could lead to
confusion, and macros in specific would be very error prone.
