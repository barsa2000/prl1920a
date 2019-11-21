#include <stdio.h>

#define ROWS_A 4
#define COLS_A 2

#define ROWS_B 2
#define COLS_B 3

#define ROWS_C 4
#define COLS_C 3

void multiplymatr(	int r_a, int c_a, int a[r_a][c_a], 
					int r_b, int c_b, int b[r_b][c_b],
					int r_c, int c_c, int c[r_c][c_c]){
	for(int row = 0; row < r_c; ++row){
		for(int col = 0; col < c_c; ++col){
			int sum = 0;
			for(int i = 0; i < c_a; ++i){
				sum += a[row][i] * b[i][col];
			}
			c[row][col] = sum;
		}

	}

}

void readMatrix(int cols, int rows, int arr[rows][cols]){
	for(int i = 0; i < rows; ++i){
		for(int j = 0; j < cols; ++j){
			scanf("%d", &arr[i][j]);
		}
	}
}

void printMatrix(int cols, int rows, int arr[rows][cols]){
	for(int i = 0; i < rows; ++i){
		for(int j = 0; j < cols; ++j){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int a[ROWS_A][COLS_A], b[ROWS_B][COLS_B], c[ROWS_C][COLS_C];
	readMatrix(COLS_A, ROWS_A, a);
	readMatrix(COLS_B, ROWS_B, b);

	multiplymatr(
		ROWS_A, COLS_A, a,
		ROWS_B, COLS_B, b,
		ROWS_C, COLS_C, c
	);

	// printf("\n");
	// printMatrix(COLS_A, ROWS_A, a);
	// printf("\n");
	// printMatrix(COLS_B, ROWS_B, b);
	// printf("\n");
	printMatrix(COLS_C, ROWS_C, c);


	return 0;
}