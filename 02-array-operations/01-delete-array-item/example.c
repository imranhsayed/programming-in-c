
#include <stdio.h>

int main() {

    int A[5] = {1,2,3,4,5}, i, location;

      for (i = 0; i < 5; i++) {
          printf("%d, ", A[i]);
      }

    printf( "Enter the location for element to be deleted: \n " );
    scanf( "%d", &location );

	// Start the loop from location, keep shifting the next item to 1 step before location.
    for( location; location < 5; location++) {
        A[location -1] = A[location]; // location -1, becomes the new location of every next item.
    }

	// Print Array. No of elements reduced by 1, that's why checking i < 4, instead of i < 5.
	  for (i = 0; i < 4; i++) {
	      printf("%d, ", A[i]);
	  }

    return 0;
}
