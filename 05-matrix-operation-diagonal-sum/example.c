#include <stdio.h>

int main() {
    // Write C code here
    int sum = 0, A[3][3];

    printf( "Please enter the matrix elements: \n" );

    for( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j++ ) {
            printf( "Enter matrix element A[%d][%d]: ", i, j );
            scanf( "%d", &A[i][j] );
        }
    }

	/**
	* First iteration sum = sum + A[0][0]
	* Second iteration sum = sum + A[1][1]
	* Third iteration sum = sum + A[3][3]
	*/
    for( int k = 0; k < 3; k++ ) {
        sum = sum + A[k][k];
    }

    printf( "Sum is %d:", sum );

    return 0;
}
