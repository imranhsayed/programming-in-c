// In matrix multiplication first matrix one row element is multiplied by second matrix all column elements.

#include <stdio.h>
#include <stdlib.h>  

int main() {
    int A[10][10], B[10][10], Product[10][10], rows, cols, i, j, k;

    printf("Enter the number of row=");    
    scanf("%d",&rows);    
    printf("Enter the number of column=");    
    scanf("%d",&cols); 

    printf("Enter the elements for Matrix A=\n");

    for ( i = 0; i < rows; rows++) {
        for ( j = 0; i < cols; cols++) {
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter the elements for Matrix B=\n");

    for ( i = 0; i < rows; rows++) {
        for ( j = 0; i < cols; cols++) {
            scanf("%d",&B[i][j]);
        }
    }

    // Multiply Matrices A and B
    for ( i = 0; i < rows; rows++) {
        for ( j = 0; i < cols; cols++) {
            Product[i][j] = 0;

            for( k = 0; k < cols; k++ ) {
                Product[i][j] = Product[i][j] + ( A[i][k] * B[k][j] );
            }
        }
    }

    // Print Product Matrix
    printf("Matrix  Matrix B=\n");
    for ( i = 0; i < rows; rows++) {
        for ( j = 0; i < cols; cols++) {
            printf("%d", Product[i][j]);
        }
    }
}