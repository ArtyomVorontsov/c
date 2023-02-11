#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void){
	int desired_time, departure_time, arrival_time;

	int arr_hours, arr_minutes, dep_hours, dep_minutes, hours, minutes;

	printf("Enter a 24-hour time: " );
	scanf("%d:%d", &hours, &minutes);
	desired_time = 60 * hours + minutes;

	find_closest_flight(desired_time, &departure_time, &arrival_time);
	
	dep_hours = departure_time / 60;
	dep_minutes = departure_time % 60;

	arr_hours = arrival_time / 60;
	arr_minutes = arrival_time % 60;

	printf("Closest departure time is %d:%.2d %s, arriving at %d:%.2d %s\n", 
		dep_hours > 12 ? dep_hours - 12 : dep_hours, 
		dep_minutes,
		dep_hours > 12 ? "p.m." : "a.m.",
		arr_hours > 12 ? arr_hours - 12 : arr_hours, 
		arr_minutes,
		arr_hours > 12 ? "p.m." : "a.m."
	);

	return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time){
	int hours, minutes, dep_hours, dep_minutes;

	minutes = desired_time;

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

	*departure_time = dep1;	

	if(dep_time1 == dep1){
		*arrival_time = 10 * 60 + 16;
	}	
	else if(dep_time2 == dep1){
		*arrival_time = 11 * 60 + 52;
	}
	else if(dep_time3 == dep1){
		*arrival_time = 13 * 60 + 31;
	}
	else if(dep_time4 == dep1){
		*arrival_time = 15 * 60;
	}
	else if(dep_time5 == dep1){
		*arrival_time = 16 * 60 + 8;
	}
	else if(dep_time6 == dep1){
		*arrival_time = 17 * 60 + 55;
	}
	else if(dep_time7 == dep1){
		*arrival_time = 21 * 60 + 20;
	}
	else if(dep_time8 == dep1) { 
		*arrival_time = 23 * 60 + 58;
	}
	
	printf("\n");
	
}


