#include <stdio.h>

int main(){
	enum {NORTH, SOUTH, EAST, WEST} direction = NORTH;
	int x = 0, y = 0;

	switch(direction){
		case EAST:
			y--;
			break;
		case WEST:
			y++;	
			break;
		case SOUTH:
			x++;
			break;
		case NORTH:
			x--;
			break;
		default:
			return 1;

	}

	printf("x: %d, y: %d\n", x, y);

	return 0;
}
