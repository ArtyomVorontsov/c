#include <stdio.h>

int main(void){
	int fd, fm, fy, sd, sm, sy, fdays, sdays;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &fm, &fd, &fy);

	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &sm, &sd, &sy);

	fdays = fd + fm * 30 + fy * 365;
	sdays = sd + sm * 30 + sy * 365;

	if(fdays > sdays){
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", sm, sd, sy, fm, fd, fy);
	} else {
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", fm, fd, fy, sm, sd, sy);
	}

	return 0;
}
