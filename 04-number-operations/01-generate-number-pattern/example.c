#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j, noOfRows;

	// You should enter 5 to generate the 5 rows, as asked in the question.
	printf( "\n Enter the number of rows: " );
	scanf( "%d", &noOfRows );

	// Loop through the
	for( i = 1; i <= noOfRows; ++i ) {

		/*
		* Loop through till the length of i
		* First time value of i wil be 1, so it will print 1.
		* Second time value of i will be 2, so it will run below loop
		* twice and since value of j will be 1 in first iteration and 2 in second
		* iteration , it will print 1 2.
		* This process will continue until the count of rows.
		*/
		for( j = 1; j <= i; ++j ) {
			printf( "%d ", j );
        }

        printf( "\n" );
	}

	return 0;
}
