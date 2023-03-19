#include <stdio.h>
#include <ctype.h>

#define N 100

void capitalize(char* str);

int main(void){
	char str[N];

	printf("type something: ");
	scanf("%s", str);

	capitalize(str);

	printf("%s", str);

	return 0;

}

void capitalize(char* str){
	while((*str++ = toupper(*str)) != '\0');
}
