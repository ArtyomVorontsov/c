#include <stdio.h>

int main(void){
	typedef struct {
		char firstname[20];
		char lastname[20];
		int age;
	} Person;

	Person person1 = { .firstname = "John", .lastname = "doe", .age = 19 };

	printf("firsname: %s\n", person1.firstname);
	printf("lastname: %s\n", person1.lastname);
	printf("age: %d\n", person1.age);

	return 0;
}

