#include <stdio.h>
#define CHECK(x,y,n) (((x) == 0 || (x) <= (n)) && ((x) == 0 || (x) <= (n)))
#define MEDIAN(x, y, z) \
((x) < (y)) && ((x) > (z)) || ((x) > (y)) && ((x) < (z)) 	\
		? 		\
			(x) 	\
		: 		\
			(((y) < (x)) && ((y) > (z))) || (((y) > (x)) && ((y) < (z))) ? (y) : (z)

#define POLYNOMIAL(x) ((x) * ((x) * ((x) * ((x) * (((x) * 3) + 2) + 5) -1) + 7) - 6)

int main(void) {
	int check1 = CHECK(1, 2, 3);
	int check2 = CHECK(4, 2, 3);

	int median1 = MEDIAN(1, 3, 2);
	int median2 = MEDIAN(5, 3, 10);

	int polynomial1 = POLYNOMIAL(2);
	int polynomial2 = POLYNOMIAL(1);

	printf("check1: %d\n", check1);
	printf("check2: %d\n", check2);

	printf("median1: %d\n", median1);
	printf("median2: %d\n", median2);

	printf("polynomial1: %d\n", polynomial1);
	printf("polynomial2: %d\n", polynomial2);

	return 0;
}

