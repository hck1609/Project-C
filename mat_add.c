#include <stdio.h>
#include <conio.h>
#include "mat_add.h"

int row, column;
void matrix_scanner(int matrix[10][10])
{int i,j;
  for(i=1;i<=row;i++)
  { printf("\n");
    for(j=1;j<=column;j++)
    {printf("Enter the element at subscript[%d][%d]:",i,j); 
     scanf("%d",&matrix[i][j]);
    }
  }
}
void matrix_printer(int matrix[10][10])
{int i,j;
  for(i=1;i<=row;i++)
  { printf("\n");
    for(j=1;j<=column;j++)
    { printf("%5d",matrix[i][j]);
    }
  }
}
void matrix_adder(int mat1[10][10],int mat2[10][10],int sum[10][10])
{int i,j;
 for(i=1;i<=row;i++)
 { for(j=1;j<=column;j++)
   {sum[i][j]=mat1[i][j]+mat2[i][j];
   }
 }
}
void main()
{int mat1[10][10],mat2[10][10],sum_mat[10][10],mul_mat[10][10];
clrscr();
printf("\nEnter the no. of rows for matrices:");
scanf("%d",&row);
printf("Enter the no. of columns for matrices:");
scanf("%d",&column);
printf("\nEnter %d elements for 1st matrix:",row*column);
matrix_scanner(mat1);
printf("\nEnter %d elements for 2nd matrix:",row*column);
matrix_scanner(mat2);
matrix_adder(mat1,mat2,sum_mat);
printf("\n1st matrix:");
matrix_printer(mat1);
printf("\n2nd matrix:");
matrix_printer(mat2);
printf("\nSum of these matrices:");
matrix_printer(sum_mat);

for(int i=1;i<=row;i++){
  for(int j=1;j<=column;j++){
   mul_mat[i][j]=0;
   for(int k=1;k<=column;k++){
    mul_mat[i][j]+=mat1[i][k]*mat2[k][j];
   }
  }
}
printf("\nMultiplication of these matrices:");
matrix_printer(mul_mat);
printf("\n");
}
