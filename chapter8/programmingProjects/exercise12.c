#include <stdio.h>
#include <ctype.h>

int main(void){
	char c;
	int score = 0;
	printf("Enter a word: ");

	int letters[26] = {
		1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10
	};

	while((c = getchar()) != '\n'){
		c = toupper(c);
		score += letters[c - 65];
	}
	printf("Scrabble value: %d\n", score);
	return 0;
}

