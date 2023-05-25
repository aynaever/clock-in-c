#include	<stdio.h>
#include	<sys/time.h>
#include	<time.h>

int	main(void)
{
	struct timeval	tp;
	struct tm	*readable_time;
	char* days[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

	gettimeofday(&tp, NULL);
	readable_time = localtime(&tp.tv_sec);
	printf("%s\n", days[readable_time->tm_wday]);
	return (0);
}
