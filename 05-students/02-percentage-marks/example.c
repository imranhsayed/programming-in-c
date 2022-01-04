// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Accept marks of 5 subjects each out of 100 marks and display the percentage
    char subjects[] = { "Hindi", "English", "Maths", "Science", "Computers" };
    int marks[5];

    printf( "Enter marks for 5 subjects:" );

    for( int i = 0; i < 5; i++ ) {
        printf( "\nEnter marks for %s: ", subjects[i] );
        scanf( "%d", &marks[i] );
    }

    return 0;
}
