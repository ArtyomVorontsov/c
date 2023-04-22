#include <stdio.h>

double compute_average_word_length(const char *sentence);

int main(void){
	char sentence[100];
	char *sentence_ptr = sentence;
	float average_word_length = 0.0f;

	printf("Enter a sentence: ");
	while((*sentence_ptr++ = getchar()) != '\n');
	average_word_length = compute_average_word_length(sentence);

	printf("Average word length: %.1f\n", average_word_length);
	return 0;	
}

double compute_average_word_length(const char *sentence){
	int word_count = 0, word_length = 0, word_length_sum = 0;
	float average_word_length = 0.0f;
	char c;

	while(1){
		c = *sentence++;
		if(c == ' ' || c == '\n'){
			word_count += 1;
			word_length_sum += word_length;
			word_length = 0;
			if( c == '\n') break;
			continue;
		}
		word_length += 1;
	}
	average_word_length = (float) word_length_sum / (float) word_count;

	return average_word_length;
}

