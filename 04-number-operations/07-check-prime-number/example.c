#include <stdio.h>

int main() {

	int num, count = 0;

	printf( "Enter a number: " );
	scanf( "%d", &num );

	/**
	* Loop : starts from 1 and ends till the number itself.
	* Check if the number has 2 factors ( means it is divisible by 1 and itself ),
	* when divided by all the numbers from 1 and itself. e.g. if no is 4, then try dividing by
	* 1, 2, 3, 4
	* Every time the remainder is zero, save increment counter by one.
	*/
	for( int i = 1; i <= num; i++ ) {
		if( num % i == 0 ) {
			count++;
		}
	}

	// If count is 2, means number has two factors ( divisible by 1 and itself) and that means its a prime number.
	if( count == 2 ) {
		printf( "It's a prime number" );
	} else {
		printf( "It's not a prime number" );
	}

}
