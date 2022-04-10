# Exercise 1.5
__[Harder] Write a handler for the signal handler SIGABRT that writes the
prompt: _Continue (y/n)?_ to the standard error stream and reads the response
from the standard input stream. If the response is yes (in either uppercase or
lowercase), the handler should reestablish itself and return control to the
abort function. Chapter 9: <signal.h> describes signals. Chapter 13:
<stdlib.h> describes the abort function.
Why would you want this capability?__

The code is at [handler.c](handler.c).

I assume a convenient implementation that does what I want in the code.
The C standard is very loose on its description of how signals work. Just to
solve this exercise, I have to make assumptions about my C implementation, for
instance whether I can even use `fgets()` to read from `stdin` (or `fgetc()`,
or `fread()`, or any other function that reads a `FILE *`). The very wording
of the question assumes a specific implementation where signal handlers have to
reinstall themselves if they remain.
In fact, whether my signal handler will be executed at all is
implementation-defined, a valid implementation can refuse to install a
`SIGABRT` handler.

Why would I want all of this? I see little reason for it, assertions are to
guarantee my assumptions in the code if I am to follow the book, so I see
little point in watching the program's continued execution while the
assumptions it was written around are broken.
