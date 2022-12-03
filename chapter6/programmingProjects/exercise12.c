#include <stdio.h>

int main(void){
	double e, fact, factNum, n, term;
	int i, j;

	printf("Type minimal term value: ");
	scanf("%lf", &n);

	e = 1.0f;
	for(int i = 1 ; ; ++i){
		j = 0;
		fact = 1.0f;
		factNum = 0.0f;

		// compute factorial
		while(j < i){
			++j;		
			++factNum;
			fact *= factNum;
		}			

		// Add term
		term = 1.0f / fact;	
		if(term < n) break;
		e += term;	
	}	
	printf("e is %.15f\n", e);
	return 0;
}

