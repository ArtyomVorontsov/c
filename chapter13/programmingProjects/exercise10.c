#include <stdio.h>
#include <ctype.h>
typedef int bool;

void reverse_name(char *name);

int main(void){
	char fn_and_ln[100];
	char *fn_and_ln_ptr = fn_and_ln;

	printf("Enter a first and last name: ");
	while((*fn_and_ln_ptr++ = getchar()) != '\n');
	reverse_name(fn_and_ln);

	return 0;
}

void reverse_name(char *name){
	char fnfl = 0, c;
	bool is_surname = 0;

	while(1){
		c = *name;

		// Check for first name first letter
		if(fnfl == 0 && c != ' '){
			fnfl = c;
		} else 

		// Check for surname start
		if(fnfl != 0 && c == ' ' && is_surname == 0){
			is_surname = 1;
		} else

		// Check for surname
		if(fnfl != 0 && c != ' ' && c != '\n' && is_surname){
			putchar(c);
		} else 
		
		// Check for name end
		if(c == '\n'){
			putchar(',');
			putchar(' ');	
			putchar(fnfl);
			putchar('.');
			putchar('\n');
			break;
		}

		name++;
	}	
}

