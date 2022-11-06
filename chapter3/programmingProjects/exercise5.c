#include <stdio.h>

int main(void){
	// Elements of magic square
	int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16;
	int rs1, rs2, rs3, rs4, cs1, cs2, cs3, cs4, ds1, ds2;

	// Get values	
	printf("Enter tne numbers from 1 to 16 in any order:");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12, &d13, &d14, &d15, &d16);

	// Compute sums
	rs1 = d1 + d2 + d3 + d4;
	rs2 = d5 + d6 + d7 + d8;	
	rs3 = d9 + d10 + d11 + d12;
	rs4 = d13 + d14 + d15 + d16;

	cs1 = d1 + d5 + d9 + d13;
	cs2 = d2 + d6 + d10 + d14;
	cs3 = d3 + d7 + d11 + d15;
	cs4 = d4 + d8 + d12 + d16;

	ds1 = d1 + d6 + d11 + d16;
	ds2 = d4 + d7 + d10 + d13;

	// Print magic square
	printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16);

	// Print sums
	printf("Row sums: %d %d %d %d\nColumn sums: %d %d %d %d\nDiagonal sums: %d %d\n", rs1, rs2, rs3, rs4, cs1, cs2, cs3, cs4, ds1, ds2);

	return 0;	
}
