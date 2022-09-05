// Online C compiler to run C program online
#include <stdio.h>

int main() {

    struct Student {
        int enrollmentNo;
        char name[100];
        float marks;
    };

    int noOfStudent;
    struct Student student[noOfStudent], temp;

    // Get the no. of students.
    printf("Enter the number of students: ");
    scanf("%d", &noOfStudent);

    // Get the student details.
    printf( "\n Enter student details: " );

    for( int i = 0; i < noOfStudent; i++ ) {
        student[i].enrollmentNo = i+1;

        printf("\n Enter student name:");
        scanf("%s", &student[i].name);

        printf("\n Enter student's marks: ");
        scanf("%f", &student[i].marks);
    }

    // Sort the array: Bubble sort- kritika's special.
    for ( int i = 1; i < noOfStudent; i++ ) {
        for( int j = 0; j < noOfStudent - i; j++ ) {
            if( student[j].marks > student[j+1].marks ) {
                temp = student[j];
                student[j] = student[j + 1];
                student[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    for( int i = 0; i < noOfStudent; i++ ) {
        printf("\n Rank: %d", i+1 );
        printf("\n Enroll No: %d", student[i].enrollmentNo );
        printf("\n Name: %s", student[i].name );
        printf("\n Marks: %f", student[i].marks);
    }

    return 0;
}
