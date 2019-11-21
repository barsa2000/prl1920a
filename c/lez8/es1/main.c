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

void pop_front(ListaDiElementi *head){
	if(*head) {
		ElementoDiLista *old_head = *head;
		*head = (*head)->next;
		free(old_head);
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
			pop_front(&l);
		} else if(op < 0) {
			print(l);
			stop = 1;
		} else {
			push_front(&l, op);
		}
	}

	return 0;
}