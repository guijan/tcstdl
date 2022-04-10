# Exercise 2.8
__[Harder] A _multithread_ environment supports one or more threads of control
that share the same static storage. Dynamic storage (with storage class `auto`
or `register`) evolves separately for each thread. You want to implement a
library that appears _atomic_ to the threads-no function changes behavior, or
misbehaves, because another thread changes the state of library static storage.
You make each access to library static storage safe by surrounding it with
_synchronization code_, as in:__
```c
_lock();
p = _Ctype;
_unlock();
```
__Show how to change the code in this chapter to make it safe for multithread
operation. What does that do to performance? How can you improve performance
and still keep the code safe for multithread operation?__

The Standard C Library is an old book and predates both POSIX Threads and C
Threads. I don't know what operating system had a thread model that made the
code in the book so far unsafe.
When using either C Threads or POSIX Threads, the code is thread safe. It is
thread safe because it doesn't ever write to static storage outside its
initializers. The performance and thread scaling of the library is perfect
because it's thread safe without any synchronization.

The example in the question is the only thread unsafe part so far. Nowadays
POSIX gives us `uselocale()` to change the current thread's locale, thus solving
the problem by making the locale local state instead of global state.
