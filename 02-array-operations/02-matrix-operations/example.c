#include<stdio.h>
#include<stdlib.h>

/**
* When we multiply two matrices,
* the size of the resultant matrix,
* will be no of rows of first matrix plus no of column of second matrix.
* In this case D[3][3]
*/
int i, j, k, A[3][3], B[3][3], C[3][3], D[3][3];

void insertMatrixItems( char matrixName[1], int matrix[3][3] ) {

    printf( "\n Enter the values of Matrix %s: ", matrixName );

    for( i = 0; i < 3; i++ ) {
        for( j = 0; j < 3; j++ ) {
            printf( "\n %s[%d][%d]: ", matrixName, i, j );
            scanf( "%d", &matrix[i][j] );
        }
    }
}

void multiplyMatrices( int matrixOne[3][3], int matrixTwo[3][3] ) {
    // Multiply Matrices B and C and store the result in Matrix D.
    for( i = 0; i < 3; i++ ) {
        for( j = 0; j < 3; j++ ) {
            for( k = 0; k < 3; k++ ) {

                // Multiply the item of the two matrices and keep adding and storing the result to the Matrix D item.
                D[i][j] = D[i][j] + ( matrixOne[i][k] * matrixTwo[k][j] );

            }
        }
    }
}

void addMatrices( int matrixOne[3][3], int matrixTwo[3][3] ) {
    for( i = 0; i < 3; i++ ) {
        for( j = 0; j < 3; j++ ) {
			matrixOne[i][j] = matrixOne[i][j] + matrixTwo[i][j];
        }
    }
}

void displayMatrixResult() {
    printf( "\n Matrix D result of ( A + ( B * C ): \n\n" );

    // Print Matrix D.
    for( i = 0; i < 3; i++ ) {
        for( j = 0; j < 3; j++ ) {
            printf( "\t%d", D[i][j] );
        }
        printf( "\n" );
    }
}

/*
* 1. Take the the matrix (A, B, C) items from the user.
* 2. Multiple Matrix B and C and store the result in D, i.e, ( D = B * C )
* 3. Add the resulted Matrix D to A, i.e. ( D = D + A )
* 4. Display the result of Matrix D.
*/
int main() {

	insertMatrixItems( "A", A );
	insertMatrixItems( "B", B );
	insertMatrixItems( "C", C );

	// D = B * C
	multiplyMatrices( B, C );

	// D = D + A
	addMatrices( D, A );

    displayMatrixResult();

	return 0;
}
