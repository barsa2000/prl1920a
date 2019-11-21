#include <stdio.h>

int Pot2(int n){
	if(n > 1){
		return 2*Pot2(n-1);
	} else {
		return 2; 
	}
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", Pot2(n));
	return 0;
}