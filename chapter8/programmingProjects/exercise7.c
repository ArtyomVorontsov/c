#include <stdio.h>

int main(void){
	int a[5][5], i, j, row_sum[5] = {0}, col_sum[5] = {0};

	for(i = 0; i < 5; i++){	
		printf("Enter row %d: ", i + 1);
		for(j = 0; j < 5; j++){
			scanf("%d", &a[i][j]);
		}
	}

	// Print 
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(j == 0) printf("\n");
			printf("%d ", a[i][j]);
		}
	}
	printf("\n\n");

	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			row_sum[i] += a[i][j];
			col_sum[i] += a[j][i];
		}
	}

	printf("Row totals: ");
	for(i = 0; i < 5; i++){
		printf("%d  ", row_sum[i]);	
	}

	printf("\nColumn totals: ");
	for(i = 0; i < 5; i++){
		printf("%d  ", col_sum[i]);	
	}

	printf("\n");

	return 0;
}

