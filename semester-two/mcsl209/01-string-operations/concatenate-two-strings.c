// Question- Write a program to concatenate two strings S1 and S2.
#include <stdio.h>

int main() {

    /**
    * Declare and initialize two strings s1 and s2.
    * Calculate the length of the first string s1 and hold it in lengthOfS1
    * Start the loop from the first index of string two s2 and keeping adding each
    * character of second string s2 to s1
    */
    char s1[100] = "Object Oriented", s2[100] = " Programming";
    int lengthOfS1;

    // Calculate the length of the first string s1 and hold it in lengthOfS1.
    for( lengthOfS1 = 0; s1[lengthOfS1] != '\0'; lengthOfS1++ );

    /**
    * Start the loop from the first index of string two s2 and keeping adding each
    * character of second string s2 to s1.
    * Note that in first iteration s1[lengthOfS1] contains the first string s1 and then
    * we keep adding s2 string characters.
    * We are maintaining two indexes lengthOfS1 and s2Index, because lengthOfS1 would be higher than
    * s2Index
    */
    for( int s2Index = 0; s2[s2Index] != '\0'; s2Index++ ) {
        s1[lengthOfS1] = s2[s2Index];
        lengthOfS1++;
    }

    printf( "length of the string: %s", s1 ); // Output "Object Oriented Programming"

    return 0;
}
