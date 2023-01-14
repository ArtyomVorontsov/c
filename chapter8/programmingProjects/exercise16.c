#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define WORD_MAX_LENGTH 26

int main(void){
	char first_word[WORD_MAX_LENGTH] = {0}, 
		second_word[WORD_MAX_LENGTH] = {0}, c;
	bool is_anagram = true;	
	int i = 0;
	
	printf("Enter first word: ");
	for(;;){
		c = getchar();
		if(!isalpha(c)) break;
		first_word[toupper(c) - 'A']++;
	}
	
	printf("Enter second word: ");
	for(;;){
		c = getchar();
		if(!isalpha(c)) break;
		second_word[toupper(c) - 'A']++;
	}

	for(i = 0; i < WORD_MAX_LENGTH; i++){
		if(first_word[i] != second_word[i]) is_anagram = false;
	}

	printf("The words are ");
	is_anagram ? (printf("anagrams\n")) : (printf("not anagrams\n"));

	return 0;	
}

