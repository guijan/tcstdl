#include <assert.h>
#include <errno.h>
#include <fcntl.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

int
main(void)
{
	char *longname;
	size_t longnamelen;
	int fd;
	int stat_loc;

	errno = 0;
	assert(open(".", O_RDONLY|O_WRONLY|O_RDWR) == -1);
	assert(errno == EINVAL);
	perror("EINVAL reported as");

	errno = 0;
	assert(open("/dev/null/file", O_RDONLY) == -1);
	assert(errno == ENOTDIR);
	perror("ENOTDIR reported as");

	errno = 0;
	assert(openat(INT_MIN, ".", O_RDONLY) == -1);
	assert(errno == EBADF);
	perror("EBADF reported as");

	errno = 0;
	longnamelen = PATH_MAX + NAME_MAX + 2;
	longname = malloc(longnamelen);
	assert(longname != NULL);
	memset(longname, '.', longnamelen);
	fd = open(longname, O_RDONLY);
	assert(fd == -1);
	assert(errno == ENAMETOOLONG);
	free(longname);
	perror("ENAMETOOLONG reported as");

	errno = 0;
	wait(&stat_loc);
	assert(errno == ECHILD);
	perror("ECHILD reported as:");

}
