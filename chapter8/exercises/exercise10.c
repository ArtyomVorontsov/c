#include <stdio.h>

int main(void){
	char chess_board[8 * 8] = {
		'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r',
		'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p',
		' ', '.', ' ', '.', ' ', '.', ' ', '.', 
		'.', ' ', '.', ' ', '.', ' ', '.', ' ', 
		' ', '.', ' ', '.', ' ', '.', ' ', '.', 
		'.', ' ', '.', ' ', '.', ' ', '.', ' ', 
		'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p',
		'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r',
	};

	for(int i = 0; i < 8 * 8; i++){
		printf(" %c ", chess_board[i]);
		if(!((i+1) % 8)) printf("\n");
	}

	printf("\n");
	
	return 0;
}

