#include <stdio.h>

int main(void){
	int input;
	
	printf("Enter a number: ");
	scanf("%d", &input);
		
	printf("The reversal is: ");
	do{
		printf("%d", input % 10);
		input /= 10;
	} while (input);
	printf("\n");

	return 0;
	
}
