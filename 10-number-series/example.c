#include <stdio.h>

int powerMultiplication( int base, int exponent ) {
    int result = 1;

    for ( exponent; exponent > 0; exponent-- ) {
        result = result * base;
    }

    return result;
}

int main() {

    int n, j, sum = 0, result=1;

    printf("Enter your number: ");
    scanf( "%d", &n );

    for( int i = 1; i <= n; i++  ) {
       printf( "i = %d ", i );
       printf("\n");
       printf( "sum = %d + %d ", sum , powerMultiplication( i, i ) );
       sum = sum + powerMultiplication( i, i );

       printf("\n");
    }

    printf("Sum = %d", sum );

    return 0;
}
