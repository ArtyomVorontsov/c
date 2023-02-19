#include <stdio.h>

double inner_product(const double *a, const double *b, int n);

int main(void){
	double a[] = {1.0, 2.0, 3.0}, b[] = {4.0, 5.0, 6.0}, n = 3, product;
	
	product = inner_product(a, b, n);

	printf("product: %lf \n", product);

	return 0;
}

double inner_product(const double *a, const double *b, int n){
	double *p1, *p2, product = 0.0;
	
	for(p1 = a, p2 = b; p1 < (a + n); p1++, p2++)
		product += (*p1) * (*p2);

	return product;
}

