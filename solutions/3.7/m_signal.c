#include <errno.h>
#include <signal.h>

int
m_signal(void (**prev)(int), int sigcatch, void (*func)(int sigraised))
{
	int err, rval;
	void (*tmp)(int);
	err = errno;
	errno = 0;

	if ((tmp = signal(sigcatch, func)) == SIG_ERR) {
		rval = errno;
	} else {
		rval = 0;
		if (prev)
			*prev = tmp;
	}

	errno = err;
	return (rval);
}
