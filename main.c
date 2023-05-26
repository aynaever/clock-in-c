#include	<stdio.h>
#include	<stdlib.h>
#include	<unistd.h>

int	main(void)
{
	size_t	size = 100;
	char*	buf = malloc(size);

	printf("Hello, World!\n");
	fflush(stdout);
	printf("list of files in \"%s\" :\n", getcwd(buf, 100));
	free(buf);
	system("ls");
	printf("Process ID of this process is %d\n", getpid());
	return (0);
}
