#include <stdio.h>

int main() {

    int num = 4;
    int *ptr;

    // Assign the base address of variable 'num' to the pointer 'ptr'
    ptr = &num;

	// Print the address of the pointer.
    printf("%p\n", ptr);

    // Print the value of the variable, the pointer is pointing to.
    printf("%d", *ptr);

    return 0;
}
