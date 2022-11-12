#include <stdio.h>

int main(void){
	int input, first_number, second_number, third_number;
	
	printf("Enter a two-digit number: ");
	scanf("%1d%1d%1d", &third_number, &second_number, &first_number);
	
	
	printf("The reversal is: %d%d%d\n", first_number, second_number, third_number);

	return 0;
	
}
