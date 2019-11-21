#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    printf("%lu\n", sizeof(int) * x);
    return 0;
}