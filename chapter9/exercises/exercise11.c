#include <stdio.h>
#define N 10

float compute_GPA(char grades[], int n);



int main(void){
	int i = 0;
	char grades[N];
	float GPA = 0.0f;

	printf("Type all grades: ");
	for(i = 0; i < N; i++ ){
		printf("i: %d, N: %d \n", i, N);
		grades[i] = getchar();
		// remove \n char from buffer
		getchar();
	}

	GPA = compute_GPA(grades, N);

	printf("GPA: %f\n", GPA);

	return 0;
}

float compute_GPA(char grades[], int n){
	float sum = 0.0f;

	for(int j = 0; j < n; j++){
		switch(grades[j]){
			case 'A':
				sum += 4.0f;
				break;
			case 'B':
				sum += 3.0f;
				break;
			case 'C':
				sum += 2.0f;
				break;
			case 'D':
				sum += 1.0f;
				break;
			case 'F':
				sum += 0.0f;
				break;
			default:
				break;

		}
	}

	return (float)(sum / n);

}

