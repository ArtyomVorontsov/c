#include <stdio.h>

int main(void){
	//day_part 0 == AM, 1 == PM
	int hours, minutes, day_part;
	

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &minutes);

	switch(hours){
		case 0: hours = 0; day_part = 0; break;
		case 1: hours = 1; day_part = 0; break;
		case 2: hours = 2; day_part = 0; break;
		case 3: hours = 3; day_part = 0; break;
		case 4: hours = 4; day_part = 0; break;
		case 5: hours = 5; day_part = 0; break;
		case 6: hours = 6; day_part = 0; break;
		case 7: hours = 7; day_part = 0; break;
		case 8: hours = 8; day_part = 0; break;
		case 9: hours = 9; day_part = 0; break;
		case 10: hours = 10; day_part = 0; break;
		case 11: hours = 11; day_part = 0; break;
		case 12: hours = 12; day_part = 1; break;
		case 13: hours = 1; day_part = 1; break;
		case 14: hours = 2; day_part = 1; break;
		case 15: hours = 3; day_part = 1; break;
		case 16: hours = 4; day_part = 1; break;
		case 17: hours = 5; day_part = 1; break;
		case 18: hours = 6; day_part = 1; break;
		case 19: hours = 7; day_part = 1; break;
		case 20: hours = 8; day_part = 1; break;
		case 21: hours = 9; day_part = 1; break;
		case 22: hours = 10; day_part = 1; break;
		case 23: hours = 11; day_part = 1; break;
	}

	printf("Equivalent 12-hour time: %.2d:%.2d %s\n", hours, minutes, day_part ? "PM" : "AM");
	return 0;

}
