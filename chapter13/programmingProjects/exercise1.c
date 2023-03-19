#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 20
#define EXCEPTION_LENGTH 4

int main(void){
	char smallest_word[MAX_LENGTH] = {0};
	char largest_word[MAX_LENGTH] = {0};
	char current_word[MAX_LENGTH] = {0};
	int word_length;
	
	do {
		printf("Enter word: ");
		scanf("%s", current_word);

		if(*smallest_word == '\0')
			strcpy(smallest_word, current_word);

		
		word_length = strlen(current_word);

		if(word_length > MAX_LENGTH) break;

		if(strcmp(largest_word, current_word) < 0) 	// largest_word < current_word ? 
			strcpy(largest_word, current_word);
		
		if(strcmp(current_word, smallest_word) < 0) 	// current_word < smallest_word ? 
			strcpy(smallest_word, current_word);

		if(word_length == EXCEPTION_LENGTH) break;
	} while (1);
	

	printf("Smallest word: %s\n", smallest_word);
	printf("Largest word: %s\n", largest_word);

	return 0;
}

