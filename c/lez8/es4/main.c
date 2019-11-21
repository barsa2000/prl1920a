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

int in_list(ListaDiElementi l, int v){
	int f = 0;
	ElementoDiLista *e = l;
	while(!f && e){
		if(e->info == v) 
			f =1;
		e = e->next;
	}
	return f;
}

ListaDiElementi union_list(ListaDiElementi l0, ListaDiElementi l1){
	ListaDiElementi out = NULL;
	ElementoDiLista *e = l0;
	while(e){
		if(in_list(l1, e->info) && !in_list(out, e->info))
			add_ordered(&out, e->info);
		e = e->next;
	}

	return out;
}

void print(ListaDiElementi l){
	ElementoDiLista *e = l;
	while(e){
		printf("%d\n", e->info);
		e = e->next;
	}
}

int main() {
	ListaDiElementi l0 = NULL, l1 = NULL;

	int stop = 0;

	while(!stop){
		int op;
		scanf("%d", &op);
		if(op >= 0){
			add_ordered(&l0, op);
		} else{
			stop = 1;
		}
	}
	stop = 0;

	while(!stop){
		int op;
		scanf("%d", &op);
		if(op >= 0){
			add_ordered(&l1, op);
		} else{
			stop = 1;
		}
	}

	// print(l0);
	// printf("\n\n");
	// print(l1);
	// printf("\n\n");
	print(union_list(l0, l1));
	

	return 0;
}