#include <stdlib.h>
#include <stdio.h>

struct node {
	int value;
	struct node * next;
};
void delete_from_list(struct node **list, int n);
void print_list(struct node * cur);

int main(){
	int n = 13;
	struct node * nod, * f;

	nod = malloc(sizeof(struct node));
	nod->value = 1;
	nod->next = malloc(sizeof(struct node));

	nod->next->value = 1;
	nod->next->next = malloc(sizeof(struct node));

	nod->next->next->value = 1;
	nod->next->next->next = NULL;


	print_list(nod);

	delete_from_list(&nod, n);

	printf("After deletion\n");

	print_list(nod);
}

void print_list(struct node * cur){
	while(cur != NULL){
		printf("%d\n", cur->value);
		cur = cur->next;
	}
}

void delete_from_list(struct node **list, int n){
	struct node *cur, *prev;

	for(cur = *list, prev = NULL;
		cur != NULL && cur->value != n;
		prev = cur, cur = cur->next);

	if(cur != NULL){
		if(prev == NULL) 
			*list = (*list)->next;		/* n is first node */
		else
			prev->next = cur->next;		/* remove node */
		free(cur);
	}
}

