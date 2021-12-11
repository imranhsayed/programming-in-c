#include <stdio.h>
#include <string.h>

// Find out length of the string.
int main() {
    // Write C code here
    char theString[1000];
    int i;

    printf("Enter the String: ");
    scanf("%s", theString);

    for ( i = 0; theString[i] != '\0'; i++);

    printf("Length of String is %d", i);

    return 0;

}
