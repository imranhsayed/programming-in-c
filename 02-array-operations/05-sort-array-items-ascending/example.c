#include <stdio.h>

// Sort array items in ascending order ( i.e, smaller first )
int main() {
    int arr[] = { 5, 4, 3, 2, 1 };
    int i, j, temp = 0, lengthOfArray;

    lengthOfArray = sizeof( arr ) / sizeof( arr[0] );

    // Sort the elements in ascending order.
    for( i = 0; i < lengthOfArray; i++ ) {

        // Loop through from the next element( i + 1) in the array till the end of the array, and keep swapping the position of the elements, when the next element is smaller.
        for ( j = i + 1; j < lengthOfArray; j++ ) {

            // Reverse the greater than sign, incase if you want to sort in descending order.
            if( arr[i] > arr[j] ) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print the array.
    for( i = 0; i < lengthOfArray; i++ ) {
        printf( "%d ,", arr[i] );
    }

    return 0;
}
