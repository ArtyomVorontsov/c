#include <stdio.h>

void create_magic_square(int n, char ms[n][n]);
void print_magic_square(int n, char ms[n][n]);

int main(void){
	int i, x, y, n;

	printf("Enter size of magic square: ");
	scanf("%d", &n);

	char ms[n][n];

	// Compiler is not supporting initialization of variable-length arrays.
	// So we need init it manually.
	for(y = 0; y < n; y++)
		for(x = 0; x < n; x++)
			ms[y][x] = 0;

	create_magic_square(n, ms);
	print_magic_square(n, ms);

	return 0;	
}

void create_magic_square(int n, char ms[n][n]){
	int i, x, y;

	// Get initial coordinates
	y = 0;
	x = (n / 2);
	ms[y][x] = 1;
	
	for(i = 2; i < (n * n) + 1; i++){
		if(y == 0) y = n - 1; 
		else y--;

		if(x == (n - 1)) x = 0;
		else x++;	

		if(ms[y][x]) 
			x == 0 ? (x = n - 1) : (x -= 1),
			y == n - 1 ? (y = 1) : (y += 2);

		ms[y][x] = i;
	}

}

void print_magic_square(int n, char ms[n][n]){
	int x, y;

	for(y = 0; y < n; y++){
		for(x = 0; x < n; x++)
			printf(" %2.d ", ms[y][x]);
		printf("\n");
	}
		
}

