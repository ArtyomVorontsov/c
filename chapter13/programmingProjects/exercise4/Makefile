FILE := $(wildcard *.c)
OUTPUT_FILE := $(subst .c,.out,${FILE}) 
TEST_FLAG_DATA := if(argc > 1){ if(strcmp(argv[1], "--test") == 0){ RunAllTests(); return 0; }; printf("Not supported parameter(s) is(are) passed\\n"); }

${OUTPUT_FILE}:
	touch buffer.c
	cat ${FILE} > buffer.c
	sed -i 's/TEST_FLAG/${TEST_FLAG_DATA}/' buffer.c
	gcc -o ${OUTPUT_FILE} ../../../AllTests.c ../../../lib/cutest-1.5/CuTest.c buffer.c
	rm -f buffer.c

clean:
	rm -f ${OUTPUT_FILE} buffer.c

