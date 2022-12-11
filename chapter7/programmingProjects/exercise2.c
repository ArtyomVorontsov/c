#include <stdio.h>

int main(void){
	long int n, odd, square, i;

	printf("This program prints number of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%ld", &n);
	getchar(); // remove \n char
	i = 1;
	odd = 3;
	for(square = 1; i <= n; odd += 2){
		printf("%40ld% 40ld\n", i, square);
		++i;
		square += odd;

		if(i % 25 == 0){
			printf("Press enter to continue...");
			getchar();
		}
	}
	return 0;
}

