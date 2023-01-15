#include <stdio.h>

int day_of_year(int day, int month, int year);

int main(void){
	int day, month, year, days;

	printf("Type date (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &day, &month, &year);

	days =  day_of_year(day, month, year);
	printf("%d\n", days);	

	return 0;
}

int day_of_year(int day, int month, int year){
	int days = 0, i;
	int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int is_leap_year = !(year % 4);

	for(i = 0; i < month - 1; i++)
		days += months[i];

	days += day;

	if(is_leap_year && month > 2) days++;

	return days;
}

