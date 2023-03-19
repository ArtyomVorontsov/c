#include <stdio.h>
#include <ctype.h>

#define N 100

int strcmp(char *s, char *t);

int main(void){
	char str[N];
	char str2[N];
	int res;

	printf("type something: ");
	scanf("%s", str);

	printf("type something2: ");
	scanf("%s", str2);

	res = strcmp(str, str2);

	printf("res: %d\n", res);

	return 0;

}

int strcmp(char *s, char *t){
	for(;*s == *t; s++, t++)
		if(*s == '\0')
			return 0;

	return *s - *t;
}
