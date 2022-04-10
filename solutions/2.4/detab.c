#include <ctype.h>
#include <stdio.h>

size_t
detab(char *dst, const char *src)
{
	enum {tabcol = 4}; /* A tab is tabcol columns. */
	size_t i, j;
	char *odst = dst;

	i = 0;
	for (; *src != '\0'; src++) {
		if (isprint((unsigned char)*src)) {
			i++;
		} else if (*src == '\b') {
			/* Do we consider that a backspace can move the cursor a
			 * line up? This code doesn't.
			 */
			if (i > 0)
				i--;
		} else if (*src == '\r' || *src == '\n') {
			i = 0;
		}

		if (*src == '\t') {
			j = i % tabcol;
			i += j;
			while (j < tabcol) {
				*dst++ = ' ';
				j++;
			}
		} else {
			*dst++ = *src;
		}
	}

	return (dst - odst);
}
