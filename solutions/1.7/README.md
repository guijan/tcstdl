# Exercise 1.7
__[Very hard] Some C translators provide a *source-level interactive debugger*.
Such debuggers often let you set conditional breakpoints at various points
within the executing program. Locate such a C translator and explore what is
necessary to get <assert.h> to work with the debugger. Your goals are, in
order of increasing difficulty:__
* __Have control revert to the debugger whenever an assertion fails. Execution
should continue with the statement following the offending assert macro
invocation.__
* __Have assert generate no inline code. It should pass instructions to the
source-level debugger instead.__
* __Generate code at the same level of optimization whether or not assert
macros appear, in either passive or active form.__
* __Have the modified assert accept test expressions of arbitrary complexity.__

__Why would you want each of these capabilities?__
