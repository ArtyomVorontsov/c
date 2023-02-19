#include <stdio.h>

int find_largest(int *a, int n);

int main(void){

	int largest, n = 4, a[] = {1, 2, 10, 3};
	
	largest = find_largest(a, n);

	printf("largest: %d\n", largest);

	return 0;
}

int find_largest(int *a, int n){
	int *p, largest;

	for(p = a, largest = *p++; p < (a + n); p++)
		if(largest < *p) largest = *p;

	return largest;
}

