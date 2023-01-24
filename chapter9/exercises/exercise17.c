#include <stdio.h>

int fact(int n);

int main(void){
	int n, res;
	
	printf("Enter a number: ");
	scanf("%d", &n);

	res = fact(n);

	printf("Factorial: %d\n", res);

	return 0;
}

int fact(int n){
	int i, res = 1;

	for(i = 0; i < n; i++)
		res *= (n - i);

	return res;		
}


