#include <stdio.h>
#define MSG_MAX_LENGTH 50

void *reverse_message(char *a, int n);
void print_array(char *a, int n);
int write_array(char *a, int n);

int main(void){
	char a[MSG_MAX_LENGTH] = {0}, n;
	char *reversed;

	printf("Type message: ");
	n = write_array(a, MSG_MAX_LENGTH);
	printf("original: ");
	print_array(a, n);
	reverse_message(a, n);
	printf("reversed: ");
	print_array(a, n);

	return 0;
}

void *reverse_message(char *a, int n){
	char a_copy[n], *p, *p2;

	for(p = a, p2 = a_copy; p < a + n; p++, p2++)
		*p2 = *p;

	p = a;	
	*(p + n) = '\n';
	

	for(p = a + n - 1, p2 = a_copy; p2 < a_copy + n; p--, p2++){
		*p = *p2;
	}
}

void print_array(char *a, int n){
	char *p;

	for(p = a; p < a + n; p++) putchar(*p);

	putchar('\n');
}

int write_array(char *a, int n){
	char c, *p;
	p = a;
	
	while((c = getchar()) != '\n')
		*(p++) = c;

	return p - a;
}

