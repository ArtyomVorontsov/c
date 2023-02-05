#include <stdio.h>
#define MAX_DIGITS 10
#define ROW_AMOUNT 4
#define DIGIT_WIDTH 4

/* external variables */
/* 7-segment representations for digits 0-9:
 *
 *    _0_
 * 5 |   | 1
 *   |_6_|
 * 4 |   | 2
 *   |_3_|
 */
const int segments[10][7] = {
	{1, 1, 1, 1, 1, 1, 0},
	{0, 1, 1, 0, 0, 0, 0},
	{1, 1, 0, 1, 1, 0, 1},
	{1, 1, 1, 1, 0, 0, 1},
	{0, 1, 1, 0, 0, 1, 1},
	{1, 0, 1, 1, 0, 1, 1},
	{1, 0, 1, 1, 1, 1, 1},
	{1, 1, 1, 0, 0, 0, 0},
	{1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 0, 1, 1},
};

int seg_map[7][2] = {
	{0, 1},
	{1, 2},
	{2, 2},
	{3, 1},
	{2, 0},
	{1, 0},
	{1, 1}
};
int digits[ROW_AMOUNT][MAX_DIGITS * DIGIT_WIDTH];

void clear_digts_array(void);
void process_digits_array(int digit, int position);
void print_digits_array(void);

int main(void){
	int i, d;
	char ch;

	printf("Enter a number: ");

	i = 0;
	while((ch = getchar()) != '\n' && i < MAX_DIGITS){
		if(ch <= '0' || ch >= '0') {
			process_digits_array(ch - '0', i * DIGIT_WIDTH + 1);
			i++;
		}
	}

	print_digits_array();	
	
	return 1;
}

void clear_digts_array(void){
	int i, j;

	for(i = 0; i < ROW_AMOUNT; i++)
		for(j = 0; j < MAX_DIGITS * ROW_AMOUNT; j++)
			digits[i][j] = 0;
}

void process_digits_array(int digit, int position){
	int i, j, k = 0, x, y;

	for(i = 0; i < 7; i++) {
		if(segments[digit][i]) {
			y = seg_map[i][0];
			x = seg_map[i][1];
			digits[y][x + position] = 1;
		}
	}
}

void print_digits_array(void){
	int i, j, t;

	for(i = 0; i < ROW_AMOUNT; i++){
		printf("\n");
		for(j = 0; j < MAX_DIGITS * DIGIT_WIDTH; j++){
			if(digits[i][j]){
				if(i == 3) printf("-");
				else if((!(j % 2) && i == 1) || i == 0) printf("_");
				else printf("|");
			} else printf(" ");
		}
	}

	printf("\n");
}

