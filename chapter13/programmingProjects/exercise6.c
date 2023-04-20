#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

char *tolowerstr(char *str);
char *planets[] = {"Mercury", "Venus", "Earth", 
	"Mars", "Jupiter", "Saturn",
	"Uranus", "Neptune", "Pluto"};

int main(int argc, char *argv[]){
	int i, j;
	char planet_lower[100];
	char inp_lower[100];
	
	for (i = 1; i < argc; i++) {
		for (j = 0; j < NUM_PLANETS; j++){
			strcpy(inp_lower, argv[i]);
			tolowerstr(inp_lower);

			strcpy(planet_lower, planets[j]);
			tolowerstr(planet_lower);

			if (strcmp(inp_lower, planet_lower) == 0){
				printf("%s is planet %d\n", planets[j], j + 1);
				break;
			}
		}

		if (j == NUM_PLANETS)
			printf("%s is not a planet\n", argv[i]);
		
	}

	return 0;
}

char *tolowerstr(char *str){
	char *str_ptr = str;
	// Transform to lowercase
	while(*str_ptr) {
		*str_ptr = tolower(*str_ptr);
		++str_ptr;
	}
	return str;
}



