#include	<stdio.h>
#include	<sys/time.h>
#include	<sys/times.h>
#include	<time.h>
#include	<unistd.h>

int	main(void)
{
	struct	timeval timespec;
	struct	tms process_time;
	clock_t	start, end;
	double	cpu_time_used;

	start = clock();
	gettimeofday(&timespec, NULL);
	times(&process_time);
	printf("tv_sec=%d, suseconds_t=%d\n",
			(timespec.tv_sec / 60 / 60 / 24 / 365),
			timespec.tv_usec / 1000 / 60);
	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("cpu_time_used=%d\n", cpu_time_used);
	printf("process_time=%d", process_time.tms_stime);
	return (0);
}
