#include <errno.h>
#include <math.h>

/* Quotes from section 7.5 of the C89 standard, referring to the math library:
 *  For all functions, a domain error occurs if an input argument is outside the
 *  domain over which the mathematical function is defined.
 *
 *  Similarly, a range error occurs if the result of the function cannot be
 *  represented as a double value.
 *
 * Quote from section 7.1.4 of the C89 standard:
 *  The value of errno may be set to nonzero by a library function call whether
 *  or not there is an error, provided the use of errno is not documented in the
 *  description of the function in this International Standard.
 *
 *
 * Thus, my interpretation of the C89 standard is that every single math
 * function can set errno to EDOM, and every single math function can
 * "similarly" set errno to ERANGE. At the same time, my interpretation is that
 * errno can only be set on success to a value that a function is not documented
 * to set.
 * The conclusion is that because all math functions may set errno to EDOM or
 * ERANGE, they'll only ever set it to either value on error, so I merely need
 * to set errno to 0 before calling the function and then check if it was set to
 * either after, rather than doing any complicated checking with HUGE_VAL and
 * the like.
 */

/* m_1arg: error check 1-argument math function
 *
 * Most math functions have the same prototype and all of them can return the
 * same 2 errors, so it's easy to generalize error checking with a function
 * pointer.
 */
static int
m_1arg(double (*math)(double), double *res, double x)
{
	int err, rval;
	double tmp;
	err = errno;
	errno = 0;

	tmp = math(x);
	if (errno == ERANGE || errno == EDOM) {
		rval = errno;
	} else {
		rval = 0;
		*res = tmp;
	}

	errno = err;
	return (rval);
}

/* m_2arg: error check 2-argument math function
 *
 * This is m_1arg for the few 2-argument math functions.
 */
static int
m_2arg(double (*math2)(double, double), double *res, double x, double y)
{
	int err, rval;
	double tmp;
	err = errno;
	errno = 0;

	tmp = math2(x, y);
	if (errno == ERANGE || errno == EDOM) {
		rval = errno;
	} else {
		rval = 0;
		*res = tmp;
	}

	errno = err;
	return (rval);
}

int
m_acos(double *res, double x)
{
	return (m_1arg(acos, res, x));
}

int
m_asin(double *res, double x)
{
	return (m_1arg(asin, res, x));
}

int
m_atan(double *res, double x)
{
	return (m_1arg(atan, res, x));
}

int
m_atan2(double *res, double x, double y)
{
	return (m_2arg(atan2, res, x, y));
}

int
m_cos(double *res, double x)
{
	return (m_1arg(cos, res, x));
}

int
m_sin(double *res, double x)
{
	return (m_1arg(sin, res, x));
}

int
m_tan(double *res, double x)
{
	return (m_1arg(tan, res, x));
}

int
m_cosh(double *res, double x)
{
	return (m_1arg(cosh, res, x));
}

int
m_sinh(double *res, double x)
{
	return (m_1arg(sinh, res, x));
}

int
m_tanh(double *res, double x)
{
	return (m_1arg(tanh, res, x));
}

int
m_exp(double *res, double x)
{
	return (m_1arg(exp, res, x));
}

int
m_frexp(double *res, int *exp, double value)
{
	int err, rval;
	double tmpd;
	int tmpi;
	err = errno;
	errno = 0;

	tmpd = frexp(value, &tmpi);
	if (errno == ERANGE || errno == EDOM) {
		rval = errno;
	} else {
		rval = 0;
		*res = tmpd;
		*exp = tmpi;
	}

	errno = err;
	return (rval);
}

int
m_ldexp(double *res, double x, int exp)
{
	int err, rval;
	double tmp;
	err = errno;
	errno = 0;

	tmp = ldexp(x, exp);
	if (errno == ERANGE || errno == EDOM) {
		rval = errno;
	} else {
		rval = 0;
		*res = tmp;
	}

	errno = err;
	return (rval);
}

int
m_log(double *res, double x)
{
	return (m_1arg(log, res, x));
}

int
m_log10(double *res, double x)
{
	return (m_1arg(log10, res, x));
}

int
m_modf(double *iptr, double *fptr, double value)
{
	int err, rval;
	double itmp, ftmp;
	err = errno;
	errno = 0;

	ftmp = modf(value, &itmp);
	if (errno == ERANGE || errno == EDOM) {
		rval = errno;
	} else {
		rval = 0;
		*iptr = itmp;
		*fptr = ftmp;
	}

	errno = err;
	return (rval);
}

int
m_pow(double *res, double x, double y)
{
	return (m_2arg(pow, res, x, y));
}

int
m_sqrt(double *res, double x)
{
	return (m_1arg(sqrt, res, x));
}

int
m_ceil(double *res, double x)
{
	return (m_1arg(ceil, res, x));
}

int
m_fabs(double *res, double x)
{
	return (m_1arg(fabs, res, x));
}

int
m_floor(double *res, double x)
{
	return (m_1arg(floor, res, x));
}

int
m_fmod(double *res, double x, double y)
{
	return (m_2arg(fmod, res, x, y));
}
