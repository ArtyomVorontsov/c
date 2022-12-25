#include <stdio.h>
#include <stdbool.h> 

#define WEEKEND_ARRAY_LENGTH 7

int main(void){
	bool weekend[] = { true, [6] = true };
	int i = 0;
	
	while(i < WEEKEND_ARRAY_LENGTH){
		printf("%d", weekend[i]);
		++i;
	}
	printf("\n");

	return 0;	
}

