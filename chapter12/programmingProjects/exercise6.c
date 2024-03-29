
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

	printf("low: %d \n", *low);
	if(low >= high) return;
	middle = split(a, low, high);
	printf("%d %d\n", *middle, *low);
	quicksort(a, low, middle - 1);
	quicksort(a, middle + 1, high);
}

int *split(int *a, int *low, int *high){
	int part_element = *low;

	for(;;){
		while(low < high && part_element <= *high)
			high--;
		if(low >= high) break;
		*(low++) = *high;

		while(low < high && part_element >= *low)
			low++;
		if(low >= high) break;
		*(high--) = *low;
	}

	*high = part_element;
	return high;
}

