#include <stdio.h>
#include <stdlib.h>

struct elemento {
	int info;
	struct elemento *next;
} ;

typedef struct elemento ElementoDiLista;
typedef ElementoDiLista* ListaDiElementi;

void push_front(ListaDiElementi *head, int value){
	ElementoDiLista *new_elem = malloc(sizeof(ElementoDiLista));
	new_elem->info = value;
	new_elem->next = *head;
	*head = new_elem;
}

void push_back(ListaDiElementi *head, int value){
	ElementoDiLista *new_elem = malloc(sizeof(ElementoDiLista));
	new_elem->info = value;
	new_elem->next = NULL;
	if(*head) {
		ElementoDiLista *iter = *head;
		while(iter->next) 
			iter = iter->next;
		iter->next = new_elem;
	} else {
		*head = new_elem;
	}
}

void remove_first_occ(ListaDiElementi *head, int value){
	if(*head){
		ElementoDiLista *iter = *head, *prev = NULL;
		while(iter && iter->info != value) {
			prev = iter;
			iter = iter->next;
		}
		if(iter){
			if(prev)
				prev->next = iter->next;
			else
				*head = (*head)->next;
			free(iter);
		}
	}
}

void print(ListaDiElementi l){
	ElementoDiLista *e = l;
	while(e){
		printf("%d\n", e->info);
		e = e->next;
	}
}

int main() {
	ListaDiElementi l = NULL;

	int stop = 0;

	while(!stop){
		int op;
		scanf("%d", &op);
		if(op == 0){
			print(l);
			stop = 1;
		} else if(op < 0) {
			remove_first_occ(&l, -op);
		} else {
			if(op % 2){
				push_back(&l, op);
			}
			else {
				push_front(&l, op);
			}
		}
	}

	return 0;
}