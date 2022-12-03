#include <stdio.h>

int main(void)
{
	float loanAmount, interestRate, monthlyPayment;

	float monthlyInterestRate;

	int number_of_payments;

	printf("Enter amount of loan:");
	scanf("%f", &loanAmount);

	printf("Enter interest rate:");
	scanf("%f", &interestRate);

	printf("Enter monthly payment:");
	scanf("%f", &monthlyPayment);

	printf("Enter number of payments: ");
	scanf("%d", &number_of_payments);

	for(int i = 1; number_of_payments >= i; ++i ){
			monthlyInterestRate = ((loanAmount / 100.0) * interestRate) / 12.0;
			loanAmount = (loanAmount + monthlyInterestRate) - monthlyPayment;

			printf("Balance remaining after %d payment: %.2f\n", i,  loanAmount);
	}	
	return 0;
}
