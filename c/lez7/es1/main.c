#include <stdio.h>

#define VOLTE 4

typedef enum  {
    crocchette = 0,
    scatolette = 1,
    tonno = 2
}Cibi;

typedef struct {
    int id;
    int eta;
    float peso;
    Cibi cibo;
} Gatto;

int main() {
    Gatto gatti[VOLTE];
    float media_peso = 0;
    for(int i = 0; i < VOLTE; ++i){
        scanf("%d %d %f %d", &gatti[i].id, &gatti[i].eta, &gatti[i].peso, &gatti[i].cibo);
        media_peso += gatti[i].peso;
    }
    media_peso /= VOLTE;
    

    for(int i = 0; i < VOLTE; ++i){
        if(gatti[i].eta < 4 && gatti[i].peso > media_peso)
            printf("%d %s\n", gatti[i].id, ((gatti[i].cibo == 0) ? "crocchette" : (gatti[i].cibo == 1) ? "scatolette" : "tonno"));
    }

    return 0;
}