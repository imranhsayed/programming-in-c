#include <stdio.h>

int main() {

    int num1, num2, *ptr1, *ptr2, temp;

    printf( "Enter num1 value:" );
    scanf( "%d", &num1 );
    printf( "Enter num2 value:" );
    scanf( "%d", &num2 );

    // Store the base address of each number in the respective pointers ptr1, and ptr2
    ptr1 = &num1;
    ptr2 = &num2;

    // Hold the value of pointer ptr2, in a temp variable, so it can be reused for assigning it to the first variable, after assigning the second variable value.
    temp = *ptr2;

    // Assigne the pointer 2 value to pointer one.
    *ptr2 = *ptr1;

    // Then pointer 1 to the temp which is currently holding previous pointer 2 value.
    *ptr1 = temp;

    printf("Swapped values of num1=%d, and num2=%d", num1, num2);

    return 0;
}
