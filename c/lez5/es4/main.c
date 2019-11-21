#include <stdio.h>

int mcd(int n, int m){

    if(m == 0) return n;
    else return mcd(m, n % m);

}

int mcm(int n, int m){

    return (n * m) / mcd(n, m);

}

int main(){
    int n, m;

    scanf("%d %d", &n, &m);
    if(m > n){
        int t = m;
        m = n;
        n = t;
    }
    printf("%d\n%d\n", mcd(n,m), mcm(n,m));
    return 0;
}