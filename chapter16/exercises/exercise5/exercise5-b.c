#include <stdio.h>

struct date {
	int month, day, year;
};

int compare_dates(struct date d1, struct date d2);

int main(void){
	struct date current_day = { 6, 21, 2023 };
	struct date prev_day = { 6, 20, 2023 };
	
	
	printf("compare dates %d\n", compare_dates(current_day, prev_day));

	return 0;	
}

int compare_dates(struct date d1, struct date d2) {
	int y = d1.year - d2.year;
	int m = d1.month - d2.month;
	int d = d1.day - d2.day;

	if(y) {
		return y > -1 ? 1 : -1;
	}

	if(m) {
		return m > -1 ? 1 : -1;
	}

	if(d) {
		return d > -1 ? 1 : -1;
	}

	return 0;
}
