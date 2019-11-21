#include <stdio.h>

int main(){
    int h, l;
    scanf("%d %d", &h, &l);

    for(int i = 0; i < h; ++i){
        if(i == 0 || i == (h-1))
            for(int j = 0; j < l;++j)
                printf("*");
        else {
            printf("*");
            for(int j = 0; j < l-2;++j)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}