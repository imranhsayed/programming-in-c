/**
 * Outer loop: runs until ( length of array - 1 ) steps.
 * Inner loop: runs until the no. of steps ( in the outer loop ).
 * Inside Inner Loop, we start from the last element and compare the adjacent element.
 * If the latter is less than the former, we swap.
 * This process is repeated until both loops end.
**/
#include <stdio.h>

int main() {

    int arr[6] = {100, 50, 60, 70, 150, 80 };
    int lengthOfArray = 6, lastElementIndex = lengthOfArray - 1, noOfSteps = lengthOfArray - 1, step, j, temp;

    // Loop through until the count of steps( So there will be 5 steps for 6 items array )
    for ( step = 1; step <= noOfSteps; step++){
        // Loop through starting from last element until index is less/equal to step no.
        for( j = lastElementIndex; j >= step; j-- ) {
            // Compare the adjacent elements.
            if (arr[j] < arr[j-1]){
                // Swap the element if not in order.
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
            
        }
    }

    // Print the sorted array;
    for( int i = 0; i < lengthOfArray; i++ ) {
        printf( "%d \t", arr[i] );
    }
    
    return 0;
}