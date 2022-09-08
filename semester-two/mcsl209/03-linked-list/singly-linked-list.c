// Linked List : To create and display Singly Linked List/
// https://www.w3resource.com/c-programming-exercises/linked_list/c-linked_list-exercise-1.php
#include <stdio.h>
#include <stdlib.h>

/**
 * Create a stucture data type for Node, that will store 
 * 1. the data 
 * 2. the pointer, pointing to the next node ( containing address of the next node)
**/
struct Node {
    int data; // Data for the node.
    struct Node *nextPtr; // Stores address of the next note.
};

// Create a 'firstNode' of Node data type.
struct Node *firstNode;

// Function to create the list
void createNodeList( int noOfNodes );
// Function to display the list
void displayList();

int main() {
    
    int noOfNodes;

    printf( "Enter the no of nodes for the singly linked list: " );
    scanf( "%d", &noOfNodes );
    
    // Create Node list.
    createNodeList( noOfNodes );
    
    printf("\n Data entered in the list : \n");
    displayList();

    return 0;
}

// Function to create the list.
void createNodeList( int noOfNodes ) {
    struct Node *newNode, *temp;

    // This will store the data for each node during each iteration of linked list.
    int data;
    
    // Allocating dynamic memory to firstNode.
    firstNode = ( struct Node * )malloc( sizeof( struct Node ) );
    
    // If firstNode is NULL, memory was not allocated.
    if( firstNode == NULL ) {
        printf(" Memory can not be allocated.");
    } else {
        // Take the data for the node.
        printf(" Input data for node 1 : ");
        scanf("%d", &data);
        
        firstNode->data = data;      
        firstNode->nextPtr = NULL; // links the address field to NULL

        // Initial temp will contain first node and then later in below loop it will 
        // contain previous node.
        temp = firstNode;
        
        // Creating noOfNodes nodes and adding to linked list
        for( int i=2; i<=noOfNodes; i++) {

            // Allocate dynamic memory to new new node.
            newNode = (struct Node *)malloc(sizeof(struct Node));

            // Ensure some memory is allocated.
            if(newNode == NULL) {
                printf(" Memory can not be allocated.");
                break;
            }
            
            printf(" Input data for node %d : ", i);
            scanf(" %d", &data);
            
            // Add the data to the node.
            newNode->data = data;
            // Set the next Pointer to NULL first.
            newNode->nextPtr = NULL;
            // Then set previous node's next pointer (tmp) to the newNode
            temp->nextPtr = newNode; 
            // Then point previous node(temp) to the next node.
            temp = newNode;
            
        }
    }
}

void displayList() {
    struct Node *temp;
    
    if (firstNode == NULL) {
        printf(" List is empty.");
    } else {
        temp = firstNode;
        while (temp != NULL) {
            printf( "Data = %d\n", temp->data );
            temp = temp->nextPtr;
        }
        
    }
    
}


