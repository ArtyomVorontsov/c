#include <stdio.h>
#include <ctype.h>
typedef int bool;

int main(void){
	char fnfl = 0, c;
	bool is_surname = 0;

	printf("Enter a first and last name: ");

	while(1){
		c = getchar();
		
		// Check for first name first letter
		if(fnfl == 0 && c != ' '){
			fnfl = c;
			continue;
		}

		// Check for surname start
		if(fnfl != 0 && c == ' ' && is_surname == 0){
			is_surname = 1;
			continue;
		}

		// Check for surname
		if(fnfl != 0 && c != ' ' && c != '\n' && is_surname){
			putchar(c);
			continue;
		}
		
		// Check for name end
		if(c == '\n'){
			putchar(',');
			putchar(' ');	
			putchar(fnfl);
			putchar('.');
			putchar('\n');
			break;
		}
	}	
	return 0;
}

