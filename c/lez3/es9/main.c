#include <stdio.h>

#define W 10
#define H 10

int main(){
    for(int i = 0; i < H; ++i){
        if(i == 0 || i == (H-1))
            for(int j = 0; j < W;++j)
                printf("*");
        else {
            printf("*");
            for(int j = 0; j < W-2;++j)
                printf("X");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}