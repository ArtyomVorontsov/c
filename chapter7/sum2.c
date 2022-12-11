#include <stdio.h>
#include <limits.h>

int main(void){
	long i = 1, sum;
	printf("Minimum value of int %d\n", INT_MIN);
   	printf("Maximum value of int %d\n", INT_MAX);
 	printf("Minimum value of long int %ld\n", LONG_MIN);
   	printf("Maximum value of long int %ld\n", LONG_MAX);
	printf("This program sums a series of intengers.\n");
	printf("Enter integers (0 to terminate): ");
	
	sum = 0;
	while(i != 0){
		scanf("%ld", &i);
		sum += i;
	}
	printf("The sum is: %ld\n", sum);
	return 0;
}
