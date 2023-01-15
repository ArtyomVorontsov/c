#include <stdio.h>
#define N 10

double inner_product(double a[], double b[], int n);

int main(void){
	double sum;
	double a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	double b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i = 0;

	sum = inner_product(a, b, N);

	printf("%lf\n", sum);

	return 0;
}

double inner_product(double a[], double b[], int n){
	int i;
	double ab[N] = {0.0};
	double sum = 0.0;
	for(i = 0; i < N; i++)
		ab[i] = a[i] * b[i];
	
	for(i = 0; i < N; i++)
		sum += ab[i];

	return sum;
}

