#include <stdio.h>
#include <ctype.h>
typedef int bool;

int main(void){
	char fnfl = 0, c = 0, last_name[20] = {0};
	int i = 0;

	printf("Enter a first and last name: ");

	while(((c = getchar()) != ' ')) if(!fnfl) fnfl = c;

	while((c = getchar()) != '\n'){
		if(c != ' ') last_name[i++] = c;
	}

	i = 0;
	while((c = last_name[i++]) != 0) printf("%c", c);

	printf(", %c.\n", fnfl);

	return 0;
}

