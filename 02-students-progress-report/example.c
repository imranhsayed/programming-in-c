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

int displayUserInputMenu( int userChoice ) {
	printf( "\n Press 1 to 'Insert Result'" );
	printf( "\n Press 2 to 'Display Result'" );
	printf( "\n Press 3 to 'Exit'" );

	printf( "\n Enter your choice: " );
	scanf( "%d", &userChoice );

	return userChoice;
}

int handleUserChoice( int userChoice ) {
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

    return userChoice;
}

void main() {
	int userChoice;

	while( 1 ) {
		userChoice = displayUserInputMenu( userChoice );
		handleUserChoice( userChoice );
	}
}

void insertResult() {

	// Term no.
	int termCount;

	// Increment global variable 'pos' by one.
	pos++;

	printf( "\n Enter student's roll no: " );
	scanf( "%d", &student[pos].roll );

	// . here is called 'Structure Member Operator'.
	printf( "\n Enter student's name: " );
//	scanf( "%s", &student[pos].name );

	/**
	* Cleans the input buffer
	* ( if enter was pressed, which is considered as a character )
	* Else Enter will be stored as a value for student's name scanf( "%d", student[pos].name ) line below.
	*/
	fflush( stdin );

	// Reads a line from a specified stream and stores it into the string pointed to by str. https://www.tutorialspoint.com/c_standard_library/c_function_fgets.htm
	gets(student[pos].name);

	// @TODO Condition to be changed to i < 4.
	for( i = 0; i < 2; i++ ) {
	
		termCount = i + 1;
		printf( "\n\n Enter Marks For TERM %d: ", termCount );

		printf( "\n\n English: " );
		scanf( "%d", &student[pos].result[i][0] );

		printf( "\n Computers: " );
        scanf( "%d", &student[pos].result[i][1] );

		printf( "\n Mathematics: " );
		scanf( "%d", &student[pos].result[i][2] );

		printf( "\n Science: " );
		scanf( "%d", &student[pos].result[i][3] );

		printf( "\n Geography: " );
		scanf( "%d", &student[pos].result[i][4] );

	}
}

void display() {
	int givenRollNo, isRollNoFound = 0, j;

	// Ask user to input the students roll no. in question.
	printf( "\n Enter student's roll no: " );
	scanf( "%d", &givenRollNo );

	/**
	* Loop through all the students and when the roll number matches the givenRollNo,
	* print the result in tabular alignment.
	*/
	for( i = 0; i <= pos; i++ ) {
		if( student[i].roll == givenRollNo ) {
			isRollNoFound = 1;
			printf( "\n Student name: %s Progress Report for VIII Standard", student[i].name );

			printf( "\n\n Subject \t Term-1 \t Term-2 \t Term-3 \t Term-4" );

			printf( "\n English" );
			for ( j = 0; j < 4; j++ ) {
                printf( "\t %d\t", student[i].result[j][0] );
            }

			printf( "\n Computers" );
            for ( j = 0; j < 4; j++ ) {
                printf( "\t %d\t", student[i].result[j][1] );
            }

			printf( "\n Mathematics" );
            for ( j = 0; j < 4; j++ ) {
                printf( "\t %d\t", student[i].result[j][2] );
            }

			printf( "\n Science" );
            for ( j = 0; j < 4; j++ ) {
                printf( "\t %d\t", student[i].result[j][3] );
            }

			printf( "\n Geography" );
            for ( j = 0; j < 4; j++ ) {
                printf( "\t %d\t", student[i].result[j][4] );
            }
			break;
		}
	}

	if( 0 == isRollNoFound ) {
		printf( "\n\n Student not found. Please try again" );
	}
}
