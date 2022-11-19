#include <stdio.h>
#define NON_TAXABLE_INCOME 750.0

int main(void){
	float income, tax;
	
	printf("Type your income: ");
	scanf("%f", &income);
	
	if(income <= NON_TAXABLE_INCOME){
		tax = income * 0.01;
	} 
	else if (income <= 2250.0) {
		tax = 7.50 + (income - NON_TAXABLE_INCOME) * 0.02;
	}
	else if (income <= 3750.0) {
		tax = 37.50 + (income - NON_TAXABLE_INCOME) * 0.03;
	}
	else if (income <= 5250.0) {
		tax = 82.50 + (income - NON_TAXABLE_INCOME) * 0.04;
	}
	else if (income <= 7000.0) {
		tax = 142.50 + (income - NON_TAXABLE_INCOME) * 0.05;
	}
	else {
		tax = 230.00 + (income - NON_TAXABLE_INCOME) * 0.06;
	}

	printf("Your tax is %.2f\n", tax);
	
	return 0;
}
