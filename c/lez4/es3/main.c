#include <stdio.h>

int main(){
    int in;
    scanf("%d", &in);

    for(int i = in - 1; i >0 ; --i){
        in *= i;
    }   
    printf("%d\n",in);
    return 0;
}