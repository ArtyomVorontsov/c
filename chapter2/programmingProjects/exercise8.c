#include <stdio.h>

int main(void)
{
	float loanAmount, interestRate, monthlyPayment;

	float monthlyInterestRate;

	float remainingAfterFirstPayment, remainingAfterSecondPayment, remainingAfterThirdPayment;

	printf("Enter amount of loan:");
	scanf("%f", &loanAmount);

	printf("Enter interest rate:");
	scanf("%f", &interestRate);

	printf("Enter monthly payment:");
	scanf("%f", &monthlyPayment);

	monthlyInterestRate = ((loanAmount / 100.0) * interestRate) / 12.0;
	remainingAfterFirstPayment = (loanAmount + monthlyInterestRate) - monthlyPayment;

	monthlyInterestRate = ((remainingAfterFirstPayment / 100.0) * interestRate) / 12.0;
	remainingAfterSecondPayment = (remainingAfterFirstPayment + monthlyInterestRate) - monthlyPayment;

	monthlyInterestRate = ((remainingAfterSecondPayment / 100.0) * interestRate) / 12.0;
	remainingAfterThirdPayment = (remainingAfterSecondPayment + monthlyInterestRate) - monthlyPayment;

	printf("Balance remaining after first payment: %.2f\n", remainingAfterFirstPayment);
	printf("Balance remaining after second payment: %.2f\n", remainingAfterSecondPayment);
	printf("Balance remaining after third payment: %.2f\n", remainingAfterThirdPayment);
}
