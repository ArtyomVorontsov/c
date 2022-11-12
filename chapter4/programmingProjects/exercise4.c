#include <stdio.h>

int main(void){

	int input, octal_digit, result;
	printf("Enter a number between 0 and 32767:");
	scanf("%d", &input);
	
	result = input % 8;
	input /= 8;

	result += input % 8 * 10;
	input /= 8;

	result += input % 8 * 100;
	input /= 8;

	result += input % 8 * 1000;
	input /= 8;

	result += input % 8 * 10000;
	input /= 8;

	printf("In octal, your number is: %.5d\n", result);

	return 0;
}

