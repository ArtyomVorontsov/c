#include <stdio.h>

int main(void){
	int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
	int first_sum, second_sum, total, check_digit;

	printf("Enter the first (single) digit: ");
	scanf("%1d", &d1);

	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &d2, &d3, &d4, &d5, &d6);

	printf("Enter second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &d7, &d8, &d9, &d10, &d11);	

	first_sum = d1 + d3 + d5 + d7 +d9 + d11;
	second_sum = d2 + d4 + d6 + d8 + d10;
	
	total = ((first_sum * 3) + second_sum);

	check_digit = 9 - ((total - 1 ) % 10);

	if(check_digit > 9 || check_digit < 1){
		printf("NOT VALID %d", check_digit);
	} 
	else {
		printf("VALID %d", check_digit);
	}

	return 0;
}
