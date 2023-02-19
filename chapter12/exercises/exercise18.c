#include <stdio.h>
#include <ctype.h>

int evaluate_position(char *board, int n);

int main(void){
	char board[8][8] = {{0}};
	int res = 0;

	board[0][4] = 'K';
	board[0][3] = 'Q';

	board[7][4] = 'k';

	res = evaluate_position(board, 8 * 8);
	printf("%d\n", res);

	return 0;
}

int evaluate_position(char *board, int n){
	//k g r b n p
	int b = 0, w = 0, is_b = 0;
	char temp, *p;

	for(p = board; p < board + n; p = p + 1){
		temp = *p;
		if(temp > 'a') is_b = 1; else is_b = 0;
		temp = tolower(temp);

		switch(temp){
			case 'k':
				is_b ? (b += 10) : (w += 10);
				break;
			case 'q':
				is_b ? (b += 9) : (w += 9);
				break;
			case 'r':
				is_b ? (b += 5) : (w += 5);
				break;
			case 'b':
				is_b ? (b += 3) : (w += 3);
				break;
			case 'n':
				is_b ? (b += 3) : (w += 3);
				break;
			case 'p':
				is_b ? (b += 1) : (w += 1);
				break;
			default: 
				break;
		}	
	}	
		
	return w - b;
}

