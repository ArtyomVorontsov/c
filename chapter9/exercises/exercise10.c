#include <stdio.h>
#define N 10
int array_max(int a[], int n);
int array_avr(int a[], int n);
int array_pos_el(int a[], int n);

int main(void){
	int a[N], i;

	printf("Input %d intengers: ", N);

	for(i = 0; i < N; i++)
		scanf("%d", &a[i]);

	printf("Max value: %d\n", array_max(a, N));
	printf("Average value: %d\n", array_avr(a, N));
	printf("Positive element value: %d\n", array_pos_el(a, N));

	return 0;
}

int array_max(int a[], int n){
	int largest = a[0];
	for(int i = 0; i < n; i++)
		if(largest < a[i]) largest = a[i];
	
	return largest;		
}

int array_avr(int a[], int n){
	int avr = 0;
	for(int i = 0; i < n; i++)
		avr += a[i];

	return avr / n;	
}


int array_pos_el(int a[], int n){
	int pos_el = 0;
	for(int i = 0; i < n; i++)
		if(a[i] >= 0) pos_el++;

	return pos_el;
}

