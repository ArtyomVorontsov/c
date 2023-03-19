#include <stdio.h>

int count_spaces(const char *s);

int main(void){
	char *str = "hello world !";

	printf("%s\n", str);

	printf("spaces amount: %d\n", count_spaces(str));
	
	return 0;
}

int count_spaces(const char *s){
	int count = 0;

	while(*s++) if(*s == ' ') count++;

	return count;
}

