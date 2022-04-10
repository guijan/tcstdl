#include <errno.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void
interactive_SIGABRT(int sigraised)
{
	/*
	 * Enough space for 'y' or 'n' followed by '\n' and '\0'.
	 */
	char buf[3];

	fputs("Continue (y/n)? ", stderr);
	if (fgets(buf, sizeof(buf), stdin) == NULL && ferror(stdin)) {
		fputs("interactive_SIGABRT(): fgets() returned ", stderr);
		fputs(strerror(errno), stderr);
		fputc('\n', stderr);
		goto send_abort;
	}

	if (strcmp(buf, "y\n") == 0)
		return;
	else if (strcmp(buf, "n\n") == 0)
		goto send_abort;
	else
		fputs("interactive_SIGABRT(): invalid answer", stderr);

send_abort:
	signal(sigraised, SIG_DFL);
	abort();
}
