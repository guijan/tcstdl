# Exercise 0.1
__Which of the following are good reasons for including a function in a
library?__
1. __The function is widely used.__
2. __Performance of the function can be improved dramatically by generating
inline code.__
3. __The function is easy to write and can be written several different ways.__
4. __The function is hard to write correctly.__
5. __Writing the function poses several interesting challenges.__
6. __The function proved very useful in a past application.__
7. __The function performs a number of services that are loosely related.__

I pick 1, 4.
I can see the value of 7. Isn't `printf()` a good interface? Regardless, such
interfaces should be written sparingly.
