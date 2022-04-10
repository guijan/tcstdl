#include <errno.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>

int
m_strtod(double *res, const char *nptr, char **endptr)
{
	int err, rval;
	double tmpd;
	err = errno;
	errno = 0;

	tmpd = strtod(nptr, endptr);
	if (((tmpd == HUGE_VAL || tmpd == -HUGE_VAL) && errno == ERANGE)
	    || (tmpd == 0 && errno == ERANGE)) {
		rval = errno;
	} else {
		rval = 0;
		*res = tmpd;
	}

	errno = err;
	return (rval);
}

int
m_strtol(long *res, const char *nptr, char **endptr, int base)
{
	int err, rval;
	long tmp;
	err = errno;
	errno = 0;

	tmp = strtol(nptr, endptr, base);
	if ((errno == ERANGE && (tmp == LONG_MAX || tmp == LONG_MIN))
	    || (tmp > INT_MAX || tmp < INT_MIN)) {
		rval = errno;
	} else {
		rval = 0;
		*res = tmp;
	}

	errno = err;
	return (rval);
}

int
m_strtoul(unsigned long *res, const char *nptr, char **endptr, int base)
{
	int err, rval;
	unsigned long tmp;
	err = errno;
	errno = 0;

	tmp = strtoul(nptr, endptr, base);
	if (tmp == ULONG_MAX && errno == ERANGE) {
		rval = errno;
	} else {
		rval = 0;
		*res = tmp;
	}

	errno = err;
	return (rval);
}
