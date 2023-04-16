#include "../../../lib/cutest-1.5/CuTest.h"
#include <string.h>
#include <stdio.h>
void RunAllTests(void);
char **reverse_flags(int argc, char **argv);

char *r_argv[3];


int main(int argc, char *argv[]){
	TEST_FLAG

	reverse_flags(argc, argv);

	return 0;
}

char **reverse_flags(int argc, char **argv){
	for(int i = 0; i < 3; i++)
		r_argv[i] = "abc";

	for(int i = 0; i < 3; i++)
		printf("%s\n", r_argv[i]);

	return r_argv;
}

// Tests
void reverse_flags_test(CuTest *tc);

CuSuite *exercise4_chapter13_getSuite(void){
	CuSuite *suite = CuSuiteNew();

	SUITE_ADD_TEST(suite , reverse_flags_test);

	return suite;
}

// happy
void reverse_flags_test(CuTest *tc){
	int arg_amount = 3;
	const char *input[3] = {"void", "and", "null"};
	const char *expected[3] = {"void", "and", "lol"};


	CuAssertStrArrayEquals(tc, input, expected, arg_amount);
}

