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
	int i = 0;
	char ch;

	while(i + 1 < N && (ch = str[i]) != '\0')
		str[i++] = toupper(ch);
}
