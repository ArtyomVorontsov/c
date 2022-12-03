#include <stdio.h>

int main(void){
	int days, s_day;
	
	printf("Enter number of days in month: ");
	scanf("%d", &days);
	
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &s_day);

	for(int i = 2; days + s_day >= i; ++i){
		if(i - s_day > 0){
			printf(" %2d ", i - s_day);
			if(!((i - 1) % 7)){
				printf("\n");	
			}	
		} else {
			printf("    ");
		}
	}
	printf("\n");
	return 0;
}

