#include <stdio.h>

int main(void){
	int cd, cm, cy, nd, nm, ny, cdays, ndays;

	int i = 0;	
	while(1){
		printf("Enter first date (mm/dd/yy): ");
		scanf("%d/%d/%d", &nm, &nd, &ny);
		ndays = nd + nm * 30 + ny * 365;
		if(ndays <= 0) break;
		if(ndays < cdays || i == 0){
			cdays = ndays;
			cd = nd;
			cm = nm;
			cy = ny; 
		}
		++i;
	}
	
	printf("%d/%d/%.2d is earliest date in the list\n", cm, cd, cy);

	return 0;
}
