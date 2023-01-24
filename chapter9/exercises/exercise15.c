#include <stdio.h>

double median(int x, int y, int z);

int main(void){
	int res;
	double x = 10, y = 12, z = 3;

	res = median(x, y, z);
	
	printf("%d\n", res);

	return 0;
}

double median(int x, int y, int z){
	int median = 0;

	if(x < y && x < z)
		if(y < z) 
			median = y;
		else 
			median = z;

	if(y < x && y < z)
		if(x < z)
			median = x;
		else 
			median = z;

	if(z < x && z < y)
		if(x < y)
			median = x;
		else 
			median = y;

	return median;
}


