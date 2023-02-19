#include <stdio.h>
#include <stdbool.h>
#define DAYS 7
#define HOURS 24

bool search(const int a[], int n, int key);

int main(void){
	bool found;
	int temperature[DAYS][HOURS] = {
		{ 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 8, 4, 3 },
		{ 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 8, 4, 3 },
		{ 1, 2, 3, 4, 5, 50, 7, 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 8, 4, 3 },
		{ 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 8, 4, 3 },
		{ 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 8, 4, 3 },
		{ 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 8, 4, 3 },
		{ 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 1, 2, 3, 4, 5, 5, 7, 8, 4, 3 }
	};

	found = search(temperature, DAYS * HOURS, 50);

	printf("found: %d\n", found);
	
	return 0;
}

bool search(const int a[], int n, int key){
	int *p;
	bool found = false;
	
	for(p = a; (p - a) < n; p++)
		if(*p == key) found = true;

	return found;
}

