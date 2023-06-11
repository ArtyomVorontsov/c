#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "./stack.h"

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

