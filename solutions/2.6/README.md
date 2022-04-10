# Exercise 2.6
__Do you have to modify the function `detab` (from
[Exercise 2.4](../2.4/README.md) to work properly if the locale changes from
`"C"`? If so, show the modified version. If not, explain why not.__

I do not. The function only classifies characters with the ctype.h functions.
While it does test for a few specific characters directly, this is not done
for the purposes of classification.
