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

int RecLength(ListaDiElementi *item) {
	if(*item){
		return RecLength(&(*item)->next) + 1;
	} else {
		return 0;
	}
}

int main(){
	ListaDiElementi l = NULL;

	int stop = 0;

	while(!stop){
		int op;
		scanf("%d", &op);
		if(op < 0) {
			printf("%d\n",RecLength(&l));
			stop = 1;
		} else {
			push_front(&l, op);
		}
	}
	return 0;
}