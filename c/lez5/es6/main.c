#include <stdio.h>

#define SIZE 5

int count_larger(int x, int in[], int size){
    int c = 0;
    for(int i = 0; i < size; ++i)
        if(in[i] > x)
            ++c;
    return c;

}

int main(){
    int in[SIZE];
    int x;
    scanf("%d", &x);
    for(int i = 0; i < SIZE; ++i){
        scanf("%d", &in[i]);
    }
    printf("%d\n", count_larger(x, in, SIZE));
    return 0;
}