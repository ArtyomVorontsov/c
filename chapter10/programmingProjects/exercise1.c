#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void){
	char c, size;
	bool match = false;

	printf("Enter parenthesses and/or braces: ");

	while((c = getchar()) != '\n'){
		if(c == '(' || c == '{') { 
			push(c); 
			continue;
		}

		if(c == ')')
			match = ('(' == pop());

		if(c == '}')
			match = ('{' == pop());

		if(match == false) break;
	}

	if(match && is_empty()) 
		printf("Parenthesses/braces are nested properly\n");
	else 
		printf("Parenthesses/braces are not nested properly\n");

	return 0;
}

void make_empty(void){
	top = 0;
}

bool is_empty(void){
	return top == 0;
}

bool is_full(void){
	return top == STACK_SIZE;
}

void push(char i){
	if(is_full())
		stack_overflow();
	else
		contents[top] = i, ++top;
}

char pop(void){
	if(is_empty())
		stack_underflow();
	else
		return contents[--top];
}

void stack_overflow(void){
	exit(EXIT_SUCCESS);
}

void stack_underflow(void){
	exit(EXIT_SUCCESS);
}
