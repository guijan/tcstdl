#include <stdlib.h>
#include <stdio.h>

#define x(n) (n)

struct x {
	int x;
};

int
main(void)
{
	void *x;

	if ((x = malloc(sizeof(struct x))) == NULL)
		return (1);

	((struct x *)x)->x = x(5);

	printf("%d\n", ((struct x *)x)->x);

	free(x);
	return (0);
}
