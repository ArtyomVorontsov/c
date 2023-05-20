#include <stdio.h>
#define AVG(x, y) ((x) + (y)) / 2
#define AREA(x, y) ((x) * (y))

int main(void){
	int avg = AVG(2, +4);
	int area = 8 / AREA(2, 2);
		
	printf("avg: %d\n", avg);
	printf("area: %d\n", area);

	return 0;
}

