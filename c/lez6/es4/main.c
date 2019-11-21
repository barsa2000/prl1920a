#include <stdio.h>

#define SIZE 7


void primoultimopari(int arr[], int dim, int* primaocc,int* ultimaocc);

int main(){
	int input[SIZE];
	for(int i = 0; i < SIZE; ++i){
		scanf("%d", &input[i]);
	}

	int prima, ultima;
	primoultimopari(input, SIZE, &prima, &ultima);

	printf("%d %d\n", prima, ultima);

	return 0;
}

void primoultimopari(int arr[], int dim, int* primaocc,int* ultimaocc){
	*primaocc = *ultimaocc = -1;
	for(int *i = arr; i < arr+dim; ++i){
		if(!(*i % 2)){
			if(*primaocc == -1) *primaocc = i - arr;
			*ultimaocc = i - arr;
		}
	}
}