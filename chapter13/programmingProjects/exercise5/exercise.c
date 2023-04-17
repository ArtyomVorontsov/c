#include "../../../lib/cutest-1.5/CuTest.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void RunAllTests(void);
int sum_flags(int argc, char **argv);

int main(int argc, char *argv[]){
	int sum;

	TEST_FLAG	

	sum = sum_flags(argc, argv);

	printf("sum: %d\n", sum);

	return 0;
}

int sum_flags(int argc, char **argv){
	int sum = 0, i = 1;
	while(i != argc)
		sum += atoi(argv[i++]);

	return sum;
}

// Tests
void sum_flags_test(CuTest *tc);

CuSuite *exercise5_chapter13_getSuite(void){
	CuSuite *suite = CuSuiteNew();

	SUITE_ADD_TEST(suite , sum_flags_test);

	return suite;
}

// happy
void sum_flags_test(CuTest *tc){
	int argc = 4;
	int argcount = 3;
	char *input[] = {"program_name", "8", "24", "62"};

	int expected = 94;

	int actual = sum_flags(argc, input);

	CuAssertIntEquals(tc, expected, actual);
}

