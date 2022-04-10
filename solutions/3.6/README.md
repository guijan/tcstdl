# Exercise 3.6
__[Harder] Write a version of <errno.h> that queues values stored in `errno`
and returns them in order when the program uses the value stored in `errno`.
When is it safe to remove a value from the queue?__

My answer is at [errno.c](errno.c).

It's safe to remove a value from the queue when there is a value in the queue,
of course. Such a C library would conflict with the standard, however. The C
standard seems to implicitly state repeatedly getting `errno`'s value after
there was an error returns the same error value, it's only not guaranteed to
be the same after you call a function that may set it, even if it succeeds.
Popping errors off a queue would mean you could get a different error every
time, even if there were no function calls between each pop.
