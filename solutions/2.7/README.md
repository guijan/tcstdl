# Exercise 2.7
__[Harder] You want to implement a library that can be shared. Describe how
you would alter the code in this chapter for each of the following mechanisms:__
- __The translator can be instructed to place all writable static storage in the
library in a section that is copied into each process that uses the library.__

No alteration needed.

- __You can add fields to a structure called `_Lib_stat`, declared in
`<lib-stat.h>`. You can add initializers to the definition of the structure in
the file libstat.c.__

The easiest way would be to declare yet another struct and make a pointer to it
a member of `_Lib_stat`, leaving its definition up to the user.

- __You can add fields to astructure called `_Lib_stat`, as before. You access
the structure only through a pointer to the structure returned by a call of the
form `_FP()`. The function `_FP` is declared in `<libstat.h>`__

Doesn't change anything.
