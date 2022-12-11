#include <stdio.h>

int main(void){
	double i = 1, sum = 0;
	printf("This program sums a series of intengers.\n");
	printf("Enter integers (0 to terminate): ");
	
	sum = 0;
	while(i != 0){
		scanf("%lf", &i);
		sum += i;
	}
	printf("The sum is: %.2lf\n", sum);
	return 0;
}
