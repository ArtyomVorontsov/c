#include <stdio.h>
#define ARRAY_LENGTH 40

int main(void){
	int i = 0, fib_numbers[ARRAY_LENGTH] = {0, 1};

	while(i < ARRAY_LENGTH - 2){
		fib_numbers[i + 2] = fib_numbers[i] + fib_numbers[i + 1];
		
		printf("%10d", fib_numbers[i]);
		if(i && !((i + 1)% 10)) printf("\n");

		if(i == ARRAY_LENGTH - 3) printf("%10d%10d", fib_numbers[i + 1], fib_numbers[i + 2]);

		++i;
	}

	printf("\n");
	
	return 0;
}

