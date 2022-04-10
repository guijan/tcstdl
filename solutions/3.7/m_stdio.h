#include <stdio.h>
#include <errno.h>

int
m_fgetpos(fpos_t *pos, FILE *stream)
{
	int err, rval;
	fpos_t tmp;
	err = errno;
	errno = 0;
}
