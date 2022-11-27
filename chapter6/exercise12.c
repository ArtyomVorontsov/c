#include <stdio.h>

int main(void){
	int n, d;
	printf("Type a number: ");
	scanf("%d", &n);

	for(d = 2; d*d < n; d++){
		if(n % d == 0) break;
	}

	if(d*d < n){
		printf("%d is not prime number\n", n);
	} else {
		printf("%d is prime number\n", n);
	}

	return 0;
}

