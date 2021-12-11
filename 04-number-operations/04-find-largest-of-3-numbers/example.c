/*
 * C program to find the biggest of three numbers
 */
#include <stdio.h>

void main()
{
    int n1, n2, n3;

    printf("Enter the values of three numbers:");
    printf("\nEnter n1:");
    scanf("%d", &n1);
    printf("\nEnter n2:");
    scanf("%d", &n2);
    printf("\nEnter n1:");
    scanf("%d", &n3);


    // if n1 is greater than both n2 and n3, n1 is the largest
    if (n1 >= n2 && n1 >= n3) {
        printf("%d is the largest number.", n1);

    // if n2 is greater than both n1 and n3, n2 is the largest
    } else if (n2 >= n1 && n2 >= n3) {
        printf("%d is the largest number.", n2);

    // if both above conditions are false, n3 is the largest
    } else {
        printf("%d is the largest number.", n3);
    }
}
