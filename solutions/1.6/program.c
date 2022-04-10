#include <signal.h>
#include <setjmp.h>

jmp_buf setjmp_env;

static void jmp_to_setjmp_env(int);

int
main(void)
{
	setjmp(setjmp_env);
	signal(SIGABRT, jmp_to_setjmp_env);
}

static void
jmp_to_setjmp_env(int sigraised)
{
	(void)sigraised;
	longjmp(setjmp_env, 1);
}
