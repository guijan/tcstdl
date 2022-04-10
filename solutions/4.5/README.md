# Exercise 4.5
__Why is the header *<yvals.h>* included directly in *<float.h>* (as opposed to
including it only in *xfloat.c*)? Alter the code in this chapter to eliminate
the need.__

There's no particular reason for its inclusion. However, It's a bad idea to
include it because the header simply doesn't need *yvals.h*. The macro
`FLT_ROUNDS` resolves to a `_FRNDS` identifier which is presumably declared in
*yvals.h*, and if it is a macro, including *yvals.h* would be necessary. But the
standard says `FLT_ROUNDS` doesn't have to be a macro, so I declared it as an
extern int variable in *float.h*.

The solution is at [xfloat.c](xfloat.c) and [float.h](float.h).
