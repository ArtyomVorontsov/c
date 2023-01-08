#include <stdio.h>
#include <ctype.h>
#define MAX_SENTENCE_LENGTH 100

int main(void){
	char sentence[MAX_SENTENCE_LENGTH] = {0};
	char r_sentence[MAX_SENTENCE_LENGTH] = {0};
	int c = 0, i = 0, j = 0, k = 0, w_start, w_end, s_length;

	printf("Enter a sentence: ");
	while((sentence[i++] = getchar()) != '\n');
	// Set length of string
	s_length = i - 1;
	
	// Reverse sentence words
	for(;;){

	}	

	return 0;
}

