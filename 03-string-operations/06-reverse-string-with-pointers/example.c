#include <stdio.h>
#include <string.h>

// Function declaration
void printReverseString( char *ptr );

int main() {
    char theString[50];

    printf (" Enter a string to be reversed: ");
    scanf( "%s", theString );

    printReverseString( theString );

    return 0;
}

// The Pointer *ptr will receive the base address of str, so we can access all characters of the string using this pointer.
void printReverseString ( char *ptr ) {

    int i, charCount = 0; // charCount will contain the total no of characters in the string.

	/**
	* Find out the total no. of characters in the string, so we can start a loop from the end of the string.
	* With *(ptr + i), we are checking if the next character is not the end of the string.
	*/
	for( i = 0; *( ptr + i ) != '\0'; i++ ) {
		charCount++;
	}

	printf (" Reverse of the string is: ");

	/**
	* Print reverse of the string.
	* The 'charCount' is equal of the length of the string.
	* We are starting the loop from (charCount - 1), so that we can start from the end of the string
	* and print in reverse order.
	*/
	for( i = charCount - 1; i >=0; i-- ) {

		/**
		* At the first iteration of the loop, *(ptr + i) will be equal to the last character, then decrement by one during each iteration.
		* The reason for this is that ptr refers to the first/base address(value) of the string.
		* So let's say there are 5 characters in the string, value of i at first iteration will be charCount -1 = 5 - 1 -4
		* So, 1st iteration,  *(ptr+i) = 1 + 4 = 5 ( so it will print 5th character )
		* 2nd iteration,  *(ptr+i) = 1 + 3 = 4 ( so it will print 4th character during last iteration ), and so on.
		*/
        printf( "%c", *( ptr + i ) );
    }

}
