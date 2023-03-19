#include <stdio.h>
#define N 7

void quicksort(int *a, int *low, int *high);
int *split(int *a, int *low, int *high);

int main(void){
	int a[N] = {12, 3, 6, 18, 7, 15, 10}, i;
	
	quicksort(a, a, a + N - 1);
	
	printf("In sorted order: ");
	for(i = 0; i < N; i++)
		printf("%d ", a[i]);
	printf("\n");	

	return 0;
}

void quicksort(int *a, int *low, int *high){
	int *middle;

	if(low >= high) return;
	
	middle = split(a, low, high);
	quicksort(a, low, middle - 1);
	quicksort(a, middle + 1, high);
}

int *split(int *a, int *low, int *high){
	int m = *low;

	printf("%d\n", m);

	for(;;)	{
		while(m <= *high && high != low)
			high--;

		if(high == low) break;
		*(low++) = *high;

		while(m >= *low && high != low)
			low++;

		if(high == low) break;
		*(high--) = *low;
	}

	*high = m;

	return high;
}

