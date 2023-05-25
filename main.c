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
	printf("%s %s\n", days[readable_time->tm_wday], months[readable_time->tm_mon]);
	return (0);
}
