#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void){

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

void push(int i){
	if(is_full())
		stack_overflow();
	else
		contents[top++] = i;
	
}

int pop(void){
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
