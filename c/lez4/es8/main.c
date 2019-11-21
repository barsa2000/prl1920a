#include <stdio.h>

int main(){
    int in;
    scanf("%d", &in);
	for(int i = 1; i <= 10; ++i){
		printf("%d\n", in * i);
	}
    return 0;
}