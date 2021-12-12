#include <stdio.h>

int main() {

    int noOfRows = 5, counter = 5;

    // Print 5 rows ( no of rows), starting from 5th row and decrementing;
    for( int i = noOfRows; i > 0; i-- ) {

        // Start from 5th number, and print consecutive decremented value until the counter.
        for( int j = noOfRows; j >= counter; j-- ) {
            printf( "%d\t", j );
        }
        printf( "\n");

        // To reverse the pattern, change initial counter value to 0 and counter++;
        counter--;
    }

    return 0;
}
