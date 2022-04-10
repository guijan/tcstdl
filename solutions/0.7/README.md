# Exercise 0.7
__[Harder] If a standard header can define arbitrary names, what must a
programmer do to ensure that a large program runs correctly when moved
from another implementation?__

A standard header can define arbitrary names, but this would make a
particularly hostile implementation. The C standard reserves identifiers for
C implementations to use, thus a C programmer only needs to avoid reserved
identifiers in actual practice.
