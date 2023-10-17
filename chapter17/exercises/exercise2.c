#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char * dublicate(char * s){
	char * s2 = malloc(strlen(s));
	s2 = strcpy(s2, s);

	return s2;
}

int main(void){

	char * s1 = "omgg";
	char * s2 = dublicate(s1);

	printf("%d %s, %d %s", s1, s1, s2, s2);

	return 0;
}
