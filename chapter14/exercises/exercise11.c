#include <stdio.h>
#define ERROR(text, ...) fprintf(stderr, (text), __VA_ARGS__)


int main(){
	int index = 1;	
	ERROR("Range error: index = %d\n", index);

	return 0;
}

