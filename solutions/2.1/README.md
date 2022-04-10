# Exercise 2.1
__List all the character classification functions that return a nonzero value
for each of the characters in the string: `"Hello, world!\n"`__

Here's my answer, per unique character:
* `'H'`: `isalnum()`, `isalpha()`, `isgraph()`, `isprint()`, `isupper()`.
* `'e'`: `isalnum()`, `isalpha()`, `isgraph()`, `islower()`, `isprint()`,
`isxdigit()`.
* `'l'`: `isalnum()`, `isalpha()`, `isgraph()`, `islower()`, `isprint()`.
* `'o'`: `isalnum()`, `isalpha()`, `isgraph()`, `islower()`, `isprint()`.
* `','`: `isgraph()`, `isprint()`, `ispunct()`.
* `' '`: `isprint()`, `isspace()`.
* `'w'`: `isalnum()`, `isalpha()`, `isgraph()`, `islower()`, `isprint()`.
* `'r'`: `isalnum()`, `isalpha()`, `isgraph()`, `islower()`, `isprint()`.
* `'d'`: `isalnum()`, `isalpha()`, `isgraph()`, `islower()`, `isprint()`,
`isxdigit()`.
* `'\n'`: `iscntrl()`, `isspace()`.
