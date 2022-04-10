
/*
 * A circular buffer of errnos.
 */
enum {MAX_ERR = 64};
int err[MAX_ERR];
int *const err_max = err + MAX_ERR-1;
int *err_bottom = err;
int *err_top = err;

/* _Errno_push: push an errno value onto the circular buffer. The idea is pretty
 * simple, functions in the library are supposed to push errno values onto the
 * stack.
 */
void
_Errno_push(int error)
{
	*err_top = error;
	err_top = err_top == err_max ? err : err_top+1;
	if (err_top == err_bottom)
		err_bottom = err_bottom == err_max ? err : err_bottom+1;
}

/* _Errno: pop errno value in the circular buffer. When there values left, don't
 * change the pointer, and return a pointer to a 0.
 */
int *
_Errno(void)
{
	if (err_top == err_bottom)
		*err_top = 0;
	else
		err_top = err_top == err ? err_max : err_top-1;

	return (err_top);
}
