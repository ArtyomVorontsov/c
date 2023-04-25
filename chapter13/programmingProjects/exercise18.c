#include <stdio.h>

char *month_names[12] = { 
	"January", "February", "March", 
	"April", "May", "June", 
	"Jule", "August", "September", 
	"October", "November", "December" 
};

// mm/dd/yyyy => month dd, yyyy

int main() {
	char buffer[20];
	char *bp = buffer;
	//mm dd yyyy
	char date[3][20] = {0};
	char (*d)[20] = date;
	int i = 0;

	printf("Enter a date (mm/dd/yyyy) : ");	
	scanf("%s", buffer);

	while(*bp){
		if(*bp == '/') {
			bp++;
			d++;
			i = 0;
			continue;
		}

		(*d)[i] = *bp;
		i++;
		bp++;
	}

	printf("You entered the date: %s %s, %s\n", month_names[atoi(date[0]) - 1], date[1], date[2]);

	return 0;	
}

