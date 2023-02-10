#include <stdio.h>

int *find_largest(int a[], int n);

int main(void){
	int a[] = {1, 5, 3, 12, 100, 4};
	int n = 6, *largest;

	largest = find_largest(a, n);

	printf("%d\n", *largest);

	return 0;
}

int *find_largest(int a[], int n){
	int i, *l;
	
	l = &a[0];	
	
	for(i = 0; i < n; i++)
		if(a[i] > *l) l = &a[i];

	return l;
}
