#include <stdio.h>

int main() {

    int arr[6] = {100, 50, 60, 70, 150, 80 };
    int lastElementIndex = 5, i, j, temp;

    // Loop through until the last element.
    for ( i = 0; i <= lastElementIndex; i++){
        // Loop through to compare the array.
        for( j = lastElementIndex; j > i; j-- ) {
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
    for( i = 0; i <= lastElementIndex; i++ ) {
        printf( "%d \t", arr[i] );
    }
    
    return 0;
}