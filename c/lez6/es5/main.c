#include <stdio.h>

#define SIZE 3

int isAMinB(int a[], int sizeA, int b[], int sizeB){
	int *i = a;
	int found = 0;
	while(!found && i < a + sizeA){
		int *j = b;
		int min = 1;
		while(min && j < b + sizeB){
			if(*i >= *j) min = 0;
			++j;
		}
		if(min) found = 1;
		++i;
	}

	return found;
}


int main(){
	int a[SIZE], b[SIZE];
	for(int i = 0; i < SIZE; ++i){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < SIZE; ++i){
		scanf("%d", &b[i]);
	}
	int found = isAMinB(a, SIZE, b, SIZE);
	printf("%s", (found ? "TRUE" : "FALSE"));

	return 0;
}