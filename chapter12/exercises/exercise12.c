#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void){

	int largest, second_largest, n = 4, a[] = {1, 2, 10, 3};
	
	find_two_largest(a, n, &largest, &second_largest);

	printf("largest: %d\nsecond largest: %d\n", largest, second_largest);

	return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest){
	int *p, temp;

	*largest = *a;
	if(n > 1) *second_largest = *(a + 1); else return;

	if(*largest < *second_largest) {
		/* swap pointers */
		temp = *second_largest;
		*second_largest = *largest;
		*largest = temp;
	}

	for(p = a; p < (a + n); p++)
		if(*p > *largest) {
			*largest = *p;
		}
		else if (*p > *second_largest)

	return;
}

