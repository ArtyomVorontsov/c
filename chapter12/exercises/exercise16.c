#include <stdio.h>
#include <stdbool.h>
#define DAYS 7
#define HOURS 24

int find_largest(int *a, int n);

int main(void){
	int temperature[DAYS][HOURS] = {
		{ 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 8, 4, 3 },
		{ 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 8, 4, 3 },
		{ 1, 2, 3, 4, 5, 50, 7, 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 8, 4, 3 },
		{ 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 8, 4, 3 },
		{ 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 8, 4, 3 },
		{ 1, 2, 1233, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 8, 4, 3 },
		{ 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 8, 4, 3 }
	};
	int (*p)[HOURS];

	for(p = temperature; p < &temperature[0][0] + HOURS * DAYS; p++)
		printf("largest: %d \n", find_largest(p, HOURS));

	return 0;
}

int find_largest(int *a, int n){
	int *p, largest;

	for(p = a, largest = *p++; p < (a + n); p++)
		if(largest < *p) largest = *p;

	return largest;
}

