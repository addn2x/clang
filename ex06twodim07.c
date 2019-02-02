
#include <stdio.h>

#define ROWS 3
#define COLS 4

void print_matrix(int matrix[][COLS]);
int sum_matrix(int matrix[][COLS]);

int main() {
	
	int a[ROWS][COLS] = { 
		{2, 4, 6, 8},
		{1, 3, 5, 7},
		{9, 10, 11, 12}
	 };
	
	print_matrix(a);
	printf("matrix sum: %d\n", sum_matrix(a));
	return 0;
}

void print_matrix(int matrix [][COLS]) {
	printf("\n Matrix: \n");
	
	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLS; ++j ) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	
}

int sum_matrix(int matrix[][COLS]) {
	int sum = 0;
	
	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLS; ++j ) {
			sum += matrix[i][j];
		}
	}	
	return sum; 
}