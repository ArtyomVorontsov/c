#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool get_extension(const char *file_name, const char *extension);

int main(void){
	char *file_name = "hello_world.txt";
	bool res;

	res = get_extension(file_name, "TXT");

	printf("res: %d\n", res);

	return 0;
}

bool get_extension(const char *file_name, const char *extension){
	int str_len;
	char *file_name_end, b[100], b2[100];
	char *ext = b, *ext2 = b2;

	strcpy(b2, extension);

	// Find file name end
	file_name_end = file_name + strlen(file_name);

	// Find extension	
	while(*(file_name_end--) != '.' && file_name_end != file_name);

	// Get extension
	if(file_name_end == file_name) 
		*ext = '\0';
	else 
		strcpy(ext,  file_name_end + 2);

	// uppercase extensions
	while(*ext = toupper(*ext), *(++ext));
	while(*ext2 = toupper(*ext2), *(++ext2));

	return (bool) (strcmp(b, b2) == 0);
}
