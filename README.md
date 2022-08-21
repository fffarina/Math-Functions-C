# Math-Functions-C
 Some math functions to be included in a library in the future.
 
 matrix_mul.c contains a function that multiplies 2 2D matrices and returns a pointer with the elements of the resulting matrix. The prototype is:
 
 extern int *matrix_mul(int n, int m, int p, int matrix1[n][m], int matrix2[m][p], int *matrix);
 
 Both pie_2D and pie_3D perform a montecarlo simulation to estimate the value of pie. The former using a cirlce and a square, the latter using a sphere
 and a cube. The prototype for both is:
 
 extern double pie_xD(int simul_n); 
 
 where x stands for either 2 or 3.  
