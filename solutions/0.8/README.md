# Exercise 0.8
__[Very Hard] Describe an implementation that tolerates keywords being masked by
macros when you include standard headers.__

This appears impossible unless you write a compiler that treats standard
headers as a special case.
You can undefine the macros at the top of your header, but you can't redefine
them to their original text at the bottom of the header. An implementation that
`#undef`s macro identifiers matching keywords would tolerate the keywords being
masked, but it would also break whatever silly thing the program is doing.
