#include <stdio.h>

int main(void){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	for(int i = 2; n >= i * i; i += 2){
		printf("%d\n", i * i);
	}
	return 0;
}

