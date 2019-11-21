#include <stdio.h>

#define SIZE 10

float media(int in[], int size){
    int n = 0;
    float tot = 0;
    for(int i = 0; i < size; ++i){
        if(in[i] != 0 && ((in[i] < 0 && in[size - 1] < 0) || (in[i] > 0 && in[size - 1] > 0))){
            tot += in[i];
            ++n;
        }
    }
    return tot / n;
}

int main(){
    int in[SIZE];

    for(int i = 0; i < SIZE; ++i){
        scanf("%d", &in[i]);
    }

    printf("%.2f\n", media(in, SIZE));
    return 0;
}