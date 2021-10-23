#include<stdio.h>
#include<stdlib.h>

int main() {

	/**
	* When we multiply two matrices,
	* the size of the resultant matrix,
	* will be no of rows of first matrix plus no of column of second matrix.
	* In this case D[3][3]
	*/
	int i, j, k, A[3][3], B[3][3], C[3][3], D[3][3];

	// Matrix A:
	printf( "\n Enter the values of Matrix A: " );

	for( i = 0; i < 3; i++ ) {
		for( j = 0; j < 3; j++ ) {
			printf( "\n A[%d][%d]: ", i, j );
			scanf( "%d", &A[i][j] );
        }
	}

	// Matrix B:
    printf( "\n Enter the values of Matrix B: " );

    for( i = 0; i < 3; i++ ) {
        for( j = 0; j < 3; j++ ) {
            printf( "\n B[%d][%d]: ", i, j );
            scanf( "%d", &B[i][j] );
        }
    }

        // Matrix C:
    printf( "\n Enter the values of Matrix C: " );

    for( i = 0; i < 3; i++ ) {
        for( j = 0; j < 3; j++ ) {
            printf( "\n C[%d][%d]: ", i, j );
            scanf( "%d", &C[i][j] );

            // Initialize Matrix D.
            D[i][j] = 0;
        }
    }

    // Multiply Matrices B and C and store the result in Matrix D.
    for( i = 0; i < 3; i++ ) {
        for( j = 0; j < 3; j++ ) {
            for( k = 0; k < 3; k++ ) {

                // Multiply the item of Matrix B and Matrix C and keep adding and storing the result to the Matrix D item.
				D[i][j] = D[i][j] + ( B[i][k] * C[k][j] );

            }
        }
    }

    printf( "\n Matrix D result of ( A + ( B * C ): \n" );

    // Print Matrix D.
    for( i = 0; i < 3; i++ ) {
        for( j = 0; j < 3; j++ ) {
            printf( "\t%d", D[i][j] );
        }
        printf( "\n" );
    }

	return 0;
}
