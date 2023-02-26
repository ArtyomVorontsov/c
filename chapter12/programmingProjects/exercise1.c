#include <stdio.h>
#define MSG_MAX_LENGTH 50

void *reverse_message(char *a, int n);
void print_array(char *a, int n);
int write_array(char *a, int n);

int main(void){
	char a[MSG_MAX_LENGTH] = {0}, n;
	char *reversed;

	n = write_array(a, MSG_MAX_LENGTH);
	printf("original: ");
	print_array(a, n);
	printf("reversed: ");
	reverse_message(a, n);
	print_array(a, n);

	return 0;
}

void *reverse_message(char *a, int n){
	char a_copy[n];
	int i;

	for(i = 0; i < n; i++)
		a_copy[i] = a[i];
	
	a[n] = '\n';
	for(i = 0; i < n; i++)
		a[i] = a_copy[n - i - 1];
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
