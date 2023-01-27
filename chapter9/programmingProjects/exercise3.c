#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define WIDTH 10
#define HEIGHT 10


void generate_random_walk(char map[10][10]);
void print_array(char walk[10][10]);

int main(void){
	char map[WIDTH][HEIGHT];

	generate_random_walk(map);
	print_array(map);
	
	return 0;
}

void generate_random_walk(char map[10][10]){
	char walk;
	int x = 0, y = 0, dir, skip = 0;

	srand((unsigned) time(NULL));
	
	for(x = 0; x < WIDTH; x++){
		for(y = 0; y < HEIGHT; y++){
			map[x][y] = '.';
		}
	}

	x = 0;
	y = 0;

	for(walk = 'A'; walk <= 'Z'; !skip && walk++){
		dir = rand() % 4;
		skip = 0;

		if(walk == 'A'){ 
			map[x][y] = walk;
			continue;
		}


		if(map[x + 1][y] != '.' &&  map[x][y + 1] != '.' &&  map[x - 1][y] != '.' &&  map[x][y - 1] != '.') break;

		switch(dir){
			case 0:
				if(y == HEIGHT || map[x][y + 1] != '.') {
					skip = 1;
				}else{
					y += 1;
					map[x][y] = walk;
				}
				
				break;
			case 1:
				if(x == WIDTH || map[x + 1][y] != '.'){
					skip = 1;
					break;
				}else{
					x += 1;
					map[x][y] = walk;
				}

				break;
			case 2:
				if(y == 0 || map[x][y - 1] != '.'){
					skip = 1;
				} else {
					y -= 1;
					map[x][y] = walk;
				}

				break;
			case 3:
				if(x == 0 || map[x - 1][y] != '.'){ 
					skip = 1;
				} else {
					x -= 1;
					map[x][y] = walk;
				}

				break;
		}

	}

	return;

}

void print_array(char map[10][10]){
	int x = 0, y = 0;
	for(x = 0; x < WIDTH; x++){
		for(y = 0; y < HEIGHT; y++) {
			printf(" %c ", map[x][y]);
		}
		printf("\n");
	}

	return;
}

