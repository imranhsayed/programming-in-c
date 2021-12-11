#include <stdio.h>
#include <stdlib.h> // Standard Library
#define MAX_FILE_NAME 100

int main() {
	FILE* filePointer;
	int noOfCharactersInFile = 0;

	char filename[MAX_FILE_NAME], currentCharacter;

	// @see https://stackoverflow.com/questions/2795382/enter-custom-file-name-to-be-read
	printf( "Enter filename: " );
	scanf("%s",filename);

	// Open file
	filePointer = fopen( filename, "r" );

	for (currentCharacter = getc(filePointer); currentCharacter != EOF; currentCharacter = getc(filePointer)) {
		noOfCharactersInFile = noOfCharactersInFile + 1;
	}

	 // Close the file
     fclose(filePointer);

     // Print the count of characters
     printf("The file %s has %d characters\n ", filename, noOfCharactersInFile);
     return 0;
}
