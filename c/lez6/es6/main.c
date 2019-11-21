#include <stdio.h>

#define ROWS 4
#define COLS 3

int findLastMulOccInMatrix(int arr[][COLS], int cols, int rows){
	
	int c = cols - 1;
	int found = -1;
	while(found == -1 && c >= 0) {
		int mul = 1;
		int r = 0;
		while(r < rows && mul) {
			if(arr[r][c] % 3) mul = 0;
			++r;
		}
		if(mul) found = c;
		--c;
	}

	return found;
}



int main(){
	int arr[ROWS][COLS];

	for(int i = 0; i < ROWS; ++i){
		for(int j = 0; j < COLS; ++j){
			scanf("%d", &arr[i][j]);
		}
	}


	int index = findLastMulOccInMatrix(arr, COLS, ROWS);

	printf("%d\n", index);

	return 0;
}