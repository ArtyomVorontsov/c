#include <stdio.h>

void swap(int *p, int *q);

int main(void){ 
	int p, q;

	p = 5;
	q = 10;
	
	printf("p: %d, q: %d\n", p, q);

	printf("swap...\n");
	swap(&p, &q);
	
	printf("p: %d, q: %d\n", p, q);

	return 0;
}

void swap(int *p, int *q){
	int t;

	t = *p;
	*p = *q;
	*q = t;
}

