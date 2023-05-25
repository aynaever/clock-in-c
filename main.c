#include	<stdio.h>
#include	<sys/time.h>
#include	<time.h>

int	main(void)
{
	struct	timeval	tp;
	struct	tm	*readable_time;
	char*	days[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
	char*	months[12] = {"Jan", "Feb", "Mar", "Apr", "May", 
				"Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

	gettimeofday(&tp, NULL);
	readable_time = localtime(&tp.tv_sec);
	printf("%s %s %d %d:%d:%d %d\n",
			days[readable_time->tm_wday],
			months[readable_time->tm_mon],
			readable_time->tm_mday,
			readable_time->tm_hour,
			readable_time->tm_min,
			readable_time->tm_sec,
			(readable_time->tm_year + 1900));
	return (0);
}
