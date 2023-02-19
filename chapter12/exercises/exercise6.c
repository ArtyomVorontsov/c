#include <stdio.h>

int sum_array(const int *a, int n);

int main(void){
	int n, a[] = {1, 2, 3, 4, 5};

	n = 5;	
	printf("sum: %d\n", sum_array(a, n));

	return 0;
}


int sum_array(const int *a, int n){
	int *p, sum;

	sum = 0;
	for(p = a; p < a + n; p++)
		sum += *p;
	return sum;

}
