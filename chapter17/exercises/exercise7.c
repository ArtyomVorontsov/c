#include <stdlib.h>

int main(){
	while(p != NULL){
		t = p.next;
		free(p);
		p = t;
	}
}
