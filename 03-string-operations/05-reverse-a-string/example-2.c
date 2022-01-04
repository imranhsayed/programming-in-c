// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int size;
    char str[10], *ptr;

    printf("Enter your string: ");
    fgets(str, sizeof(str), stdin);

    // Assign the address of ptr to str( Notice that we dont use &str, because & is used when we are assigned a int )
    ptr = str;

	// Calculate size of the string.
    for(size = 0; str[size] != '\0'; size++ );

    for(int i = size -1; i >= 0; i-- ) {
        printf( "%c", *(ptr + i) );
    }

    return 0;
}
