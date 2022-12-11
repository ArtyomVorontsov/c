#include <stdio.h>
#include <ctype.h>
typedef int bool;

int main(void){
	char c;
	bool is_vowel;
	int vowel_count = 0;

	printf("Enter a sentence: ");

	while((c = getchar())!= '\n'){
		c = toupper(c);
		is_vowel = c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
		if(is_vowel) ++vowel_count;	
	}

	printf("Your sentence contains %d vowels.\n", vowel_count);

	return 0;
}

