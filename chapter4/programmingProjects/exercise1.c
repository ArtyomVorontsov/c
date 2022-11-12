#include <stdio.h>

int main(void){
	int input, first_number, second_number;
	
	printf("Enter a two-digit number: ");
	scanf("%d", &input);
	
	first_number = input % 10;
	second_number = input / 10;

	printf("The reversal is: %d%d\n", first_number, second_number);

	return 0;
	
}
