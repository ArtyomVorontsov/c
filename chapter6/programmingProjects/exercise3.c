#include <stdio.h>

int main(void){
	int n, m, f1, f2, temp;

	printf("Enter a fraction: ");
	scanf("%d/%d", &n, &m);
	f1 = n;
	f2 = m;
	while(n > 0){
		temp = n;
		n = m % n;
		m = temp;
	}
		
	printf("In lowest terms: %d/%d\n", f1/m, f2/m);
	return 0;
}
