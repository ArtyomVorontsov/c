#include <stdio.h>

int main(void){
	int row_count, i;
	
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table:");
	scanf("%d", &row_count);

	i = 1;
	while(i <= row_count){
		printf("%10d%10d\n", i, i * i);
		++i; 
	}

	return 0;
}
