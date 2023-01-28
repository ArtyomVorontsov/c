#include <stdio.h>
#include <stdbool.h>

int compute(int x, int n, bool is_odd, int top);

int main(void){
	int res, x, n;

	printf("Type number and power as x n: ");
	scanf("%d %d", &x, &n);
	printf("is_odd = %d\n", n % 2);

	res = compute(x, n, n % 2, n);

	printf("Result: %d\n", res);

	return 0;
}

int compute(int x, int n, bool is_odd, int top){

	if(n == 0)
		return 1;
	else if(is_odd){
		return x * compute(x, n - 1, true, 0);
	}
	else {
		int res = x * compute(x, n / 2, false, 0);
		return top == n ? res * res : res;
	}
}

