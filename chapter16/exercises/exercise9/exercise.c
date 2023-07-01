#include <stdbool.h>
#include <stdio.h>

struct color {
	int red, green, blue;
};

int getRed(struct color c);
bool equal_color(struct color color1, struct color color2);
struct color brighter(struct color c);
struct color darker(struct color c);

int main(void){
	const struct color MAGENTA = {
		255, 0, 255
	};

	const struct color WHITE = {
		255, 255, 255
	};

	const struct color TEST = {
		100, 12, 87
	};
		
	int red = getRed(MAGENTA);
	printf("getRed: %d\n", red);
	printf("equal_color: %d\n", equal_color(MAGENTA, MAGENTA));
	printf("not equal_color: %d\n", equal_color(MAGENTA, WHITE));

	struct color BRIGHT_MAGENTA = brighter(TEST);
	printf("color brighter rgb: %d, %d, %d\n", BRIGHT_MAGENTA.red, BRIGHT_MAGENTA.green, BRIGHT_MAGENTA.blue);

	struct color DARK_MAGENTA = darker(MAGENTA);
	printf("color darker rgb: %d, %d, %d\n", DARK_MAGENTA.red, DARK_MAGENTA.green, DARK_MAGENTA.blue);
}

int getRed(struct color c){
	return c.red;
}
bool equal_color(struct color color1, struct color color2){
	return color1.red == color2.red &&
	color1.green == color2.green &&
	color1.blue == color2.blue;
}
struct color brighter(struct color c){
	struct color cn = c;
	if(c.red == 0 && c.green == 0 && c.blue == 0){
		cn.red = 3;	
		cn.green = 3;	
		cn.blue = 3;	
		return cn;
	}

	if(c.red > 0 && c.red < 3) c.red = 3;
	if(c.green > 0 && c.green < 3) c.green = 3;
	if(c.blue > 0 && c.blue < 3) c.blue = 3;

	cn.red /= 0.7;
	cn.green /= 0.7;
	cn.blue /= 0.7;

	if(cn.red > 255) cn.red = 255;	
	if(cn.green > 255) cn.green = 255;	
	if(cn.blue > 255) cn.blue = 255;	

	return cn;
}
struct color darker(struct color c){
	struct color cn = c;

	cn.red *= 0.7;
	cn.green *= 0.7;
	cn.blue *= 0.7;
	
	return cn;
}

