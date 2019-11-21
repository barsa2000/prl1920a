#include <stdio.h>

#define N 2

typedef struct {
    int id;
    int stipendio;
    int mese_assunzione;
    int anno_assunzione;
} Dipendente;

void daiAumento(Dipendente *dipendente, float perc){
    if(dipendente->anno_assunzione < 2000 || (dipendente->anno_assunzione == 2000 && dipendente->mese_assunzione < 5))
        dipendente->stipendio += dipendente->stipendio / 100.0 * perc;
}

int main() {
    Dipendente dipendenti[N];
    float perc;

    for(int i = 0; i < N; ++i){
        scanf("%d %d %d %d", &dipendenti[i].id, &dipendenti[i].mese_assunzione, &dipendenti[i].anno_assunzione, &dipendenti[i].stipendio);
    }
    scanf("%f", &perc);

    for(int i = 0; i < N; ++i){
        daiAumento(&dipendenti[i], perc);
        if(dipendenti[i].stipendio > 1200)
            printf("%d %d\n", dipendenti[i].id, dipendenti[i].stipendio);
    }

    return 0;
}