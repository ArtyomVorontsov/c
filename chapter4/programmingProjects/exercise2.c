#include <stdio.h>

int main(void){
	int input, first_number, second_number, third_number;
	
	printf("Enter a two-digit number: ");
	scanf("%d", &input);
	
	
	first_number = input % 10;
	second_number = ((input % 100) - first_number) / 10;
	third_number = input / 100;

	printf("The reversal is: %d%d%d\n", first_number, second_number, third_number);

	return 0;
	
}
