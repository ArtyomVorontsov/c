#include <stdio.h>

int main(void){
	int n, m, gcd, temp;

	printf("Enter 2 integers: ");
	scanf("%d %d", &n, &m);

	for(;;){
		if(n == 0){
			gcd = m;
			break;
		}	
		temp = n;
		n = m % n;
		m = temp;
	}
	printf("Greatest common divisor: %d\n", gcd);
	return 0;
}
