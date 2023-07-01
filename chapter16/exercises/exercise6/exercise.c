#include <stdio.h>

struct time {
	int hours, minutes, seconds;
}; 

struct time split_time(long total_seconds){
	struct time t;

	t.seconds = total_seconds % 60;
	t.minutes = (total_seconds / 60) % 60;
	t.hours = (total_seconds / 60) / 60;

	return t;
}

int main(void){
	struct time t = split_time(21340);

	printf("hours: %d, minutes: %d, seconds: %d\n", t.hours, t.minutes, t.seconds);
	
	return 0;
}

