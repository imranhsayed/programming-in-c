#include<stdio.h>

int fibonacci(int);

int main() {
   int countOfNumbers, index;

   printf("Enter total no. of items in the series:");
   scanf("%d",&countOfNumbers);

   printf("Fibonacci series\n");

   for ( index = 0 ; index < countOfNumbers; index++ ) {
      printf("%d\n", fibonacci(index));
   }

   return 0;
}

int fibonacci(int index) {
    // If it's first number, it should be 0
   if ( index == 0 ) {
      return 0;

      // If it's second number, it should be 1
   } else if ( index == 1 ) {

      return 1;

      // All other numbers (3rd and onwards ) will be sum of previous two numbers.
   } else {
      return ( fibonacci(index-1) + fibonacci(index-2) );
   }
}
