#include <stdio.h>

int main(void){
	int d1, d2, d3, d4, fb, sb, fs, ss, largest_number, smallest_number;

	printf("Enter four intengers: ");
	scanf("%d %d %d %d", &d1, &d2, &d3, &d4);
	
	if(d1 > d2){
		fb = d1;
		fs = d2;
	}else{
		fb = d2;
		fs = d1;
	}

	if(d3 > d4){
		sb = d3;
		ss = d4;
	} else {
		sb = d4;
		ss = d3;
	}

	largest_number = fb > sb ? fb : sb;
	smallest_number = fs < ss ? fs : ss;

	printf("Largest: %d\nSmallest: %d\n", largest_number, smallest_number);	
	
	return 0;
}
