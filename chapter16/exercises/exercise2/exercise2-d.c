#include <stdio.h>

int main(void){
	struct Numbers { double real, imaginary; };
	
	struct Numbers c1 = { .imaginary = 1.0 };
	struct Numbers c2 = { 1.0 };
	struct Numbers c3;

	c3.imaginary = c1.imaginary + c2.imaginary;
	c3.real = c1.real + c2.real;

	printf("real: %lf; imaginary: %lf\n", c3.real, c3.imaginary);

	return 0;
}

