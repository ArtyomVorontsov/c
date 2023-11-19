#include <stdlib.h>
#include <stdio.h>

struct node {
	int value;
	struct node * next;

};
int count_occurrences(struct node * list, int n);

int main(){
	int n = 1;
	struct node * nod;

	nod = malloc(sizeof(struct node));
	nod->value = 1;
	nod->next = malloc(sizeof(struct node));

	nod->next->value = 1;
	nod->next->next = malloc(sizeof(struct node));

	nod->next->next->value = 1;
	nod->next->next->next = NULL;

	int occ = count_occurrences(nod, n);

	printf("Occurrences: %d\n", occ);
}

int count_occurrences(struct node * list, int n){
	if(list == NULL)
		return 0;
	else if(list->value == n)	
		return count_occurrences(list->next, n) + 1;
	else 
		return count_occurrences(list->next, n);
}

