#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j, noOfRows;

	// You should enter 5 to generate the 5 rows, as asked in the question.
	printf( "\n Enter the number of rows: " );
	scanf( "%d", &noOfRows );

	// Loop through the
	for( i = noOfRows; i > 0; i-- ) {

		/*
		* Loop through till the length of i
		* First time value of i wil be 5, so it will print 5.
		* Second time value of i will be 4, so it will run below loop
		* twice and since value of j will be 5 in first iteration and 4 in second
		* iteration , it will print 5 4.
		* This process will continue until the count of rows.
		*/
		for( j = noOfRows; j >= i;j-- ) {
			printf( "%d ", j );
        }

        printf( "\n" );
	}

	return 0;
}
