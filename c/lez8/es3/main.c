#include <stdio.h>
#include <stdlib.h>

struct elemento {
	int info;
	struct elemento *next;
} ;

typedef struct elemento ElementoDiLista;
typedef ElementoDiLista* ListaDiElementi;

void add_ordered(ListaDiElementi *head, int value){
	ElementoDiLista *new_elem = malloc(sizeof(ElementoDiLista));
	new_elem->info = value;
	new_elem->next = NULL;
	
	if(*head){
		ElementoDiLista *iter = *head, *prev = NULL;
		while(iter && iter->info < value) {
			prev = iter;
			iter = iter->next;
		}
		if(prev){
			new_elem->next = prev->next;
			prev->next = new_elem;
		}
		else{
			new_elem->next = *head;
			*head = new_elem;
		}
	} else {
		*head = new_elem;
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
		if(op < 0){
			print(l);
			stop = 1;
		} else{
			add_ordered(&l, op);
		}
	}

	return 0;
}