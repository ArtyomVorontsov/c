#include <stdio.h>

int digit(int n, int k);

int main(void){
	int num, n;

	scanf("%d", &n);

	num = digit(829, n);

	printf("%d\n", num);	

	return 0;

}

int digit(int n, int k){
	int i = 0, num;
	
	for(i = 1; i < k ; i++)
		n /= 10;	

	return n % 10;
}

