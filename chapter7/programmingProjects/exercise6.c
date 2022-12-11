#include <stdio.h>

int main(void){
	int num1, num2, denom1, denom2, numAnsw, denomAnsw;
	char op;	

	printf("Type two fractions separated by a plus sign: ");
	
	scanf("%d/%d%c%d/%d", &num1, &denom1, &op, &num2, &denom2);	

	switch(op){	
		case '+':
		numAnsw = num1 * denom2 + num2 * denom1;
		denomAnsw = denom1 * denom2;
		break;
		
		case '-':
		numAnsw = num1 * denom2 - num2 * denom1;
		denomAnsw = denom1 * denom2;
		break;

		case '*':
		numAnsw = num1 * num2;
		denomAnsw = denom1 * denom2;
		break;
		
		case '/':
		numAnsw = num1 * denom2;
		denomAnsw = denom1 * num2;
		break;
	}
	printf("Fraction: %d/%d\n", numAnsw, denomAnsw);

	return 0;
}
