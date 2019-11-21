#include <stdio.h>

int main(){
    int in;
    scanf("%d", &in);
    int h = in / 3600;
    int m = (in / 60)%60;
    int s = (in % 60);
    printf("%d h %d min %d s\n", h,m,s);
    return 0;
}