#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void){
	int n, largest, second_largest;
	int a[] = { 1, 4, 5, 7, 40, 2 };
	n = 6;

	find_two_largest(a, n, &largest, &second_largest);
	printf("%d, %d\n", largest, second_largest);

	return 0;

}

void find_two_largest(int a[], int n, int *largest, int *second_largest){
	int i, k, s[n-1];

	*largest = a[0];
	
	for(i = 0, k = 0; i < n; i++)
		if(*largest < a[i]) *largest = a[i];
		
	for(i = 0, k = 0; i < n; i++)
		if(*largest != a[i]) s[k] = a[i], k++;

	*second_largest = s[0];

	for(i = 0; i < n - 1; i++)
		if(*second_largest < s[i]) *second_largest = s[i];
}

