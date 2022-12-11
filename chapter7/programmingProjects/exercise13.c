#include <stdio.h>

int main(void){
	int word_count = 0, word_length = 0, word_length_sum = 0;
	float average_word_length = 0.0f;
	char c;

	printf("Enter a sentence: ");
	while(1){
		c = getchar();
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
	printf("Average word length: %.1f\n", average_word_length);

	return 0;	
}

