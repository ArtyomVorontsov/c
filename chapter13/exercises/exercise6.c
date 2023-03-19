#include <stdio.h>
#include <ctype.h>

#define N 100

void censor(char* str);
int read_line(char str[], int n);

int main(void){
	char str[N];

	printf("type something: ");
	read_line(str, N);

	censor(str);

	printf("%s", str);

	return 0;

}

void censor(char* str){
	int i = 0, j;
	char atm[3] = {'f', 'o', 'o'};

	while(str[i] != '\0'){
		for(j = 0; j < 3; j++){
			if(atm[j] != str[i + j]) break;
		}

		if(j == 3){
			for(j = 0; j < 3; j++)
				str[i + j] = 'x';

			i += 3;
		} else i++;
	}
}




int read_line(char str[], int n){
	int ch, i = 0;

	while((ch = getchar()) != '\n')
		if(i < n) str[i++] = ch;

	str[i] = '\0';

	return i;
}

