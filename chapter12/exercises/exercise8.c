#include <stdio.h>

int store_zeros(int a[], int n);

int main(void){
	int i, a[] = {1, 1, 1, 1}, n = 4;

	store_zeros(a, n);
	
	for(i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

int store_zeros(int a[], int n){
	int *p;

	for(p = a; p < a + n; p++)
		*p = 0;
}

