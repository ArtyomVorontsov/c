#include <stdio.h>
#define MAX_SENTENCE_LENGTH 30
#define MAX_WORD_LENGTH 20

int main(void){
	char sentence[MAX_SENTENCE_LENGTH][MAX_WORD_LENGTH] = {0};
	char sentence_end[30][2] = {0};
	char *word_ptr;
	int i = 0, j = 0;
	
	printf("Enter a sentence: ");
	// Read sentence 	
	while(i < MAX_SENTENCE_LENGTH){
		word_ptr = *(sentence + i);
		while((*word_ptr++ = getchar()) != ' '){
			if(*(word_ptr - 1) == '\n') {
				*(word_ptr - 1) = '\0';
				goto read_exit;
			}
			if(*(word_ptr - 1) == '?' ){
				word_ptr--;
				**(sentence_end + j) = '?';
			}

			if(*(word_ptr - 1) == '!'){
				word_ptr--;
				**(sentence_end + j) = '!';
			}
		}
		*(word_ptr - 1) = '\0';
		i++;
	}
	read_exit:

	while(i > -1) {
		printf("%s", *(sentence + i));
		if(i != 0) printf(" ");
		i--;
	}
	while(j > -1) printf("%s", *(sentence_end + j)), j--;
	putchar('\n');	

	return 0;
}

