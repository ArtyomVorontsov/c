#include <stdlib.h>
#include <stdio.h>

int * create_array(int n, int initial_value){
	int * a = malloc(n * sizeof(int));
	int * p = a;
	
	if(a == NULL) exit(1);

	while(n--) *p++ = initial_value;

	return a;
}

int main(void){
	int s = 10;

	int * a = create_array(s, s);

	for(int i = 0; i < s; i++)
		printf("%d %d\n", i, a[i]);

	return 0;
}

