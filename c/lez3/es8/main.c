#include <stdio.h>

int main(){
    float n0,n1;
    char op;
    float res;
    scanf("%f%f %c", &n0, &n1, &op);
    // scanf("%f", &n1);
    // scanf(" %c", &op);
    switch((char)op){
        case '+' : res = n0 + n1; break;
        case '-' : res = n0 - n1; break;
        case '/' : res = n0 / n1; break;
        case '%' : res = (int)n0 % (int)n1; break;
    }
    printf("%.1f\n", res);
    return 0;
}