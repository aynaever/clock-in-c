#include	<stdio.h>
#include	<sys/time.h>
#include	<time.h>

int	main(void)
{
	struct	timeval	tp;
	struct	tm	*readable_time;
	int	hour;
	char*	days[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
	char*	months[12] = {"Jan", "Feb", "Mar", "Apr", "May", 
				"Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

	gettimeofday(&tp, NULL);
	readable_time = localtime(&tp.tv_sec);
	hour = (readable_time->tm_hour > 12 ? readable_time->tm_hour - 12 : readable_time->tm_hour);
	printf("%s %s %d %02d:%d:%d %s +%02ld %d\n",
			days[readable_time->tm_wday],
			months[readable_time->tm_mon],
			readable_time->tm_mday,
			hour,
			readable_time->tm_min,
			readable_time->tm_sec,
			(readable_time->tm_hour > 12 ? "PM" : "AM"),
			(readable_time->tm_gmtoff / 60 / 60),
			(readable_time->tm_year + 1900));
	printf("%s\n", asctime(readable_time));
	return (0);
}
