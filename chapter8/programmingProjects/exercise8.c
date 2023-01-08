#include <stdio.h>

int main(void){
	int a[5][5], i, j, row_sum[5] = {0}, col_sum[5] = {0},
	student_total_score[5] = {0}, student_average_score[5] = {0},
	quiz_average_score[5] = {0}, quiz_high_score[5] = {0}, quiz_low_score[5] = {0};

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

			quiz_low_score[i] = a[j][i];
		}
	}
	printf("\n\n");

	

	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			student_total_score[i] += a[i][j];
			student_average_score[i] += a[i][j];

			if(a[j][i] > quiz_high_score[i])
				quiz_high_score[i] = a[j][i];
			
			if(a[j][i] < quiz_low_score[i])
				quiz_low_score[i] = a[j][i];

			quiz_average_score[i] += a[j][i];

		}
		student_average_score[i] /= 5;
		quiz_average_score[i] /= 5;
	}


	printf("Student total score: ");
	for(i = 0; i < 5; i++)
		printf("%d  ", student_total_score[i]);	

	printf("\nStudent average score: ");
	for(i = 0; i < 5; i++)
		printf("%d  ", student_average_score[i]);

	printf("\nQuiz average score: ");
	for(i = 0; i < 5; i++)
		printf("%d  ", quiz_average_score[i]);

	printf("\nQuiz high score: ");
	for(i = 0; i < 5; i++)
		printf("%d  ", quiz_high_score[i]);

	printf("\nQuiz low score: ");
	for(i = 0; i < 5; i++)
		printf("%d  ", quiz_low_score[i]);

	printf("\n");

	return 0;
}

