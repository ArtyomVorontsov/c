#include <stdio.h>

int main(void){
	int hours, minutes, dep_hours, dep_minutes, dep_temp, dep_abs, lowest_dep_index, lowest_dep = 9999, arr_minutes, arr_hours;
	int dep_time[8] = {
		8 * 60,
		9 * 60 + 43,
		11 * 60 + 19,
		12 * 60 + 47,
		14 * 60,
		15 * 60 + 45,
		19 * 60,
		21 * 60 + 45
	};
	
	int arr_time[8] = {
		10 * 60 + 16,
		11 * 60 + 52,
		1 * 60 + 31,
		3 * 60,
		4 * 60 + 8,
		5 * 60 + 55,
		9 * 60 + 20,
		11 * 60 + 58
	};

	printf("Enter a 24-hour time: " );
	scanf("%d:%d", &hours, &minutes);
	minutes += 60 * hours;

	// Find closest departure time
	for(int i = 0; i < 8; i++){
		dep_temp = dep_time[i] - minutes;
		dep_abs = dep_temp > -1 ? dep_temp : dep_temp * -1;
		if(lowest_dep > dep_abs){
			lowest_dep = dep_abs;
			lowest_dep_index = i;
		}
	}
	
	// Get hours fromm minutes	
	dep_hours = dep_time[lowest_dep_index] / 60;
	arr_hours = arr_time[lowest_dep_index] / 60;

	// Transform to 12h format
	dep_hours = dep_hours > 12 ? dep_hours - 12 : dep_hours;
	dep_minutes = dep_time[lowest_dep_index] % 60;

	arr_hours = arr_hours > 12 ? arr_hours - 12 : arr_hours;
	arr_minutes = arr_time[lowest_dep_index] % 60;
	
	
	printf("Closest departure time is %d:%.2d %s , arriving at %d:%.2d %s", 
		dep_hours, dep_minutes, dep_hours <= 12 ? "p.m." : "a.m.", 
		arr_hours, arr_minutes, arr_hours <= 12 ? "p.m." : "a.m."
	);

	printf("\n");

	return 0;
}
