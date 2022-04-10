# Exercise 4.2
__Can you alter *<yvals.h>* to adapt *<float.h>* and *xfloat.c* for the C
translator you use? If so, do so. If not, what else must you alter?__

It should just work as is, as my implementation uses IEEE 754. There is one
little caveat, *_DLONG* has to be set to `0`, which tells *xfloat.c* that our
`long double` is 64-bit.
