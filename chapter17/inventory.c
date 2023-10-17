#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct Part {
	int number;
	char name[NAME_LEN+1];
	int on_hand;
	struct Part * next;
};

struct Part * inventory = NULL;

struct Part * find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

int main(void) {
	char code;

	for (;;) {
		printf("Enter operation code: ");
		scanf(" %c", &code);
		while(getchar() != '\n');	/* skips to end of line */

		switch(code){
			case 'i': insert();
				break;
			case 's': search();
				break;
			case 'u': update();
				break;
			case 'p': print();
				break;
			case 'q': return 0;
			default: printf("Illegal code\n");

		}
		printf("\n");	
	}
}

struct Part * find_part(int number){
	struct Part * curr = inventory;
	struct part * found_part = NULL;

	for(; curr && (curr->number < number); curr = curr->next);

	if(curr != NULL && curr->number == number){
		return curr;
	}

	return NULL;
}

void insert(void){
	int part_number;
	struct Part * new_part = malloc(sizeof(struct Part)), * curr, * prev, * p;

	if (new_part == NULL) {
		printf("Database is full; can't add more parts.\n");
		return;
	}

	printf("Enter part number: ");
	scanf("%d", &part_number);

	if(find_part(part_number) > 0){
		printf("Part already exists.\n");
		return;
	}	

	new_part->number = part_number;
	printf("Enter part name: ");
	read_line(new_part->name, NAME_LEN);

	printf("Enter quantity on hand: ");
	scanf("%d", &(new_part->on_hand));

	for(
		prev = NULL, curr = inventory; 
		curr != NULL && part_number > curr->number; 
		prev = curr, curr = curr->next
	);

	if(prev){
		prev->next = new_part;
		new_part->next = curr;	
	} 
	else if (prev == NULL) {
		new_part->next = curr;	
		inventory = new_part;
	}
	
}

void search(void) {
	int number;
	struct Part * p;
	
	printf("Enter part number: ");
	scanf("%d", &number);
	p = find_part(number);

	if(p != NULL) {
		printf("Part name: %s\n", p->name);
		printf("Quantity on hand: %d\n", p->on_hand);
	} else 
	  printf("Part no found\n");
}

void update(void){
	int number, change;
	struct Part * p;

	printf("Enter part number: ");
	scanf("%d", &number);
	p = find_part(number);
	if (p != NULL) {
		printf("Enter change in quantity on hand: ");
		scanf("%d", &change);
		p->on_hand += change;
	} else
	  printf("Part no found\n");

}

void print(void) {
	struct Part * p = inventory;
	
	printf("Part number	Part Name	Quantity on Hand\n");
	for(; p != NULL ; p = p->next)
		printf("%7d	%-25s%11d\n", p->number, p->name, p->on_hand);
}

