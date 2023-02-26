#include <stdio.h>
#include <ctype.h>
#define MSG_MAX_LENGTH 50

void print_array(char *a, int n);
int write_array(char *a, int n);
int is_palindrome(char *a, int n);

int main(void){
	char a[MSG_MAX_LENGTH] = {0}, n;
	char *reversed;
	int is_p;

	printf("type: ");
	n = write_array(a, MSG_MAX_LENGTH);
	print_array(a, n);
	is_p = is_palindrome(a, n);

	if(is_p) printf("Is palindrome");
	else printf("Is not palindrome");

	printf("\n");

	return 0;
}

int is_palindrome(char *a, int n){
	char a_copy[n], c, *p, *p2, *last_element;
	int i, is_palindrome = 1;
	

	for(p = a, p2 = a_copy; p < a + n; p++){ 
		c = tolower(*p);
		if((c >= 'a') && (c <= 'z')) *p2 = c, p2++;
	}
	p2--;

	last_element = p2;

	for(p = a_copy; p < last_element; p++, p2--)
		if(*p != *p2) is_palindrome = 0;

	return is_palindrome;
}

void print_array(char *a, int n){
	char *p;

	for(p = a; p < a + n; p++) putchar(*p);

	putchar('\n');
}

int write_array(char *a, int n){
	char c, *p;
	int s = 0;
	p = a;
	
	while((c = getchar()) != '\n')
		(*(p++) = c), s++;

	return s;
}

