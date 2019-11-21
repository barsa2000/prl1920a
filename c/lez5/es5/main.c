#include <stdio.h>

float approx_pi(int n){
    float tot = 0;
    for(int i = 0, j = 1; i < n; ++i, j+=2)
        if(i % 2 == 0)
            tot += 4.0/j;
        else
            tot -= 4.0/j;
    return tot;

}

int main(){
    int n;

    scanf("%d", &n);
    printf("%.6f\n", approx_pi(n));
    return 0;
}