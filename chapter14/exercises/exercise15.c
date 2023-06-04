#include <stdio.h>
#define ENGLISH

int main(void){
	#if defined(ENGLISH)
		printf("Insert Disk 1\n");
	#elif defined(FRENCH)
		printf("Le Disque 1\n");
	#else
		printf("El Disco 1\n");
	#endif

	return 1;
}

