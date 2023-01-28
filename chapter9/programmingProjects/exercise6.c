#include <stdio.h>

int compute_polynomial(int x);

int main(void){
	int x, res;

	printf("Type x: ");
	scanf("%d", &x);
	
	res = compute_polynomial(x);

	printf("Result: %d\n", res);
	
	return 0;
}

int compute_polynomial(int x){
	int res = 0;

	res = (((((((((3 * x) + 2) * x) - 5) * x) - 1) * x) + 7) * x) - 6;

	return res;

}
