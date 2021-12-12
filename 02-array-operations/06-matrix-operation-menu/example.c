// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h> // Standard Library.

void matrixMenu( int choice, int A[3][3], int B[3][3], int C[3][3] );
void enterMatrices( int A[3][3], int B[3][3], int C[3][3] );
void addMatrices( int A[3][3], int B[3][3], int C[3][3] );
void subtractMatrices( int A[3][3], int B[3][3], int C[3][3] );
void printMatrix( int C[3][3] );

int main() {

	// C will hold the result matrix;
    int choice, A[3][3], B[3][3], C[3][3];

	// This condition will always be true, so menu will always re-appear after one choice is executed, until user chooses presses option 3 to exit.
    while( 1 ) {
        matrixMenu( choice, A, B, C );
    }

    return 0;
}

void matrixMenu( int choice, int A[3][3], int B[3][3], int C[3][3] ) {

    printf( "Matrix operations: " );
    printf( "\n Press 1 to Enter two new matrix " );
    printf( "\n Press 2 to Add two matrices " );
    printf( "\n Press 3 to Subtract two matrices " );
    printf( "\n Press 4 to exit menu " );
    printf( "\n Enter your choice: " );
    scanf( "%d", &choice );

    switch(choice) {
        case 1: {
            enterMatrices( A, B, C );
            break;
        }
        case 2: {
            addMatrices( A, B, C );
            break;
        }
        case 3: {
	        subtractMatrices( A, B, C );
	        break;
        }
        case 4: exit(0);
        default: printf( "\n You entered incorrect choice: " );;
    }
}

void enterMatrices( int A[3][3], int B[3][3], int C[3][3] ) {

    printf( "Enter Matrix A values of: \n" );

    for( int i = 0; i < 3; i++ ) {
        for( int j = 0; j < 3; j++ ) {
            printf( "\tEnter value of A[%d][%d]: ", i, j );
            scanf( "%d", &A[i][j] );
        }
    }

    printf( "Enter Matrix B values of: \n" );

    for( int i = 0; i < 3; i++ ) {
       for( int j = 0; j < 3; j++ ) {
           printf( "\tEnter value of B[%d][%d]: ", i, j );
           scanf( "%d", &B[i][j] );
       }
    }
}

void addMatrices( int A[3][3], int B[3][3], int C[3][3] ) {

    for( int i = 0; i < 3; i++ ) {
        for( int j = 0; j < 3; j++ ) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf( "Result of Matrix A + B: \n" );
    printMatrix( C );

}

void subtractMatrices( int A[3][3], int B[3][3], int C[3][3] ) {
    for( int i = 0; i < 3; i++ ) {
        for( int j = 0; j < 3; j++ ) {
            C[i][j] = B[i][j] - A[i][j];
        }
    }

    printf( "Result of Matrix B - A : \n" );
    printMatrix( C );
}

void printMatrix(int C[3][3]) {
    for( int i = 0; i < 3; i++ ) {
        for( int j = 0; j < 3; j++ ) {
            printf( "\t%d", C[i][j] );
        }
        printf("\n");
    }
}
