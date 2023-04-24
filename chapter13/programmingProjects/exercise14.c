#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define WORD_MAX_LENGTH 26

bool are_anagrams(const char *word1, const char *word2);

int main(void){
	char first_word[WORD_MAX_LENGTH] = {0}, 
		second_word[WORD_MAX_LENGTH] = {0}, c;
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

	printf("The words are ");
	are_anagrams(first_word, second_word) ? (printf("anagrams\n")) : (printf("not anagrams\n"));

	return 0;	
}

bool are_anagrams(const char *word1, const char *word2){
	char *p = word1;
	bool is_anagram = true;

	while((word1 - p) < WORD_MAX_LENGTH){
		if(*word1++ != *word2++) is_anagram = false;
	}

	return is_anagram;
}

