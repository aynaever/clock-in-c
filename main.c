#include	<stdio.h>

int	main(void)
{
	fclose(stdout);
	stdout = fopen("./stdout.txt", "w");
	printf("Hello, World!");
	printf("%li", ftell(stdout));
	return (0);
}
