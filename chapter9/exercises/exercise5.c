#include <stdio.h>

int num_digits(int n);

int main(void){
	int number = 104000;
	int dig = num_digits(number);
	printf("%d\n", dig);

	return 0;
}

int num_digits(int n){
	int i = 1;

	while( (n /= 10) != 0 ) i++;

	return i;
}

