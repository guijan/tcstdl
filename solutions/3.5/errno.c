int *
_Errno(void)
{
	static int err;
	int rval;

	if ((rval = _Getfcc(void)) != 0)
		err = rval;
	return (&err);
}
