#include <stdio.h>

int split_time(long total_sec, int *hr, int *min, int *sec);

int main(void){
	long total_sec = 20112;
	int hr, min, sec;

	split_time(total_sec, &hr, &min, &sec);

	printf("total_sec: %ld, hr: %d, min: %d, sec: %d\n", total_sec, hr, min, sec);
	
	return 0;
}

int split_time(long total_sec, int *hr, int *min, int *sec){
	*hr = total_sec / (60 * 60);
	total_sec %= 60 * 60;

	*min = total_sec / 60;
	total_sec %= 60;

	*sec = total_sec;
}

