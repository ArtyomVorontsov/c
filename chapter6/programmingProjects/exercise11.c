#include <stdio.h>

int main(void){
	double e, fact, factNum;
	int i, n, j;

	printf("Type approximation value: ");
	scanf("%d", &n);

	e = 1;
	for(i = 1; n > i; ++i){
		j = 0;
		fact = 1.0f;
		factNum = 0.0f;
		while(j < i){
			++j;		
			++factNum;
			fact *= factNum;
		}			
		e += 1.0f/fact;	
		printf("fact: %f  e: %f\n", fact, e);
	}	
	printf("e is %.15f\n", e);
	return 0;
}

