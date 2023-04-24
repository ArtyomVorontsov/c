#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variablesn*/
int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);
void read_rpn(void);
int evaluate_rpn_expression(const char *expression);

int main(void){
	char expression[100];
	char *p = expression;
	int res = 0;
	

	printf("Enter an rpm expression: ");
	while((*p++ = getchar()) != '\n');

	res = evaluate_rpn_expression(expression);
	printf("Result: %d\n", res);

	return 0;
}

int evaluate_rpn_expression(const char *expression){
	char *p = expression;
	char op1, op2;
	int res;

	while(*p != '\0'){
		if(*p >= '0' && *p <= '9') {
			push(*p - '0');
			p++;
			continue;
		}
		
		switch(*p){
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
				make_empty();
			case ' ':
			default:
				break;
		}

		p++;
	}
	return res;
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
