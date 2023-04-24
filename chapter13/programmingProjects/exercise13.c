#include <stdio.h>

void encrypt(char *message, int shift);

int main(void){
	char sentence[80] = {0}, c;	
	int i = 0, s_length, n;

	printf("Enter message to be encrypted: ");
	while((sentence[i++] = getchar()) != '\n');

	printf("Enter shift amount: ");
	scanf("%d", &n);	

	printf("Encrypted message: ");
	encrypt(sentence, n);

	printf("%s\n", sentence);

	return 0;
}

void encrypt(char *message, int shift){
	while(*message){
		if(*message >= 'A' && *message <= 'Z')
			*message = ((*message - 'A') + shift) % 26 + 'A';

		if(*message >= 'a' && *message <= 'z')
			*message = ((*message - 'a') + shift) % 26 + 'a';
		
		message++;
	}
}
