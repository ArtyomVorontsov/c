#include <stdio.h>

int main(void){
	int num1, num2, denom1, denom2, numAnsw, denomAnsw;
	
	printf("Type first fraction:");
	scanf("%d/%d", &num1, &denom1);	

	printf("Type second fraction:");
	scanf("%d/%d", &num2, &denom2);
	
	// Calculation
	numAnsw = num1 * denom2 + num2 * denom1;
	denomAnsw = denom1 * denom2;

	printf("Fraction sum: %d/%d\n", numAnsw, denomAnsw);
		

	return 0;
}
