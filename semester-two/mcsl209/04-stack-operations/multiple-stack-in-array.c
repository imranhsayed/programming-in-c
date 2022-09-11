#include <stdio.h>  
#define SIZE 10  


int array[SIZE];  // declaration of array type variable.  
int top1 = -1;  
int top2 = SIZE;
int lengthOfStack1 = 5, lengthOfStack2 = 5;

void push1(int item) {
    if (top1 == top2 - 1) {
        printf("Stack Overflow");
    } else {
        top1++;
        array[top1] = item;
    }
}

void push2(int item) {
    if (top2 == top1 + 1) {
        printf("Stack Overflow");
    } else {
        top2--;
        array[top2] = item;
    }
}

int pop1() {
    int item;
    if (top1 == -1)
        printf("\n Stack is empty");
    else {
        item = array[top1];
        top1--;
        printf("\n Item removed: %d", item);
    }
    return item;
}

int pop2() {
    int item;
    if (top2 == SIZE)
        printf("\n Stack is empty");
    else {
        item = array[top2];
        top2++;
        printf("\n Item removed: %d", item);
    }
    return item;
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

    for (i = 0; i <= lengthOfStack1; i++) {
        pop1();
    }
    
    for (i = 0; i <= lengthOfStack2; i++) {
        pop2();
    }
}