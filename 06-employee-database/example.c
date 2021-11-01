#include <stdio.h>
#include <string.h>

struct Employee {
	char name[50];
	int ID;
	char DepartmentName[50];
	float Salary;
	char Position[50];
	char DateJoining[50];
}

void createANewRecord( employee ) {

	// Cleans the input buffer.
	fflush( stdin );

	printf( 'Enter name of the employee: ' );
	fgets( employee.name, 50, stdin );
}

int handleChoices( int choice, employee ) {

	if ( choice == 1 ) {
		createANewRecord( employee );
	}

	return 0;
}

int main() {
	struct Employee employees[100];
	int totalEmployees = 0;
	struct Employee employee;
	int i;
	int indexSelectedEmployee;
	int userChoice = 0;

	while( userChoice != 5 ) {
		printf( '1. Creating a New Record\n' );
		printf( '2. Reading/Listing of Records\n' );
		printf( '3. Modify a Record\n' );
		printf( '4. Delete a Record\n' );
		printf( '5. Exit\n' );

		printf( 'Please enter a choice\n' );
		scanf( "%d", userChoice );

		handleChoices( userChoice, employee );
	}

	return 0;
}
