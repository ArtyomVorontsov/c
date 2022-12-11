#include <stdio.h>

int main(void){
	float sum = 0.0f, op1 = 0.0f;
	char op, c;
	int char_count = 0, op_count = 0;


	printf("Enter an expression: ");
	scanf("%f", &op1);
	printf("%f\n", op1);
	sum = op1;
	while((op = getchar()) != '\n'){
		switch(op){
			case '*':
				scanf("%f", &op1);
				sum *= op1;
			break;

			case '/':
				scanf("%f", &op1);
				sum /= op1;
			break;

			case '+':
				scanf("%f", &op1);
				sum += op1;
			break;

			case '-':
				scanf("%f", &op1);
				sum -= op1;
			break;

			default:
				printf("Unsupported operator: %c\n", op);
				return 1;
			break;
		}

	}
	printf("Value of expression: %.2f\n", sum);
	
	return 0;
}

