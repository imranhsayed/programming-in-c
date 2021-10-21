#include <stdio.h> // Standard Input Output.
#include <stdlib.h> // Standard Library.

// @TODO Change variable 'pos' name to id.

// Create a struct called 'Student'.
struct Student {
	int roll;
	char name[40];
	int result[4][8];
};

// Create a variable called student with struct Student.
struct Student student[20];
int i, pos=-1;

// Insert result and display.
void insertResult();
void display();

void main() {
	int userChoice;

	while( 1 ) {
		displayUserInputMenu( userChoice );
		handleUserChoice( userChoice );
	}
}

void displayUserInputMenu( userChoice ) {
	printf( "\n Press 1 to 'Insert Result'" );
	printf( "\n Press 2 to 'Display Result'" );
	printf( "\n Press 3 to 'Exit'" );

	printf( "\n Enter your choice: " );
	scanf( "%d", &userChoice );
}

void handleUserChoice( userChoice ) {
	switch( userChoice ) {
        case 1:
        insertResult();
        break;

        case 2:
        display();
        break;

        case 3:
        exit(0);

        default:
        printf( "Incorrect choice entered. Please try again" );
    }
}

void insertResult() {

	// Term no.
	int termCount;

	// Increment global variable 'pos' by one.
	pos++;

	printf( "\n Enter student's roll no: " );
	scanf( "%d", student[pos].roll );

	/**
	* Cleans the input buffer
	* ( if enter was pressed, which is considered as a character )
	* Else Enter will be stored as a value for student's name scanf( "%d", student[pos].name ) line below.
	*/
	fflush( stdin );

	// . here is called 'Structure Member Operator'.
	printf( "\n Enter student's name: " );
	scanf( "%d", student[pos].name );

	for( i = 0; i < 4; i++ ) {
		termCount = i + 1;
		printf( "\n Enter marks for term %d", termCount );

		printf( "\n English: " );
		scanf( "%d", &student[pos].result[i][0] );

		printf( "\n Computer Science" );
        scanf( "%d", &student[pos].result[i][1] );

		printf( "\n Mathematics: " );
		scanf( "%d", &student[pos].result[i][2] );

		printf( "\n Physics: " );
		scanf( "%d", &student[pos].result[i][3] );

		printf( "\n Chemistry: " );
		scanf( "%d", &student[pos].result[i][4] );

		printf( "\n Biology: " );
		scanf( "%d", &student[pos].result[i][5] );

		printf( "\n History" );
        scanf( "%d", &student[pos].result[i][6] );

		printf( "\n Geography" );
        scanf( "%d", &student[pos].result[i][7] );

	}
}

void display() {
	int givenRollNo, isRollNoFound = 0;

	// Ask user to input the students roll no. in question.
	printf( "\n Enter student's roll no: " );
	scanf( "%d", &givenRollNo );

	/**
	* Loop through all the students and when the roll number matches the givenRollNo,
	* print the result in tabular alignment.
	*/
	for( i = 0; i < pos; i++ ) {
		if( givenRollNo == student[i].roll ) {
			isRollNoFound = 1;

			printf( "\n\n %s", student[i].name );
			printf( "\n\n Subject \t Term-1 \t Term-2 \t Term-4" );
			printf( "\n\n English" );
		}
	}
}
