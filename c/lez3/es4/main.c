#include <stdio.h>

#define N 3

int main(){
	int x, in;
    scanf("%d", &x);
	for(int i = 0; i < N - 1; ++i){
		scanf("%d", &in);
        if(x < in)
            x = in;
	} 
	printf("%d\n", x);
	return 0;
}