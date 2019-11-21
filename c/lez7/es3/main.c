#include <stdio.h>

struct persona {
	char nome[10];
	struct persona *mamma;
	struct persona *babbo;
} ;
typedef struct persona Persona;

void initParenti(Persona *p, Persona *m, Persona *b){
	p->mamma = m;
	p->babbo = b;
}

void initParentiEmpty(Persona *p){
	initParenti(p, NULL, NULL);
}

char* getPersonaName(Persona *p){
	if(p == NULL) return "Sconosciuto";
	else return p->nome;
}

void printParenti(Persona *p){
	Persona *m = p->mamma, *b = p->babbo;
	printf("%s\n%s%s\n", getPersonaName(p), getPersonaName(p->mamma), getPersonaName(p->babbo));
}

int main() {
	Persona figlio, madre, babbo;
	scanf("%10s", &figlio.nome);
	scanf("%10s", &madre.nome);
	scanf("%10s", &babbo.nome);
	
	initParenti(&figlio, &madre, &babbo);
	initParentiEmpty(&madre);
	initParentiEmpty(&babbo);

	printParenti(&figlio);
	printParenti(&madre);
	printParenti(&babbo);


	return 0;
}