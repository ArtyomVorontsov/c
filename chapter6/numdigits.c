#include <stdio.h>

int main(void){
	int number, digits_amount = 0;
	printf("Enter a nonnegative integer: ");
	scanf("%d", &number);

	do {
		number /= 10;
		++digits_amount;
	} while (number);
	
	printf("The number has %d digits(s)\n", digits_amount);
	return 0;
}
