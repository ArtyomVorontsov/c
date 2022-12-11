#include <stdio.h>
// Answer for int: 46340
// Answer for short: 181
// Answer for long: 3037000500
int main(void){
	long int n, odd, square, i;
	char userChar;

	printf("This program prints number of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%ld", &n);

	i = 1;
	odd = 3;
	for(square = 1; i <= n; odd += 2){
		printf("%40ld% 40ld\n", i, square);
		++i;
		square += odd;

		if(i % 24 == 0){
			printf("Press enter to continue...");
			while(getChar() == 0x0A);
		}
	}
	return 0;
}

