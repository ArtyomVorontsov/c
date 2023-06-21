#include <stdio.h>

struct date {
	int month, day, year;
};

int day_of_year(struct date d);

int main(void){
	struct date current_day = { 6, 21, 2023 };
	
	printf("day of year %d", day_of_year(current_day));

	return 0;	
}

int day_of_year(struct date d){
	int days = 0;

	int months[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if((d.year % 4) == 0) months[1]++;

	for(int i = 0; i < d.month - 1; i++)
		days += months[i];

	days += d.day;

	return days;
}
