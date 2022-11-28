#include <stdio.h>

int main(void){
	float n = 0, largest_number;
	for(;;){
		printf("Enter a number: ");
		scanf("%f", &n);
		if(n > largest_number){
			largest_number = n;
		}
		if(n <= 0){
			printf("\nThe largest number entered was %.2f\n", largest_number);
		}
	}
}

