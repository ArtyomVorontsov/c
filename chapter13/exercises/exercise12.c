#include <stdio.h>
#include <ctype.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(void){
	char *file_name = "hello_world.txt";
	char b[100];
	char *extension = b;

	get_extension(file_name, extension);

	printf("ext: %s\n", extension);

	return 0;
}

void get_extension(const char *file_name, char *extension){
	int str_len;
	char *file_name_end;

	file_name_end = file_name + strlen(file_name);
	
	while(*(file_name_end - 1) != '.' && file_name_end-- && file_name_end != file_name);

	if(file_name_end == file_name) 
		*extension = '\0';
	else 
		strcpy(extension, file_name_end);
	

}
