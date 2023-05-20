#include <stdio.h>
#define CUBE(x) (x) * (x)
#define REMINDER(n) (n) % 4
#define LESS_THAN_100(x, y) (x) * (y) < 100

int main(void){
	int cube = CUBE(2);
	int reminder = REMINDER(5);
	int less_than_100 = LESS_THAN_100(99, 1);
	int larger_than_100 = LESS_THAN_100(101, 1);

	printf("Cube %d\n", cube);
	printf("Reminder %d\n", reminder);
	printf("Less than 100 %d\n", less_than_100);
	printf("Larger than 100 %d\n", larger_than_100);

	return 0;
}

