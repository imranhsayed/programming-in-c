/*
*Write a program in ‘C’ language, which accepts Enrolment number, Name
    Aggregate marks secured in a Program by a student. Assign ranks to students
    according to the marks secured. Rank-1 should be awarded to the students who
    secured the highest marks and so on. The program should print the enrolment
    number, name of the student and the rank secured in ascending order.
*/

#include <stdio.h>

struct Student {
    int enrollmentNo;
    char name[100];
    float marks;
};

int main() {

    int noOfStudent;

    // Get the no. of students.
    printf("Enter the number of students: ");
    scanf("%d", &noOfStudent);

    struct Student student[noOfStudent], temp;

    // Get the student details.
    printf( "\n Enter student details: \n" );

    for( int i = 0; i < noOfStudent; i++ ) {
        student[i].enrollmentNo = i+1;

        printf("\n Enter student name:");
        scanf("%s", student[i].name);

        printf("\n Enter student's marks: ");
        scanf("%f", &student[i].marks);
    }

    // Sort the array: Bubble sort- kritika's special.
    for ( int i = 1; i < noOfStudent; i++ ) {
        for( int j = 0; j < noOfStudent - i; j++ ) {
            if( student[j].marks < student[j+1].marks ) {
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
        printf("\n Marks: %.2f\n", student[i].marks);
    }

    return 0;
}
