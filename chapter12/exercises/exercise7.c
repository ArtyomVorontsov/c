#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);

int main(void){
	int n = 5, a[] = { 1, 2, 3, 4, 5};
	bool found;

	found = search(a, n, 3);

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

