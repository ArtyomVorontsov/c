#include <stdio.h>
#include <ctype.h>
typedef char bool;

int main(void){
	int hours, minutes, dep_hours, dep_minutes;
	char dmf1, dmf2, dmf3;
	bool isDay;
	

	printf("Enter a 24-hour time: " );
	scanf("%d:%d%c%c%c", &hours, &minutes, &dmf1, &dmf2, &dmf3);

	dmf1 = toupper(dmf1);
	dmf2 = toupper(dmf2);
	dmf3 = toupper(dmf3);

	if('P' == dmf1 || 'P' == dmf2){
		isDay = 1;	
	}
	
	if(isDay){
		hours += 12;
	}

	minutes += 60 * hours;

	int dep_time1 = 8 * 60;
	int dep_time2 = 9 * 60 + 43;
	int dep_time3 = 11 * 60 + 19;
	int dep_time4 = 12 * 60 + 47;
	int dep_time5 = 14 * 60;
	int dep_time6 = 15 * 60 + 45;
	int dep_time7 = 19 * 60;
	int dep_time8 = 21 * 60 + 45;
	
	int dep1 = dep_time1 - minutes;
	int dep2 = dep_time2 - minutes;
	int dep3 = dep_time3 - minutes;
	int dep4 = dep_time4 - minutes;
	int dep5 = dep_time5 - minutes;
	int dep6 = dep_time6 - minutes;
	int dep7 = dep_time7 - minutes;
	int dep8 = dep_time8 - minutes;

	// Convert to absolute value
	int dep1Abs = dep1 > -1 ? dep1 : dep1 * -1;
	int dep2Abs = dep2 > -1 ? dep2 : dep2 * -1;
	int dep3Abs = dep3 > -1 ? dep3 : dep3 * -1;
	int dep4Abs = dep4 > -1 ? dep4 : dep4 * -1;
	int dep5Abs = dep5 > -1 ? dep5 : dep5 * -1;
	int dep6Abs = dep6 > -1 ? dep6 : dep6 * -1;
	int dep7Abs = dep7 > -1 ? dep7 : dep7 * -1;
	int dep8Abs = dep8 > -1 ? dep8 : dep8 * -1;

	// Determine lowest dep value
	dep1 = dep1Abs < dep2Abs ? dep1 : dep2;
	dep2 = dep3Abs < dep4Abs ? dep3 : dep4;
	dep3 = dep5Abs < dep6Abs ? dep5 : dep6;
	dep4 = dep7Abs < dep8Abs ? dep7 : dep8;
	
	// Convert to absolute value
	dep1Abs = dep1 > -1 ? dep1 : dep1 * -1;
	dep2Abs = dep2 > -1 ? dep2 : dep2 * -1;
	dep3Abs = dep3 > -1 ? dep3 : dep3 * -1;
	dep4Abs = dep4 > -1 ? dep4 : dep4 * -1;
	
	// Determine lowest dep value
	dep1 = dep1Abs < dep2Abs ? dep1 : dep2;
	dep2 = dep3Abs < dep4Abs ? dep3 : dep4;

	// Convert to absolute value
	dep1Abs = dep1 > -1 ? dep1 : dep1 * -1;
	dep2Abs = dep2 > -1 ? dep2 : dep2 * -1;

	// Determine lowest dep value
	dep1 = dep1Abs < dep2Abs ? dep1 : dep2;
	
	// Add minutes which was substracted before
	dep1 += minutes;
	
	dep_hours = dep1 / 60;
	// Transform to 12h format
	dep_hours = dep_hours > 12 ? dep_hours - 12 : dep_hours;
	dep_minutes = dep1 % 60;
	
	printf("Closest departure time is %d:%.2d ", dep_hours, dep_minutes);

	// Print arrival time 
	if(dep_time1 == dep1){
		printf("a.m., arriving at 10:16 a.m.");
	}	
	else if(dep_time2 == dep1){
		printf("a.m., arriving at 11:52 a.m.");
	}
	else if(dep_time3 == dep1){
		printf("a.m., arriving at 1:31 p.m.");
	}
	else if(dep_time4 == dep1){
		printf("p.m., arriving at 3:00 p.m.");
	}
	else if(dep_time5 == dep1){
		printf("p.m., arriving at 4:08 p.m.");
	}
	else if(dep_time6 == dep1){
		printf("p.m., arriving at 5:55 p.m.");
	}
	else if(dep_time7 == dep1){
		printf("p.m., arriving at 9:20 p.m.");
	}
	else if(dep_time8 == dep1) { 
		printf("p.m., arriving at 11:58 p.m.");
	}
	
	printf("\n");

	return 0;
}
