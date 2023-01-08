#include <stdio.h>
#define MAX_SENTENCE_LENGTH 100

int main(void){
	char sentence[MAX_SENTENCE_LENGTH] = {0};
	int i = 0, j = 0, k = 0, s_length, w_start, w_end, word_count;
	
	printf("Enter a sentence: ");
	// Read sentence 	
	while((sentence[i++] = getchar()) != '\n');
	s_length = i - 2;
	w_end = s_length;

	printf("Reversal of sentence: ");
	for(i = 0; i <= s_length; i++){
		if(sentence[i] == ' ' || i == s_length){

			// Determine word start and word end
			for(j = w_end; sentence[j] != ' ' && j > 0; j--, k++);
			w_start = j;
		
			// Print word	
			for(; j <= w_end; j++)
				if(sentence[j] != '?' && sentence[j] != ' ') putchar(sentence[j]);
			
			w_end = w_start - 1;

			sentence[i] == '?' ? putchar('?') : putchar(' ');
		}
	}
	putchar('\n');	

	return 0;
}

