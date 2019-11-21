#include <stdio.h>

#define N 5

int main(){
	int a[N], b[N], s[N];
	for(int i = 0; i < N; ++i){
		scanf("%d", &a[i]);
	}
    for(int i = 0; i < N; ++i){
		scanf("%d", &b[i]);
		s[i] = a[i] + b[i];
	}
	printf("[");
	for(int i = 0; i < N; ++i){
		printf("%d", a[i]);
		if(i < N - 1)
			putchar(',');
	}
	printf("]\n[");
	for(int i = 0; i < N; ++i){
		printf("%d", b[i]);
		if(i < N - 1)
			putchar(',');
	}
	printf("]\n[");
	for(int i = 0; i < N; ++i){
		printf("%d", s[i]);
		if(i < N - 1)
			putchar(',');
	}
	printf("]\n");
    return 0;
}