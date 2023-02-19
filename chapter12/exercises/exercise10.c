#include <stdio.h>

int *find_middle(int a[], int n);

int main(void){
	int a[] = {1, 2, 3, 4}, n = 4, *middle;

	middle = find_middle(a, n);

	printf("middle: %d \n", *middle);

	return 0;
}

int *find_middle(int a[], int n){
	return (a + n/2);
}

