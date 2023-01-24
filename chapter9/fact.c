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
	if(n <= 1)
		return 1;
	else 
		return n * fact(n - 1);
}


