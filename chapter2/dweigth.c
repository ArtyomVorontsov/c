/* Computes the dimensional weight of a 12" x 10" x 8" box*/

# include <stdio.h>

int main(void){
	int length = 12;
	int width = 10;
	int heigth = 8;

	int volume = length * width * heigth;
	int dimensionalWeigth = (volume + 165) / 166;
 
	printf("Dimensional weigth: %d \n", dimensionalWeigth);
	printf("Dimensions: %dx%dx%d \n", length, width, heigth);
	printf("Volume: %d \n", volume);

	return 0;
}
