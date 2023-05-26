#include	<stdio.h>

int	main(void)
{
	fclose(stdout);
	stdout = fopen("./stdout.txt", "w");
	printf("Hello, World!");
	return (0);
}
