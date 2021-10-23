#include<stdio.h>

int main() {
	FILE *evenNumberFile, *oddNumberFile;
	int countOfNumbers, givenNumbersArray[100], i;

	// Step One: Take the count of Numbers.
	printf( "\n Enter the count of numbers: " );
	scanf( "%d", &countOfNumbers );

	for( i = 0; i < countOfNumbers; i++ ) {
		printf( "\n Enter number %d: ", i + 1 );
		scanf( "%d", &givenNumbersArray[i] );
	}

	// Step Two: Open Two Writable Files called "even-numbers" and "odd-numbers"
	evenNumberFile = fopen( "even-numbers", "w" );
	oddNumberFile = fopen( "odd-numbers", "w" );

	// Step Three: Loop through the user fed numbers and put them conditionally into respective even and odd files.
	for( i = 0; i < countOfNumbers; i++ ) {

		if( givenNumbersArray[i]%2 == 0 ) {
			putw( givenNumbersArray[i], evenNumberFile );
		} else {
			putw( givenNumbersArray[i], oddNumberFile );
		}

	}

	// Step Four: Close the Files.
	fclose( evenNumberFile );
	fclose( oddNumberFile );

	return 0;
}
