# Exercise 3.3
__Under what circumstances might you care exactly which error code was last
reported?__

Some errors are easily recoverable. For instance, `errno` may be set to `EINTR`
by the `read()` and `write()` functions, and recovery is as trivial as trying
again.

Other errors are not entirely fatal, for instance if one attempts to create a
file with a filename provided by the user and it already exists, `open()` can
return error and set `errno` to `EEXIST`, in which case one could prompt the
user for a differnt filename.

Other errors aren't exactly errors, non-blocking i/o usually returns error
and sets `errno` to `EWOULDBLOCK` if the operation would block. `send()`
can set `errno` to `ECONNREFUSED` if the other side rejects the connection.
