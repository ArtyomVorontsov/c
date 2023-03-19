#include <stdio.h>
#include <ctype.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url);

int main(void){
	char domain[100] = "knking.com";
	char *index_url = "/index.html";

	build_index_url(domain, index_url);

	printf("url: %s\n", domain);

	return 0;
}

void build_index_url(const char *domain, char *index_url){
	char *domain_prefix  = "http://www.";
	int domain_prefix_length = strlen(domain_prefix);
	int domain_length = strlen(domain);
	char buff[100];

	strcpy(buff, domain_prefix);
	strcpy(buff + domain_prefix_length, domain);
	strcpy(buff + domain_prefix_length + domain_length, index_url);
	strcpy(domain, buff);
}
