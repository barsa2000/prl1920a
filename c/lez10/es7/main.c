#include <stdio.h>
#include <stdlib.h>

#define VAL_TO_INSERT -1

struct elemento {
	int info;
	struct elemento *next;
} ;

typedef struct elemento ElementoDiLista;
typedef ElementoDiLista* ListaDiElementi;

typedef enum{false,true} boolean;

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

boolean RecStrettCresc(ListaDiElementi *list) {
	if(*list && (*list)->next){
		return (*list)->info < (*list)->next->info && RecStrettCresc(&(*list)->next); 
	} else {
		return true;
	}
}

int main(){
	ListaDiElementi l = NULL;
	int stop = 0;

	while(!stop){
		int op;
		scanf("%d", &op);
		if(op < 0) {
			printf("%s\n", RecStrettCresc(&l) ? "True" : "False");
			stop = 1;
		} else {
			push_back(&l, op);
		}
	}
	return 0;
}