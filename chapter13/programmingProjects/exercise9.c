#include <stdio.h>
#include <ctype.h>
typedef int bool;

int compute_vowel_count(const char *sentence);

int main(void){
	int vowel_count = 0;
	char sentence[100];

	printf("Enter a sentence: ");
	scanf("%s", sentence);
	vowel_count = compute_vowel_count(sentence);

	printf("Your sentence contains %d vowels.\n", vowel_count);

	return 0;
}

int compute_vowel_count(const char *sentence){
	char c;
	int vowel_count = 0;
	bool is_vowel;

	while(*sentence) {
		char c = toupper(*sentence++);
		is_vowel = c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
		if(is_vowel) ++vowel_count;	
	}

	return vowel_count;	
}

