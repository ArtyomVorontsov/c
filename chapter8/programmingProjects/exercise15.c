#include <stdio.h>

int main(void){
	char sentence[80] = {0}, c;	
	int i = 0, s_length, n;

	printf("Enter message to be encrypted: ");
	while((sentence[i++] = getchar()) != '\n');

	printf("Enter shift amount: ");
	scanf("%d", &n);	

	printf("Encrypted message: ");
	s_length = i;
	for(i = 0; i < s_length; i++){
		c = sentence[i];
		
		if(c >= 'A' && c <= 'Z')
			sentence[i] = ((c - 'A') + n) % 26 + 'A';

		if(c >= 'a' && c <= 'z')
			sentence[i] = ((c - 'a') + n) % 26 + 'a';
		
		
		putchar(sentence[i]);
	}
	putchar('\n');

	return 0;
}

