#include <stdio.h>

void swap(int *a, int *b){
	*a^=*b;
	*b^=*a;
	*a^=*b;
}

void ordered_swap(int *a, int *b, int *c){
	if(*a > *c) swap(a,c);
	if(*a > *b) swap(a,b);
	if(*b > *c) swap(b,c);
}


int main(){
	int a, b, c;

	scanf("%d %d %d", &a,&b,&c);
	ordered_swap(&a,&b,&c);
	printf("%d\n%d\n%d\n", a,b,c);


	return 0;
}