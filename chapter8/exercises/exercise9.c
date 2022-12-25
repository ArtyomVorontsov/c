#include <stdio.h>
#define MONTH_DAYS 30
#define DAY_HOURS 24

int main(void){
	int temperature_readings[MONTH_DAYS][DAY_HOURS] = {
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12},
		{ 12, 12, 12, 13, 13, 14, 15, 16, 17, 18, 18, 18, 20, 20, 21, 21, 21, 21, 18, 17, 15, 14, 14, 12}
	};
	float average_temp = 0.0f;
	int temp_sum = 0;

	for(int i = 0; i < MONTH_DAYS; i++){
		for(int n = 0; n < DAY_HOURS; n++){
			temp_sum += temperature_readings[i][n];
		}	
	}
	average_temp = (float)temp_sum / (float)(MONTH_DAYS * DAY_HOURS);

	printf("Average temp is: %f\n", average_temp);

	return 0;
}

