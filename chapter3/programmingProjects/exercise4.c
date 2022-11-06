#include <stdio.h>

int main(void){
	int country_code, number_first_part, number_second_part;

	printf("Enter phone number [(xxx) xxx-xxxx]");
	scanf("(%d) %d-%d", &country_code, &number_first_part, &number_second_part);

	printf(
		"You entered: %d.%d.%d\n", 
		country_code, 
		number_first_part, 
		number_second_part
	);

	return 0;
}
