#include <stdio.h>
#include <stdbool.h>

int compute(int x, int n);

int main(void){
	int res, x, n;

	printf("Type number and power as x n: ");
	scanf("%d %d", &x, &n);
	printf("is_odd = %d\n", n % 2);

	res = compute(x, n);

	printf("Result: %d\n", res);

	return 0;
}

int compute(int x, int n){

	if(n == 0)
		return 1;
	else if(n % 2 == 0){
		int res = compute(x, n / 2);
		return res * res;
	}
	else {
		return x * compute(x, n - 1);
	}
}

