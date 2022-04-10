#include <ctype.h>
#include <stddef.h>

size_t
idlen(const char *s)
{
	size_t rval;

	rval = 0;
	if (isalpha((unsigned char)*s)) {
		rval++;
		s++;
		for (; *s != '\0'; s++) {
			if (isalnum((unsigned char)*s) || *s == '_')
				rval++;
			else
				return (0);
		}
	}
	return (rval);
}
