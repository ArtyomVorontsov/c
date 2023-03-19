#include <stdio.h>
#include <ctype.h>
#include <string.h>

void remove_filename(char *url);

int main(void){
	char url[100] = "http://www.knking.com/index.html";

	remove_filename(url);

	printf("url: %s\n", url);

	return 0;
}

void remove_filename(char *url){
	char *url_start;

	while(*url++);

	while(*url-- != '/' && url != url_start);

	if(url != url_start) *(url + 1) = '\0';
}

