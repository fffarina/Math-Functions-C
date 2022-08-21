#include <stdio.h>
#include <stdlib.h>

void matrix_mul(int n, int m, int p, int matrix1[n][m], int matrix2[m][p], int* matrix){
	
	extern int _mul_shift(int a, int b);
	int mul = 0, sum = 0;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < p; j++){
			for (int k = 0; k < m; k++){
				mul = _mul_shift(matrix1[i][k], matrix2[k][j]);
				sum += mul;			
			}
			*matrix = sum;
			++matrix;
			sum = 0;
		}
	}
}
