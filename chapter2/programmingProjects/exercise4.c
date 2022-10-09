#include <stdio.h>
#define TAX 1.05 

int main(void)
{
	float price;
	printf("Enter an amount:");
	scanf("%f", &price);
	float priceWithTax = TAX * price;
	printf("With tax added %.2f", priceWithTax);

	return 0;
}
