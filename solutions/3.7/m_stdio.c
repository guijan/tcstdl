#include <stdio.h>
#include <errno.h>

int
m_fgetpos(fpos_t *pos, FILE *stream)
{
	int err, rval;
	fpos_t tmp;
	err = errno;
	errno = 0;

	if (fgetpos(stream, &tmp) != 0) {
		rval = errno;
	} else {
		rval = 0;
		*pos = tmp;
	}

	errno = err;
	return (rval);
}

int
m_fsetpos(FILE *stream, const fpos_t *pos)
{
	int err, rval;
	err = errno;
	errno = 0;

	rval = fsetpos(stream, pos) != 0 ? errno : 0;

	errno = err;
	return (rval);
}

int
m_ftell(long *res, FILE *stream)
{
	int err, rval;
	int tmp;
	err = errno;
	errno = 0;

	if ((tmp = ftell(stream)) == -1) {
		rval = errno;
	} else {
		rval = 0;
		*res = tmp;
	}

	errno = err;
	return (rval);
}
