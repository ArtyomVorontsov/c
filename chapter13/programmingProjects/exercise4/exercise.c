#include "../../../lib/cutest-1.5/CuTest.h"
#include <string.h>
#include <stdio.h>
#define MAX_ARGUMENT_AMOUNT 100
void RunAllTests(void);
const char **reverse_flags(int argc, char **argv, const char **r_argv);



int main(int argc, char *argv[]){
	const char *r_argv[argc];

	TEST_FLAG	

	reverse_flags(argc, argv, r_argv);

	for(int i = 0; i < argc - 1; i++)
		printf("%s ", r_argv[i]);

	printf("\n");

	return 0;
}

const char **reverse_flags(int argc, char **argv, const char **r_argv){
	int argcount = argc - 1;
	char **a = argv;

	for(int i = 0; i < argcount; i++)
		r_argv[i] = a[argcount - i];

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
	int argc = 4;
	int argcount = 3;
	char *input[] = {"program_name", "void", "and", "null"};

	const char *actual[argc];
	const char *expected[] = {"null", "and", "void"};

	reverse_flags(argc, input, actual);

	CuAssertStrArrayEquals(tc, expected, actual, argcount);
}

