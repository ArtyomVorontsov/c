#include <stdio.h>
#include <ctype.h>

int main(void){
	char c, mesg[100] = {0};
	int i = 0, n;

	printf("Enter message: ");

	while((c = getchar()) != '\n'){
		c = toupper(c);
		switch(c){
			case 'A':
				c = '4';
				break;
			case 'B':
				c = '8';
				break;
			case 'E':
				c = '3';
				break;
			case 'I': 
				c = '1';
				break;
			case 'O':
				c = '0';
				break;
			case 'S':
				c = '5';
				break;
			default:
				break;
		}
			
		mesg[i] = c;
		i++;
	}

	for(n = 0; n < 10; n++) mesg[n + i] = '!';
	mesg[i + n + 10] = '\n';

	printf("In B1FF-speak: ");
	for(char c, i = 0; c != '\n'; c = mesg[i], i++){
		putchar(mesg[i]);
	}

	return 0;
}

