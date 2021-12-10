// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int getSubstringIndex( char targetString[], char subString[] ) {

    int index, tempIndex, substringIndex, lengthOfSubString;

    lengthOfSubString = strlen( subString );

	// 1. Loop through the Target String characters array.
    for( index = 0; targetString[ index + lengthOfSubString - 1 ]; index++ ) {

        // Temporary hold the value of Target String index in temporary Index ( tempIndex ) .
        tempIndex = index;

        // 2. Loop through the Substring characters array.
        for( substringIndex = 0; substringIndex <= ( lengthOfSubString - 1 ); substringIndex++ ) {

            // If Target String character at current index does not match with that of Substring, then break.
            if( targetString[tempIndex] != subString[substringIndex]  ) {
                break;
            }

            // Else, it means a character match is found, and we increment the index to try to match the rest of the target string.
            tempIndex++;
        }

		// This means the above Loop 2, have successfully run, without break and all characters of substring is matched.
        if( substringIndex == lengthOfSubString  ) {
            // At this point this is the starting index of the targetString where the first character of a fully matched strings was found. Hence we return this index.
            return index;
        }
    }

	// When match not found.
    return -1;
}

int main() {
    // Write C code here
    int pos;
    char targetString[50], subString[50];

    printf( "Enter the target string:" );
    fgets( targetString, sizeof(targetString), stdin );

    fflush( stdin );

    printf( "Enter the substring:" );
    fgets( subString, sizeof(subString), stdin );

    pos = getSubstringIndex( targetString, subString );
    printf("Position of substring %d", pos);

    return 0;
}
