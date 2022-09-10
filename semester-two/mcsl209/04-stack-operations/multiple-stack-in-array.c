#include <stdio.h>  
#define SIZE 20  


int array[SIZE];  // declaration of array type variable.  
int top1 = -1;  
int top2 = SIZE;
int lengthOfStack1 = 10, lengthOfStack2 = 10;

void push1(int item) {
    if (top1 == lengthOfStack1-1) {
        printf("Stack Overflow");
    } else {
        top1++;
        array[top1] = item;
    }
}

int main() {
    int input, i;

    printf("Enter data for stack 1: \n");

    for (i = 0; i < lengthOfStack1; i++) {
        printf("\n Stack Element %d: ", i);
        scanf("%d", &input);
        push1(input);
    }

    printf("Enter data for stack 2: \n");

    for (i = 0; i < lengthOfStack2; i++) {
        printf("\n Stack Element %d: ", i);
        scanf("%d", &input);
        push2(input);
    }
}