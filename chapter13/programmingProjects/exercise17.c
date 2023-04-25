#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define MSG_MAX_LENGTH 50

void print_array(char *a, int n);
int write_array(char *a, int n);
bool is_palindrome(const char *message);

int main(void){
	char a[MSG_MAX_LENGTH] = {0}, n;
	char *reversed;
	int is_p;

	n = write_array(a, MSG_MAX_LENGTH);
	print_array(a, n);
	is_p = is_palindrome(a);

	if(is_p) printf("Is palindrome");
	else printf("Is not palindrome");

	printf("\n");

	return 0;
}

bool is_palindrome(const char *message){
	char *p1 = message;
	char *p1_s = p1;
	while(*message++);
	char *p2 = message - 2;
	char *p2_s = p2;

	while(*p1++ == *p2-- && p1 <= p2_s && p2 >= p1_s);
	return p1_s == p2 + 1 && p2_s == p1 - 1;
}

void print_array(char *a, int n){
	int i;

	for(i = 0; i < n; i++) putchar(a[i]);

	putchar('\n');
}

int write_array(char *a, int n){
	int i = 0;
	char c;

	printf("Type message: ");
	
	while((c = getchar()) != '\n')
		a[i++] = c;

	return i;
}
