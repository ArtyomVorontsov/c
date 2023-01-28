#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define WORD_MAX_LENGTH 26

void read_word(int counts[WORD_MAX_LENGTH]);
bool equal_array(int counts1[WORD_MAX_LENGTH], int counts2[WORD_MAX_LENGTH]);

int main(void){
	int first_word[WORD_MAX_LENGTH] = {0}, 
		second_word[WORD_MAX_LENGTH] = {0}, c;
	bool is_anagram = true;	
	int i = 0;
	
	printf("Enter first word: ");
	read_word(first_word);
	
	printf("Enter second word: ");
	read_word(second_word);

	is_anagram = equal_array(first_word, second_word);

	printf("The words are ");
	is_anagram ? (printf("anagrams\n")) : (printf("not anagrams\n"));

	return 0;	
}

void read_word(int counts[WORD_MAX_LENGTH]){
	char c;
	for(;;){
		c = getchar();
		if(!isalpha(c)) break;
		counts[toupper(c) - 'A']++;
	}

}

bool equal_array(int counts1[WORD_MAX_LENGTH], int counts2[WORD_MAX_LENGTH]){
	bool is_anagram = true;

	for(int i = 0; i < WORD_MAX_LENGTH; i++){
		if(counts1[i] != counts2[i]) is_anagram = false;
	}
	
	return is_anagram;
}

