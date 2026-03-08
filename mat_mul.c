#include <stdio.h>
#include <conio.h>

void matrix_scanner(int matrix[10][10],int row,int column)
{int i,j;
  for(i=1;i<=row;i++)
  { printf("\n");
    for(j=1;j<=column;j++)
    {printf("Enter the element at subscript[%d][%d]:",i,j); 
     scanf("%d",&matrix[i][j]);
    }
  }
}
void matrix_printer(int matrix[10][10],int row, int column)
{int i,j;
  for(i=1;i<=row;i++)
  { printf("\n\t");
    for(j=1;j<=column;j++)
    { printf("%5d",matrix[i][j]);
    }
  }
}

void main(){
    int mat1[10][10],mat2[10][10],mul_mat[10][10],i,j,k,r1,c1,r2,c2;
    clrscr();
    printf("\nEnter the no. of rows for 1st matrix(0-10):");
    scanf("%d",&r1);
    printf("Enter the no. of columns for 1st matrix(0-10):");
    scanf("%d",&c1);
    printf("\nEnter %d elements for 1st matrix:",r1*c1);
    matrix_scanner(mat1,r1,c1);
    printf("\nEnter the no. of rows for 2nd matrix(0-10):");
    scanf("%d",&r2);
    printf("Enter the no. of columns for 2nd matrix(0-10):");
    scanf("%d",&c2);
    printf("\nEnter %d elements for 2nd matrix:",r2*c2);
    matrix_scanner(mat2,r2,c2);
    if(c1!=r2){
        printf("\nMultiplication of these matrices is not possible, as the no. of columns of 1st matrix is not equal to the no. of rows of 2nd matrix, try again with different dimensions of matrices");
    }
    else{
        for( i = 1; i <= r1; i++)
        {
            for( j = 1; j <= c2; j++)
            {
                mul_mat[i][j] = 0;
                for( k = 1; k <= c1; k++)
                {
                    mul_mat[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
        printf("\n1st matrix:");
        matrix_printer(mat1,r1,c1);
        printf("\n2nd matrix:");
        matrix_printer(mat2,r2,c2);
        printf("\nThe product of the two matrices is:\n");
        matrix_printer(mul_mat,r1,c2);
    }
    getch();
  }