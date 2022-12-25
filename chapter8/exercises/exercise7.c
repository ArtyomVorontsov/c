#include <stdio.h>

//	Seven segment display schema:

//	   0	
//	  ---
//	5 | | 1
//	6 ---
//	4 | | 2
//	  ---
//	   3

int main(void){
	const int segments[10][7] = {
		{1, 1, 1, 1, 1, 1},
		{0, 1, 1},
		{1, 1, 0, 1, 1, 0, 1},
		{1, 1, 1, 1, [6] = 1},
		{0, 1, 1, [5] = 1,[6] = 1},
		{1, 0, 1, 1, 0, 1, 1},
		{1, 0, 1, 1, 1, 1, 1},
		{1, 1, 1},
		{1, 1, 1, 1, 1, 1, 1},
		{1, 1, 1, 1, 0, 1, 1},
	};

	int segment, i = 0, selected_number, n;
	int print_order[7] = {0, 5, 1, 6, 4, 2, 3};

	printf("Select number (0 - 9): ");
	scanf("%d", &selected_number);

	while(i < 7){
		n = print_order[i];
		segment = segments[selected_number][n];
	
		if(n == 0 || n == 6 || n == 3)
			if(segment){
				printf("---\n");
			} else {
				printf("   \n");
			}
	
		if(n == 5 || n == 4)
			if(segment){
				printf("|");
			} else {
				printf(" ");
			}
		
		if(n == 1 || n == 2)
			if(segment){
				printf(" |\n");
			} else {
				printf("  \n");
			} 
			
		++i;
	}

	return 0;
}

