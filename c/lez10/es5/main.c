#include <stdio.h>
#include <stdlib.h>

#define VAL_TO_INSERT -1

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

void RecStampa(ListaDiElementi *item) {
	if(*item){
		printf("%d -> ", (*item)->info);
		RecStampaRecStampaInversa(&(*item)->next);
	} else {
		printf("NULL\n");
	}
}

void InsertBeforeEven(ListaDiElementi *list){
	if(*list){
		if((*list)->info % 2 == 0){
			ElementoDiLista *new_elem = malloc(sizeof(ElementoDiLista));
			new_elem->info = VAL_TO_INSERT;
			new_elem->next = *list;
			(*list) = new_elem;
			InsertBeforeEven(&(*list)->next->next);
		} else {
			InsertBeforeEven(&(*list)->next);
		}
	}
}

int main(){
	ListaDiElementi l = NULL;
	int stop = 0;

	while(!stop){
		int op;
		scanf("%d", &op);
		if(op < 0) {
			InsertBeforeEven(&l);
			RecStampa(&l);
			stop = 1;
		} else {
			push_front(&l, op);
		}
	}
	return 0;
}