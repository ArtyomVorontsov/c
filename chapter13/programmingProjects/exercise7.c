#include <stdio.h>

char *from_eleven_to_nineteen[] = { "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
char *from_ten_to_nighty[] = { "ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninghty" };
char *from_one_to_nine[] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

int main(void){
	int number, n1, n2;

	printf("Enter a two-digit number: ");
	scanf("%d", &number);

	n1 = number / 10;
	n2 = number % 10;

	printf("You entered the number ");
	if(number >= 11 && number <= 19){
		printf("%s\n", *(from_eleven_to_nineteen - 11 + number));
		return 0;
	}

	printf("%s", *(from_ten_to_nighty + n1 - 1));

	if(n1 && n2){
		printf("-");
	} else {
		printf("\n");
		return 0;
	}

	printf("%s\n", *(from_one_to_nine + n2 - 1));
	
	return 0;
}
