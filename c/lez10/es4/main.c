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

void RecStampa(ListaDiElementi *item) {
	if(*item){
		printf("%d -> ", (*item)->info);
		RecStampa(&(*item)->next);
	} else {
		printf("NULL\n");
	}
}

void RecDelMult(ListaDiElementi *list, int n){
	if(*list){
		ElementoDiLista *item = *list;
		if(item->info % n == 0){
			(*list) = item->next;
			free(item);
			RecDelMult(list, n);
		} else {
			RecDelMult(&(*list)->next, n);
		}
	}
}

int main(){
	ListaDiElementi l = NULL;

	int n;
	scanf("%d", &n);

	int stop = 0;

	while(!stop){
		int op;
		scanf("%d", &op);
		if(op < 0) {
			RecDelMult(&l, n);
			RecStampa(&l);
			stop = 1;
		} else {
			push_front(&l, op);
		}
	}
	return 0;
}