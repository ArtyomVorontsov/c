#include <stdio.h>

// (a) 7
// (b) 16
// (c) 25
// (d) 25
// (e) 34
// (f) 170
// (g) 1754

int main(void){
	int n, i;
 	long double fact = 1;

	printf("Enter a positive intenger: ");
	scanf("%d", &n);

	for(i = 1; i <= n; ++i) fact *= i;

	printf("Factorial of  %d: %Lf\n", i - 1 , fact);
	return 0;
}

