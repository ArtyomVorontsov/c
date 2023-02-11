#include <stdio.h>
#define d20 20 
#define d10 10
#define d5 5
#define d1 1

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void){
	int dollars, twenties, tens, fives, ones;

	printf("Enter a dollar amount: ");
	scanf("%d", &dollars);
	
	pay_amount(dollars, &twenties, &tens, &fives, &ones);

	printf("$20 bills: %d\n",  twenties);
	printf("$10 bills: %d\n", tens);
	printf("$5 bills: %d\n", fives);
	printf("$1 bills: %d\n", ones);

	return 0;
}


void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){
	int bill20Dollar;
	int bill10Dollar;
	int bill5Dollar;
	int bill1Dollar;

	bill20Dollar =  dollars /	d20;
	dollars = dollars - bill20Dollar * d20; 

	bill10Dollar = dollars / d10;
	dollars = dollars - bill10Dollar * d10; 

	bill5Dollar = dollars / d5;
	dollars = dollars - bill5Dollar * d5; 

	bill1Dollar = dollars /d1;

	*twenties = bill20Dollar;
	*tens = bill10Dollar;
	*fives = bill5Dollar;
	*ones = bill1Dollar;
}
