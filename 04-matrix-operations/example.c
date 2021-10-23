#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j, k, a[3][3], b[3][3], c[3][3];

	printf( "\n Matrix A: " );

	for( i = 0; i < 3; i++ ) {
		for( j = 0; j < 3; j++ ) {
			printf( "\n Enter the value of item A[%d][%d]", i, j );
			scanf( "%d", &a[i][j] );
        }
	}

	return 0;
}
