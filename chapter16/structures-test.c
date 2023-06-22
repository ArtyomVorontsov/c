#include <stdio.h>

int main(void){
	struct {
		char firstname[20];
		char lastname[20];
		int age;
	} person = { .firstname = "John", .lastname = "doe", .age = 19 };

	printf("firsname: %s\n", person.firstname);
	printf("lastname: %s\n", person.lastname);
	printf("age: %d\n", person.age);

	return 0;
}

