#include<stdio.h>

int main() {
	FILE *even, *odd;
	int n, array[100], i;

	printf( "\n Enter the count of numbers: " );
	scanf( "%d", &n );

	for( i = 0; i < n; i++ ) {
		printf( "\n Enter number-%d: ", i + 1 );
		scanf( "%d", &array[i] );
	}

	even = fopen( "evenfile", "w" );
	odd = fopen( "oddfile", "w" );

	for( i = 0; i < n; i++ ) {
		if( array[i]%2 == 0 ) {
			putw( array[i], even );
		} else {
			putw( array[i], odd );
		}
	}

	fclose( even );
	fclose( odd );
}
