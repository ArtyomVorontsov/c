#include <stdio.h>

int read_line(char str[], int n);

int main(void) {
	int n = 20; 
	char str[n];

	read_line(str, n);

	printf("\nReaded line: %s\n", str);

	return 0;
}

int read_line(char str[], int n){
	int ch, i = 0;

	while((ch = getchar()) != '\n')
		if(i < n) str[i++] = ch;

	str[i] = '\0';

	return i;
}

