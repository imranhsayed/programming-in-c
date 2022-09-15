#include <stdio.h>  

// Define a constant max.
#define max 100 

// Initialise the top value and the stack.
int top = 0;
char stack[max];

/**
 * Push the items in the stack
**/ 
void push ( char item ) {
      // If the stacks index has reached to max -1, print error. 
      if(top == max-1){  
          printf("stack overflow");  
      }  else {  
          // Push Element in stack
          stack[top]=item;  
          
          // Increment stack index.
          top++;
      }  
}

/**
 * When this function is called the top contains, the last index plus one.
 * That's we first decrement the top value to bring it to the last index.
 * Then it will return the last character.
**/ 
char pop () {
    top--;
    return stack[top];
}

int main() {
    
    char str[max];
    int i;
    printf("Enter a string to be reversed: ");
    gets( str );
    
    // Loop through till end of the string and push item in the stack.
    for( i = 0; str[i] != '\0'; i++ ) {
        push( str[i] );
    }


    /**
     * Loop through till end of the string and print from the top 
     * of the stack  to get the revered string
    **/ 
    for( i = 0; str[i] != '\0'; i++ ) {
        str[i] = pop();
    }
    
    printf("Stack: %s ", str );
    
    return 0;
}