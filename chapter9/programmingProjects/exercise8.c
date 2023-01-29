#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define DICE_NUM 6 
#define MAX_GAMES 100

int roll_dice(void);
bool play_game(void);

int main(void){
	bool games[MAX_GAMES] = {0}; 
	bool play = true;
	int i, j, wins = 0, losses = 0;
	char answ;
	srand( (unsigned) time(NULL));

	for(i = 0; play && i < MAX_GAMES; i++){
		games[i] = play_game();
	
		printf("Play again?\n");
		scanf(" %c", &answ);

		play = (bool) (answ == 'y' || answ == 'Y');
	}	

	for(j = 0; j < i; j++)
		games[j] ? wins++ : losses++;	
	
	printf("Wins: %d Losses: %d\n", wins, losses);
	
	return 0;
}

int roll_dice(void){
	int r_num;
	return (rand() % DICE_NUM) + 1;
}

bool play_game(void){
	int i = 0, r_num = 0, end_game = 0, point;

	for(i = 0; end_game == 0; i++){
		r_num = roll_dice() + roll_dice();
		printf("You rolled: %d\n", r_num);

		if(i == 0) {
			switch(r_num){
				case 7:
				case 11:
					end_game = 1;
					break;

				case 2:
				case 3:
				case 12:
					end_game = 2;
					break;
				default:
					point = r_num;
					printf("Your point: %d\n", r_num);
					break;
			}
		} 
		else {
			if(r_num == point) end_game = 1;
			if(r_num == 7) end_game = 2;
		}
	}


	if(end_game == 1)
		printf("You win!\n");
	else
		printf("You loose!\n");

	return end_game == 1 ? true : false;

}

