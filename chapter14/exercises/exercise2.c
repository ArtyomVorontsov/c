#include <stdio.h>
#define NELEMS(a) (int) ((sizeof a) / sizeof(a[0]))

int main(void){
	int arr[10] = {1};

	printf("Number of elements: %d\n", NELEMS(arr));

	return 0;
}

