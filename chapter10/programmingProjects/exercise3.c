#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* external variables */
int num_in_rank[NUM_RANKS];
int num_in_suit[NUM_SUITS];

int hand[NUM_CARDS][2] = {{0}};

bool straight, flush, four, three;
int pairs; /* can be 0, 1 or 2 */

/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);

int main(void) {
	int i;
	for(;;){
		read_cards();
		analyze_hand();
		print_result();
	}
}

void read_cards(void){
	char ch, rank_ch, suit_ch;
	int rank, suit, i, j;
	bool bad_card, card_exists;
	int cards_read = 0, lowest, temp[2];

	// clear state
	for(i = 0; i < NUM_CARDS; i++)
		hand[i][0] = 0, hand[i][1] = 0;

	while(cards_read < NUM_CARDS) {
		bad_card = false;
		card_exists = false;
		

		printf("Enter a card: ");

		rank_ch = getchar();

		switch(rank_ch) {
			case '0': exit(EXIT_SUCCESS);
			case '2': rank = 0; break;
			case '3': rank = 1; break;
			case '4': rank = 2; break;
			case '5': rank = 3; break;
			case '6': rank = 4; break;
			case '7': rank = 5; break;
			case '8': rank = 6; break;
			case '9': rank = 7; break;
			case 't': case 'T': rank = 8; break;
			case 'j': case 'J': rank = 9; break;
			case 'q': case 'Q': rank = 10; break;
			case 'k': case 'K': rank = 11; break;
			case 'a': case 'A': rank = 12; break;
			default:	bad_card = true; 

		}

		suit_ch = getchar();

		switch(suit_ch) {
			case 'c': case 'C': suit = 0; break;
			case 'd': case 'D': suit = 1; break;
			case 'h': case 'H': suit = 2; break;
			case 's': case 'S': suit = 3; break;
			default: bad_card = true;
		}

		while((ch = getchar()) != '\n')
			if(ch != ' ') bad_card = true;

		for(i = 0; i < NUM_CARDS; i++)
			if(hand[i][0] == rank && hand[i][1] == suit)
				card_exists = true;
					

		if(bad_card)
			printf("Bad card; ignored.\n");
		else if (card_exists)
			printf("Duplicate card; ignored.\n");
		else {
			hand[cards_read][0] = rank;
			hand[cards_read][1] = suit;
			cards_read++;
		}
	}

	/* Sort by rank */
	i = 0;
	while(1){
		lowest = i;
		for(j = i; j < NUM_CARDS; j++)
			if(hand[j][0] < hand[lowest][0]) lowest = j;

		/* swap lowest */
		temp[0] = hand[i][0];
		temp[1] = hand[i][1];

		hand[i][0] = hand[lowest][0];
		hand[i][1] = hand[lowest][1];

		hand[lowest][0] = temp[0];
		hand[lowest][1] = temp[1];

		if(i == NUM_CARDS) break;
		i++;
	}
}

void analyze_hand(void){
	int num_consec = 0;
	int rank, suit, i, suit_amount, prev_rank, rank_amount, pairs_already_was = 0;
	bool four_already_was = false, three_already_was = false;
	straight = false;
	flush = false;
	four = false;
	three = false;
	pairs = 0;

	/* check for flush */
	for(suit = 0; suit < NUM_SUITS; suit++){
		suit_amount = 0;

		for(i = 0; i < NUM_CARDS; i++)
			if(hand[i][1] == suit)	suit_amount++;

		if(suit_amount == NUM_CARDS) flush = true;
	}

	/* check for straight */
	rank = 0;
	while(num_in_rank[rank] == 0) rank++;
	for(;rank < NUM_RANKS && num_in_rank[rank] > 0; rank++)
		num_consec++;
	if(num_consec == NUM_CARDS) {
		straight = true;
		return;
	}	

	for(i = 0; i < NUM_CARDS; i++){
		if(hand[i][0] == prev_rank + 1 || i == 0) num_consec++;
		prev_rank = hand[i][0];
	}
	if(num_consec == NUM_CARDS) {
		straight = true;
		return;
	}	

	/* check for 4-of-a-kind 3-of-a-kind and pairs */
        for(rank = 0; rank < NUM_RANKS; rank++) {
		rank_amount = 0;
		if(four) four_already_was = true;
		if(three) three_already_was = true;
		if(pairs) pairs_already_was = pairs;

		for(i = 0; i < NUM_CARDS; i++) { 
			if (hand[i][0] == rank) {
				++rank_amount;
				if (rank_amount == 2) pairs++;

				if (rank_amount == 4 && three_already_was) 
					four = true;
				else if (rank_amount == 4)
					four = true, three = false;

				if (rank_amount == 3 && pairs_already_was)
					three = true, pairs = pairs_already_was;
				else if (rank_amount == 3)
					three = true, pairs = 0;

			}
		}
	}
}

void print_result(void){
	if (straight && flush) printf("Straight flush");
	else if (four) printf("Four of a kind");
	else if (three && pairs == 1) printf("Full house");
	else if (flush) printf("Flush");
	else if (straight) printf("Straight");
	else if (three) printf("Three of a kind");
	else if (pairs == 2) printf("Two pairs");
	else if (pairs == 1) printf("Pair");
	else printf("High card");

	printf("\n\n");
}

