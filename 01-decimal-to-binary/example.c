#include<stdio.h>
#include<stdlib.h>

int main() {

	int number = 0;
	int remainder, binaryArray[10], i=0;

	// "clear" command is for linux. Use "cls" for windows
	system("clear");
	printf("Enter the number to convert: ");
	scanf("%d", &number);

	while( number ) {

		// Divide the number with 2 and store the remainder
		remainder = number % 2;

		/**
		 * Store the new valued of the number after dividing it by 2.
		 * This is so that it can be reused.
		 */
		number = number / 2;

		// Add the remainder to the array.
		binaryArray[i] = remainder;

		i++;

	}

	// Print the binary Array Items in reverse order.
	for( int j = i-1; j>=0; j-- ) {
		printf( "%d", binaryArray[j] );
	}

	return 0;
}

