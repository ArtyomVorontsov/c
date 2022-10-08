/* Computes the dimensional weight of a 12" x 10" x 8" box*/

#include <stdio.h>
#define INCHES_PER_POUNT 166 

int main(void){
	int length, width, heigth;

	printf("Type length of the box: \n");
	scanf("%d", &length);
	printf("Type width of the box: \n");
	scanf("%d", &width);
	printf("Type heigth of the box: \n");
	scanf("%d", &heigth);

	int volume = length * width * heigth;
	int dimensionalWeigth = (volume + 165) / INCHES_PER_POUNT;
 
	printf("Dimensional weigth: %d \n", dimensionalWeigth);
	printf("Dimensions: %dx%dx%d \n", length, width, heigth);
	printf("Volume: %d \n", volume);

	return 0;
}
