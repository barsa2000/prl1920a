#include <stdio.h>


float sum_pow(int n, float x){
    float tot = 0;
    for(int i = 0; i <= n; ++i){
        float p = 1;
        for(int j = 0; j < i; ++j){
            p *= x;
        }
        tot += p;
    }
    return tot;
}

int main(){
    int n;
    float x;

    scanf("%d %f", &n, &x);
     printf("%.2f\n", sum_pow(n, x));
    return 0;
}