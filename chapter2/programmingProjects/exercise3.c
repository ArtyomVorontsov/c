#include <stdio.h>
#define P 3.14

int main(void)
{
	float r;

	scanf("%f", &r);

	float v = (4.0f / 3.0f) * P * (r*r*r);

	printf("Sphere volume: %.2f", v);

	return 0;
}
