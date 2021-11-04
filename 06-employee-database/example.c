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
	for( i = 0; i < totalEmployees; i++ ) {
		printf( "\n Employee Name: %s", employees[i].name );
		printf( "\n Employee ID: %d", employees[i].id );
		printf( "\n Employee Department: %s", employees[i].department );
		printf( "\n Employee Salary: %d", employees[i].salary );
		printf( "\n Employee Position: %s", employees[i].position );
		printf( "\n Employee Date of Joining: %s", employees[i].dateOfJoining );
	}
}

void modifyARecord() {
	int employeeIndex = -1;

		printf( "\n Enter Employee ID to modify the record: " );
    	scanf( "%d", &employee.id );

		// Loop through all the records and when an id match is found set that to the variable employeeIndex.
        for( i = 0; i < totalEmployees; i++ ) {
            if( employee.id == employees[i].id ) {
                employeeIndex = i;
            }
        }

        // If match is found take the data to be updated and update it.
        if( employeeIndex != -1 ) {
			fflush( stdin );

			printf( "\n Enter a new name of the employee: " );
			fgets( employees[employeeIndex].name, 50, stdin );

			printf( "\n Enter a new employee ID: " );
		    scanf( "%d", &employees[employeeIndex].id );

			fflush( stdin );
		    printf( "\n Enter a new department name: " );
		    fgets( employees[employeeIndex].departmentName, 50, stdin );

		    printf( "\n Enter a new employee's salary: " );
		    scanf( "%f", &employees[employeeIndex].salary );

		    fflush( stdin );
		    printf( "\n Enter a new employee's position: " );
		    fgets( employees[employeeIndex].position, 50, stdin );

		    printf( "\n Enter a new employee's date of joining: " );
		    fgets( employees[employeeIndex].dateOfJoining, 50, stdin );
        } else {
            printf( "Employee ID does not exist");
        }
}

void deleteARecord() {
	int employeeIndex = -1;

	printf( "\n Enter Employee ID to delete the record: " );
	scanf( "%d", &employee.id );

	// Loop through all the records and when an id match is found set that to the variable employeeIndex.
	for( i = 0; i < totalEmployees; i++ ) {
		if( employee.id == employees[i].id ) {
			employeeIndex = i;
		}
	}

	// If match is found, we need to shift array elements which are after the element to be deleted. @see https://www.programmingsimplified.com/c/source-code/c-program-delete-element-from-array
	if( employeeIndex != -1 ) {
		// Start from the index of the employee( i = employeeIndex ) to be deleted and shift each element one index behind.
		for( i = employeeIndex; i < totalEmployees - 1; i++ ) {
			employees[i] = employees[i+1];
		}

		// Reduce the count of global variable totalEmployees by one, since one item is remove from the array.
		totalEmployees--;
		printf( "Employee has been deleted" );
	} else {
		printf( "Employee ID not found" );
	}
}

int handleChoices( int choice ) {

	if ( choice == 1 ) {
		createANewRecord();
	} else if ( choice == 2 ) {
		listRecords();
	} else if ( choice == 3 ) {
        modifyARecord();
    } else if ( choice == 4 ) {
        deleteARecord();
    } else if ( choice == 5 ) {
        return 0; // Exit.
    } else {
        printf( "\n Incorrect choice. Choices should be between 1 to 5" );
    }

	return 0;
}

int main() {
	int i;
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
