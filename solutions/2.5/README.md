# Exercise 2.5
__Do you have to modify the function `idlen` (from
[Exercise 2.3](../2.3/README.md) to work properly if the locale changes from
`"C"`? If so, show the modified version. If not, explain why not.__

No, I do not. I don't need to because it only classifies characters using the
ctype.h functions. There is a comparison which does not use the ctype.h
functions, but it tests for a specific character rather than a class of
characters.
