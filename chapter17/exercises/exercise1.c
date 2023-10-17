#include <stdlib.h>


void * my_malloc(long unsigned n){
	void * p = malloc(n);

	if(p == NULL) exit(1);

	return p;
}
