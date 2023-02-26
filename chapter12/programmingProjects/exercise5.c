
#include <stdio.h>

#define MAX_VALUE 100

int main(void) {

    char c, 
        terminating_char,
        words[MAX_VALUE] = {0},
	*p1, *p2;

    printf("Enter a sentence: ");
    for (p1 = words; (c = getchar()) != '\n' && p1 < words + MAX_VALUE; p1++) {
        if (c == '.' || c == '!' || c == '?') {
		terminating_char = c;
		break;
        }
	
	*p1 = c;
    }

    printf("Reversal of sentence: ");
    while (p1 - words >= 0) {
        while (*(p1--) != ' ' && *p1 != 0);

	p2 = (p1 - words) <= 0 ? words : p1 + 2;

        while (*p2 != ' ' && *p2 != '\0')
            putchar(*(p2++));
	

        if ((p1 - words) >= 0)
            putchar(' ');
    }

    printf("%c\n", terminating_char);

    return 0;
}
