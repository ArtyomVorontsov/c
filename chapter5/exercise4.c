#include <stdio.h>

int main(void){
	int i, j;
	i = 0; j = 0;
	printf("%d\n", i < j ? -1 : !(i == j));
	return 0;
}
