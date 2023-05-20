#include <stdio.h>
#define STRINGIFY(str) #str
#define GET_STR_LINE(str) STRINGIFY(str)
#define LINE_FILE "Line " GET_STR_LINE(__LINE__) " of " __FILE__

int main(void){
	const char *str = LINE_FILE;
	printf("%s\n", str);

	return 0;
}

