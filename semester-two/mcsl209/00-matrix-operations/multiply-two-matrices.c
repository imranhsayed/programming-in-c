// In matrix multiplication every row elements of the first matrix is multiplied by corresponding column element for second matrix.
// In order to multiply two matrices, the no of columns of the first matrix should be equal to no of rows of the second matrix.
// The resultant matrix size will be ( r x c ) the no. of rows of first matrix and no. of cols of second matrix .
// https://www.mathsisfun.com/algebra/matrix-multiplying.html
// https://youtu.be/aAFP5wsmH2k?t=42

#include <stdio.h>
#include <stdlib.h>  

int main() {
    int A[10][10], B[10][10], Product[10][10], rowsA, rowsB, colsA, colsB, i, j, k;

    printf("Enter the number of rows for Matrix A=");    
    scanf("%d",&rowsA);    
    printf("Enter the number of columns for Matrix A=");    
    scanf("%d",&colsA);
    printf("For multiplication to occur, the number of rows for Matrix B will be same as cols of A i.e %d", colsA);    
    rowsB = colsA;
    printf("\nEnter the number of columns for Matrix B=");    
    scanf("%d",&colsB); 

    printf("Enter the elements for Matrix A=\n");

    for ( i = 0; i < rowsA; i++) {
        for ( j = 0; j < colsA; j++) {
            printf("A[%d][%d]=", i, j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter the elements for Matrix B=\n");

    for ( i = 0; i < rowsB; i++) {
        for ( j = 0; j < colsB; j++) {
            printf("B[%d][%d]=", i, j);
            scanf("%d",&B[i][j]);
        }
    }

    /**
     * Multiply Matrices A and B
     * We multiply 'rows' of Matrix A with 'columns' of Matrix B.
     * Hence we run two loops, one that keeps track of rowsA and other for tracking colsB
    **/
    for ( i = 0; i < rowsA; i++) {
        for ( j = 0; j < colsB; j++) {
            Product[i][j] = 0;

            for( k = 0; k < rowsB; k++ ) {
                Product[i][j] = Product[i][j] + ( A[i][k] * B[k][j] );
            }
        }
    }

    // Print Product Matrix
    printf("Matrix  Matrix B=\n");
    for ( i = 0; i < rowsA; i++) {
        for ( j = 0; j < colsB; j++) {
            printf("%d \t", Product[i][j]);
        }
        printf("\n");
    }
}