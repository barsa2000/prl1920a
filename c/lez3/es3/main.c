#include <stdio.h>

#define N 3

int main(){
	float x, tot = 0;
	for(int i = 0; i < N; ++i){
		scanf("%f", &x);
		tot += x;
	} 
	printf("%.3f\n", tot / N);
	return 0;
}