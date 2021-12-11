// Find Largest number in an array.
#include <stdio.h>

int main() {

    int A[3], largestNumber;

    printf( "Enter 3 numbers in the array:" );

    for( int i = 0; i < 3; i++ ) {
        printf( "\nEnter no %d: ", i+1 );
        scanf( "%d", &A[i] );
    }

    // Set the largest number to the first number for comparison, first.
    largestNumber = A[0];

    // Loop through the second number and start comparing with the largest number. If it is found to be large set that as new value of the largest number. So the new largest number can be compared again with the next number in the array.
    for( int i = 1; i < 3; i++ ) {
        if( A[i] > largestNumber ) {
            largestNumber = A[i];
        }
    }

    // Write C code here
    printf("\nLargest number: %d", largestNumber);

    return 0;
}
