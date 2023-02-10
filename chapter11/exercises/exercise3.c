#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum); 

int main(void){ 
	double avg, sum, nums[5] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	int n = 5;
		
	avg_sum(nums, n, &avg, &sum);

	printf("avg: %lf, sum: %lf\n", avg, sum);

	return 0;
}

void avg_sum(double a[], int n, double *avg, double *sum){
	int i;

	*sum = 0.0;
	*avg = 0.0;
	for(i = 0; i < n; i++)
		*sum += a[i];
	*avg = *sum / n;
}

