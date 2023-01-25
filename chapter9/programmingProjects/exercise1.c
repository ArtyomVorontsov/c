#include <stdio.h>

void selection_sort(int a[], int n);

int main(void){
	int a[] = { 9, 8, 7, 6, 5, 4, 3, 210, 1, 0 };
	int n = 10, i = 0;

	selection_sort(a, 10);

	while(i < n)
		printf("%d ", a[i]), ++i;

	printf("\n");

	return 0;
}

void selection_sort(int a[], int n){
	int i = 0, lg_index = 0, temp;

	for(i = 0; i < n; i++)
		if(a[i] > a[lg_index]) lg_index = i;

	// swap largest element 
	temp = a[n - 1];
	a[n - 1] = a[lg_index];
	a[lg_index] = temp;

	if(n <= 0) return;
	selection_sort(a, n - 1);
		
}


