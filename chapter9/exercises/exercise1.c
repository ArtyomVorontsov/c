#include <stdio.h>

double triangle_area(double base, double height);

int main(void){
	triangle_area(10, 20);
	
	return 0;
}

double triangle_area(double base, double height)
{
	double product;

	product = base * height;
	return product / 2;
}

