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

	n = write_array(a, MSG_MAX_LENGTH);
	print_array(a, n);
	is_p = is_palindrome(a, n);

	if(is_p) printf("Is palindrome");
	else printf("Is not palindrome");

	printf("\n");

	return 0;
}

int is_palindrome(char *a, int n){
	char a_copy[n], c;
	int i, is_palindrome = 1, j;

	for(i = 0, j = 0; i < n; i++){ 
		c = tolower(a[i]);
		if((c >= 'a') && (c <= 'z')) a_copy[j] = c, j++;
	}

	for(i = 0; i < j; i++)
		if(a_copy[i] != a_copy[j - i - 1]) is_palindrome = 0;

	return is_palindrome;
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
