#include <stdio.h>
#include <stdbool.h>
#define DAYS 7
#define HOURS 24

int sum_two_dimensional_array(const int *a, int n);

int main(void){
	int temperatures[DAYS][HOURS] = {
		{ 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 8, 4, 3 },
		{ 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 8, 4, 3 },
		{ 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 8, 4, 3 },
		{ 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 8, 4, 3 },
		{ 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 8, 4, 3 },
		{ 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 8, 4, 3 },
		{ 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 8, 4, 3 }
	};
	int sum;

	sum = sum_two_dimensional_array(temperatures, DAYS * HOURS);

	printf("%d \n", sum);
	
	return 0;
}

int sum_two_dimensional_array(const int *a, int n){
	int sum, *p;


	for(sum = 0, p = a; p < a + n; p++)
		sum += *p;

	return sum;
}

