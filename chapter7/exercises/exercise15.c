#include <stdio.h>

int main(void){
	typedef char Int8;
	typedef short Int16;
	typedef int Int32;

	Int8 eightBit = 28;
	Int16 sixteenBit = 228;
	Int32 thirtyTwoBit = 2228;
	printf("%hd %hd %d", eightBit, sixteenBit, thirtyTwoBit);

	return 0;

}

