#include <stdio.h>
#include <ctype.h>
typedef int bool;

int main(void){
	int hours, minutes;
	char tm1, tm2;
	bool is_day;
	
	printf("Enter a 12-hour time: ");
	scanf("%d:%d%c%c", &hours, &minutes, &tm1, &tm2);

	tm1 = toupper(tm1);		
	tm2 = toupper(tm2);

	if(tm1 == 'P' || tm2 == 'P') is_day = 1;
	if(is_day) hours += 12;

	printf("Equivalent 24-hour time: %d:%d\n", hours, minutes);

	return 0;	
}

