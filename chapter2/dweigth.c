/* Computes the dimensional weight of a 12" x 10" x 8" box*/

# include <stdio.h>

int main(void){
	int length = 12, width = 10, heigth = 8;

	int volume = length * width * heigth;
 
	printf("Dimensiounal weigth: %d \n", (volume + 165) / 166);
	printf("Dimensions: %dx%dx%d \n", length, width, heigth);
	printf("Volume: %d \n", volume);

	return 0;
}
