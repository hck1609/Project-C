#ifndef MAT_ADD_H
#define MAT_ADD_H

/* Global variables */
extern int row, column;

/* Function declarations */
void matrix_scanner(int matrix[10][10]);
void matrix_printer(int matrix[10][10]);
void matrix_adder(int mat1[10][10], int mat2[10][10], int sum[10][10]);

#endif
