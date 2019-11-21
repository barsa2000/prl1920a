#include <stdio.h>

#define ROWS 4
#define COLS 3

void sumMatrix(int a[][COLS], int b[][COLS], int c[][COLS], int cols, int rows){
	for(int col = 0; col < cols; ++col){
		for(int row = 0; row < rows; ++row){
			c[row][col] = a[row][col] + b[row][col];
		}
	}

}

void readMatrix(int arr[][COLS], int cols, int rows){
	for(int i = 0; i < ROWS; ++i){
		for(int j = 0; j < COLS; ++j){
			scanf("%d", &arr[i][j]);
		}
	}
}

void printMatrix(int arr[][COLS], int cols, int rows){
	for(int i = 0; i < ROWS; ++i){
		for(int j = 0; j < COLS; ++j){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int a[ROWS][COLS], b[ROWS][COLS], c[ROWS][COLS];
	readMatrix(a, COLS, ROWS);
	readMatrix(b, COLS, ROWS);

	sumMatrix(a,b,c, COLS, ROWS);

	printMatrix(c, COLS, ROWS);

	return 0;
}