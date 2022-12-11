#include <stdio.h>
#include <ctype.h>

int main(void){
	int i, command;
	printf("Enter an integer: ");
	scanf("%d", &i);
	printf("Enter a command: ");
	command = getchar();
	
	printf("\nint: %d  command: %d\n", i, command);	
	return 0;
}

