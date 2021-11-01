#include <stdio.h>
#include <string.h>

struct Employee {
	char name[50];
	int id;
	char departmentName[50];
	float salary;
	char position[50];
	char dateOfJoining[50];
};

struct Employee employees[100];
struct Employee employee;
int totalEmployees = 0;

void createANewRecord() {

	// Cleans the input buffer.
	fflush( stdin );

	printf( "\n Enter name of the employee: " );
	fgets( employee.name, 50, stdin );

	printf( "\n Enter employee ID: " );
    scanf( "%d", &employee.id );

	fflush( stdin );
    printf( "\n Enter department name: " );
    fgets( employee.departmentName, 50, stdin );

    printf( "\n Enter employee's salary: " );
    scanf( "%f", &employee.salary );

    fflush( stdin );
    printf( "\n Enter employee's position: " );
    fgets( employee.position, 50, stdin );

    printf( "\n Enter employee's date of joining: " );
    fgets( employee.dateOfJoining, 50, stdin );

    employees[totalEmployees] = employee;
    totalEmployees++;

    printf( "\n A new employee is added. \n\n" );
}

void listRecords() {

}

int handleChoices( int choice ) {

	if ( choice == 1 ) {
		createANewRecord();
	} else if ( choice == 2 ) {
		listRecords();
	}

	return 0;
}

int main() {
	int i;
	int indexSelectedEmployee;
	int userChoice = 0;

	while( userChoice != 5 ) {
		printf( "1. Creating a New Record\n" );
		printf( "2. Reading/Listing of Records\n" );
		printf( "3. Modify a Record\n" );
		printf( "4. Delete a Record\n" );
		printf( "5. Exit\n" );

		printf( "Please enter a choice: " );
		scanf( "%d", &userChoice );

		handleChoices( userChoice );
	}

	return 0;
}
