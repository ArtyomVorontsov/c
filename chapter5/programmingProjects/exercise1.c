#include <stdio.h>

int main(void){
	int number, amount_of_digits_in_number;

	printf("Enter a number: ");
	scanf("%d", &number);

	if(number <= 9){
		amount_of_digits_in_number = 1;	
	} else if(number <= 99){
		amount_of_digits_in_number = 2;
	} else if(number <= 999){
		amount_of_digits_in_number = 3;
	} else {
		amount_of_digits_in_number = 4;
	}

	printf("The number %d has %d digits\n", number, amount_of_digits_in_number);

	return 0;
}
