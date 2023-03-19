#include <stdio.h>
#include <ctype.h>

int read_line(char str[], int n);

int main(void) {
	int n = 20; 
	char str[n];

	read_line(str, n);

	printf("\nReaded line: %s", str);

	return 0;
}

int read_line(char str[], int n){
	int ch, i = 0;

	while(isspace(ch = getchar()));

	do	
		if(i < n) str[i++] = ch;
	while(!isspace(ch = getchar()));

	if(ch == '\n') str[i++] = ch;

	str[i] = '\0';

	return i;
}

