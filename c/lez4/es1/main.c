#include <stdio.h>

#define N 10

int main(){
    int in[N];
    for(int i = 0; i < N; ++i){
        scanf("%d", &in[i]);
    }

    for(int i = N-1; i >= 0; --i){
        if(!(in[i] % 2)) in[i] /=2; 
        printf("%d\n", in[i]);
    }
    return 0;
}