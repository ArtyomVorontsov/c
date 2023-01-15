#include <stdio.h>

int gcd(int m, int n);

int main(void){
	int a = gcd(10, 2);

	printf("%d\n", a);	
}

int gcd(int m, int n){
	int temp, gcd;

	for(;;){
		if(n == 0){ 
			gcd = m;
			break;
		}

		temp = n;
		n = m % n;
		m = temp;	
	}
	
	return gcd;
}

