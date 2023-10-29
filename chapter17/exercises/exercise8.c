#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

struct Node {
	struct Node * next;
	int value;
};

/* external variables */
struct Node * contents;
struct Node * top;

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
	top = contents;

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

			case 'q':
				return 1;
				
			default:
				break;
		}
	}
	return 0;
}


void make_empty(void){
	struct Node *t = contents;
	struct Node *t2;
	while(t->next != NULL){
		t2 = t->next;
		free(t);
		t = t2;
	}
}

bool is_empty(void){
	return contents - 1 == top;
}

bool is_full(void){
	struct Node *t = malloc(sizeof (struct Node));
	free(t);
	return t == NULL;
}

void push(int i){
	if(is_full()) {
		printf("is full\n");
		stack_overflow();
	}
	else {
		struct Node *t = malloc(sizeof (struct Node));

		// init
		t->next = NULL;
		t->value = i;

		if (contents == NULL){
			top = t;
			contents = t;
		} else {
			// assign new top
			top->next = t;
			top = t;
		}
	}
	
}

int pop(void){
	struct Node * prev = NULL;
	struct Node * curr = contents;
	int t;

	if(is_empty())
		stack_underflow();
	else {

		if(curr->next == NULL){
			t = curr->value;
			contents = NULL;
		} else {
			while(curr->next != NULL){
				prev = curr;
				curr = curr->next;
			}

			t = curr->value;
			top = prev;
			top->next = NULL;
		}
		free(curr);
		return t;
	}

	return 0;
}

void stack_overflow(void){
	printf("Expression is too complex\n");
	exit(EXIT_SUCCESS);
}

void stack_underflow(void){
	printf("Not enough operands in expression\n");
	exit(EXIT_SUCCESS);
}
