#include <stdio.h>

void reduce(int numerator, int denomirator, int *reduced_numerator, int *reduced_denomirator);

int main(void){
	int numerator, denominator, reduced_numerator, reduced_denomirator;

	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);

	reduce(numerator, denominator, &reduced_numerator, &reduced_denomirator);

	printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denomirator);

	return 0;
}

void reduce(int numerator, int denomirator, int *reduced_numerator, int *reduced_denomirator){
	int n, m, f1, f2, temp;

	n = numerator;
	m = denomirator;

	f1 = n;
	f2 = m;
	while(n > 0){
		temp = n;
		n = m % n;
		m = temp;
	}

	*reduced_numerator = f1/m;
	*reduced_denomirator = f2/m;
		
}

