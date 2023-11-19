#include <stdlib.h>
#include <stdio.h>

struct node {
	int value;
	struct node * next;

};
struct node * find_last(struct node *list, int n);

int main(){
	int n = 1;
	struct node * nod, * f;

	nod = malloc(sizeof(struct node));
	nod->value = 1;
	nod->next = malloc(sizeof(struct node));

	nod->next->value = 1;
	nod->next->next = malloc(sizeof(struct node));

	nod->next->next->value = 1;
	nod->next->next->next = NULL;

	f = find_last(nod, n);

	printf("Find last: %d\n", f->value);
}

struct node * find_last(struct node *list, int n){
	struct node * f, * t;
	f = NULL;
	t = list;

	while(t != NULL){
		if(t->value == n){
			f = t;
		}
		t = t->next;
	}

	return f;
}

