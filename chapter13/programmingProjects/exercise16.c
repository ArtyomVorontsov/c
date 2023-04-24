#include <stdio.h>
#define MSG_MAX_LENGTH 50

void print_array(char *a, int n);
int write_array(char *a, int n);

void reverse(char *message);

int main(void){
	char a[MSG_MAX_LENGTH] = {0}, n;
	char *reversed;

	n = write_array(a, MSG_MAX_LENGTH);
	printf("original: ");
	print_array(a, n);
	printf("reversed: ");
	reverse(a);
	print_array(a, n);

	return 0;
}
void reverse(char *message){
	// first char
	char *p1 = message;
	char t;

	while(*message++);
	// last char
	char *p2 = message - 2;

	while(p1 < p2) {
		t = *p1;
		*p1 = *p2;
		*p2 = t;
		
		p1++, p2--;
	}

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

