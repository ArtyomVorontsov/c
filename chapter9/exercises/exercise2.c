#include <stdio.h>

int check(int x, int y, int n);

int main(void){
	int n = check(10, 20, 10);
	printf("%d\n", n);
	
	return 0;	
}

int check(int x, int y, int n){
	return (x > 0 && x < n - 1) &&
	(x > 0 && x < n - 1);
}

