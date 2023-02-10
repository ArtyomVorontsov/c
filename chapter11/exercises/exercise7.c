#include <stdio.h>
#include <stdbool.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main(void){
	int month, day, days, year;

	printf("Type days and year: ");
	scanf("%d %d", &days, &year);

	split_date(days, year, &month, &day);
	
	printf("month %d, day %d\n", month, day);

	return 0;
}

void split_date(int day_of_year, int year, int *month, int *day){
	bool is_leap_year;
	int months[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int months_amount = 12, i;
	
	is_leap_year = year % 4 == 0 ? true : false;
	
	if(is_leap_year) months[1] = 29;

	for(i = 0; i < months_amount && day_of_year >= months[i]; i++)
		day_of_year -= months[i]; 

	*month = i + 1;
	*day = day_of_year + 1;
}

