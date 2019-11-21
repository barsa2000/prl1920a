#include <stdio.h>

#define SIZE 10

int min_azzera(int input[], int size){
	int min = *input;
	for(int *i = input; i < input + size; ++i){
		if(*i < min) min = *i;
		if((i - input) % 2) *i = 0;
	}
	return min;
}


int main() {
	int input[SIZE];
	for(int i = 0; i < SIZE; ++i){
		scanf("%d", &input[i]);
	}
	int min = min_azzera(input, SIZE);
	for(int i = 0; i < SIZE; ++i){
		printf("%d\n", input[i]);
	}
	printf("%d\n", min);
	return 0;
}