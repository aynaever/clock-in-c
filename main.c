#include	<stdio.h>
#include	<sys/time.h>

int	main(void)
{
	struct	timeval	*timespec;

	gettimeofday(timespec, NULL);
	printf("tv_sec->%d, suseconds_t->%d",
			(timespec->tv_sec / 60 / 60 / 24 / 365),
			timespec->tv_usec / 1000 / 60);
	return (0);
}
