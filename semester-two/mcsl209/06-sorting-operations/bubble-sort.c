#include <stdio.h>

int main() {

    int arr[6] = {100, 50, 60, 70, 150, 80 };
    int lengthOfArray = 6, i, j, temp;

    // Loop through the array.
    for ( i = 1; i < lengthOfArray; i++){
        // Loop through to compare the array.
        for( j = lengthOfArray - 1; j >= i; j-- ) {
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
    for( i = 0; i < lengthOfArray; i++ ) {
        printf( "%d \t", arr[i] );
    }
    
    return 0;
}