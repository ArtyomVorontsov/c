#include <stdio.h>
#define d20 20 
#define d10 10
#define d5 5
#define d1 1


int main()
{
	int bill20Dollar;
	int bill10Dollar;
	int bill5Dollar;
	int bill1Dollar;

	int dollarAmount;

	printf("Enter a dollar amount: ");
	scanf("%d", &dollarAmount);
	
	bill20Dollar =  dollarAmount /	d20;
	dollarAmount = dollarAmount - bill20Dollar * d20; 

	bill10Dollar = dollarAmount / d10;
	dollarAmount = dollarAmount - bill10Dollar * d10; 

	bill5Dollar = dollarAmount / d5;
	dollarAmount = dollarAmount - bill5Dollar * d5; 

	bill1Dollar = dollarAmount /d1;

	printf("$20 bills: %d\n",  bill20Dollar);
	printf("$10 bills: %d\n", bill10Dollar);
	printf("$5 bills: %d\n", bill5Dollar);
	printf("$1 bills: %d\n", bill1Dollar);

	return 0;
}
