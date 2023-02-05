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
int evaluate_rpn(void);
void read_rpn(void);

int main(void){
	int exit = false;

	while(!exit) exit = evaluate_rpn();

	return 0;
}

int evaluate_rpn(void){
	char ch, op1, op2;
	int res;
	printf("Enter an rpm expression: ");
	while((ch = getchar()) != '\n') {
		
		if(ch >= '0' && ch <= '9') {
			push(ch - '0');
			continue;
		}

		switch(ch){
			case '+': 
				op1 = pop();
				op2 = pop();
				res = op2 + op1;
				push(res);
				break;
				
			case '-':
				op1 = pop();
				op2 = pop();
				res = op2 - op1;
				push(res);
				break;

			case '/':
				op1 = pop();
				op2 = pop();
				res = op2 / op1;
				push(res);
				break;
			case '*':
				op1 = pop();
				op2 = pop();
				res = op2 * op1;
				push(res);
				break;

			case '=':
				printf("Value of expression: %d\n", res);
				make_empty();
				break;

			case ' ':
				break;

			default:
				break;
		}
	}
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
	printf("Expression is too complex\n");
	exit(EXIT_SUCCESS);
}

void stack_underflow(void){
	printf("Not enough operands in expression\n");
	exit(EXIT_SUCCESS);
}
