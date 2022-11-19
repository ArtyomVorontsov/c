#include <stdio.h>

int main(void){
	int i, k, j;

	i = 3; j = 4; k = 5;
	
	int x = i % j;
	int y = i < k;
	printf("x = %d, y = %d, x+y = %d\n", x, y, x+y);

	printf("%d\n", i % j + i < k);
	return 0;
}
