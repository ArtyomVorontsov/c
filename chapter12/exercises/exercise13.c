#include <stdio.h>
#define N 10

void matrix(double ident[N][N]);

int main(void){
	double ident[N][N];
	int col, row;

	matrix(ident);
	for(row = 0; row < N; row++) {
		printf("\n");
		for(col = 0; col < N; col++)
			printf("%2.0lf", ident[row][col]);
	}
	printf("\n");
		
	return 0;
}

void matrix(double ident[N][N]){
	double *p, cons_z;

	for(p = &ident[0][0], cons_z = N; p <= &ident[N-1][N-1]; p++){
		if(cons_z == N) {
			cons_z = 0;
			*p = 1.0;
		} 
		else {
			cons_z++;
			*p = 0.0;
		}
	}

}

