#include <stdio.h>
#include <ctype.h>
#define MAX_LENGTH 100

int compute_scrabble_value(const char *word);

int main(void){
	char word[MAX_LENGTH];
	int score = 0;
	printf("Enter a word: ");
	scanf("%s", word);

	score = compute_scrabble_value(word);

	printf("Scrabble value: %d\n", score);
	return 0;
}


int compute_scrabble_value(const char *word) {
	int scrabble_value[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
	int *svp = scrabble_value;
	int score = 0;

	while(*word)
		score += svp[toupper(*word++) - 'A'];

	return score;
}
