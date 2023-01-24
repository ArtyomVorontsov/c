#include <stdio.h>

int gcd(int m, int n);

int main(void){
	int a = gcd(10, 2);

	printf("%d\n", a);	
}

int gcd(int m, int n){
	if(n == 0)
		return m;
	else
		gcd(n, m % n);
}

