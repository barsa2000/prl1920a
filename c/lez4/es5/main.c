#include <stdio.h>

int fib(int index){
	if(index < 2) return index;
	else return fib(index - 1) + fib(index - 2);
}

int main(){
    int in;
    scanf("%d", &in);
	int f, i = 0;
	while((f = fib(i)) <= in) {
		printf("%d\n", f);
		++i;
	}
    return 0;
}