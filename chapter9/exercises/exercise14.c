#include <stdio.h>
#include <stdbool.h>


bool has_zero(int a[], int n);

int main(void){
	int a[3] = {1, 1, 0}, n = 3;

	bool res = has_zero(a, n);

	printf("%d\n", res);
	
	return 0;
}

bool has_zero(int a[], int n){
	int i;

	for(i = 0; i < n ; i++){
		if(a[i] == 0)
			return true;
	}
	return false;
}

