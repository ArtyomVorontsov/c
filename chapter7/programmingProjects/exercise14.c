#include <stdio.h>
#include <math.h>

int main(void){
	double x, y, old_y, pred;

	printf("Enter a positive number: ");
	scanf("%lf", &x);

	y = 1;
	old_y = 0;	
	pred = 1;

	while(pred = fabs(old_y - y) > .00001 * y, old_y = y, pred){
		y = (x/y + y)/2;
		printf("Square root approximation: %.5lf\n", y);

	}
	printf("Approximation: %.5lf\n", y);

	return 0;
}

