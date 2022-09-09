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
    struct Node *prevPtr; // Stores address of the previous node
};

// Create a 'firstNode' of Node data type.
struct Node *firstNode;

// Function to create the list
void createNodeList( int noOfNodes );
void deleteANodeFromTheList( int node );
// Function to display the list
void displayList();

int main() {
    
    int noOfNodes, dataToDelete;

    printf( "Enter the no of nodes for the singly linked list: " );
    scanf( "%d", &noOfNodes );
    
    // Create Node list.
    createNodeList( noOfNodes );
    
    // Display the created node list.
    printf("\n Data entered in the list : \n");
    displayList();

    printf( "Enter node value to be deleted from the list: " );
    scanf( "%d", &dataToDelete );

    // Delete an element from the linked list.
    deleteANodeFromTheList( dataToDelete );

    // Display again
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
        firstNode->prevPtr = NULL;

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
            // Set the previous pointer to temp
            newNode->prevPtr = temp;
            // Then set previous node's next pointer (tmp) to the newNode
            temp->nextPtr = newNode; 
            /* Then point previous node(temp) to the next node. 
             * The previous pointer of temp will be set to newNode's prevoius pointer with the below line
             */
            temp = newNode;
            
        }
    }
}

// Display the single linked list data.
void displayList() {
    struct Node *temp;
    
    if (firstNode == NULL) {
        printf(" List is empty.");
        return;
    }

    // First set the temp to first node.
    temp = firstNode;

    // Loop through till the end of the single linked list( i.e untill the node(temp) is not null )
    while (temp != NULL) {
        printf( "Data = %d\n", temp->data );

        // Set the temp to point to the next node.
        temp = temp->nextPtr;
    }
}

void deleteANodeFromTheList( int dataToDelete ) {
    struct Node *previousNode;
    struct Node *temp;

    if (firstNode == NULL) {
        printf(" List is empty.");
        return;
    }

    // First set the temp to first node.
    temp = firstNode;

    // Loop through till the end of the single linked list( i.e untill the node(temp) is not null )
    for (int i = 0; temp != NULL; i++ ) {

        /**
         * Node exists at the begining
         * If the node exists at the start, set the first node to the next node to delete the node in question.
        **/
        if ( i == 0 && dataToDelete == temp->data ) {
            firstNode = firstNode->nextPtr;
            firstNode->prevPtr = NULL;
            break;
        }
        

        // printf( "Current Node data = %d\n", temp->data );
        // printf( "Next Node data = %d\n", temp->nextPtr->data );

        /**
         * Node exists in the middle
         * If the node exists at the next index, if yes then set the current to to next to next node
         * in order to delete the node in question.
        **/
        if( dataToDelete == temp->nextPtr->data ) {
            temp->nextPtr = temp->nextPtr->nextPtr;
            // printf("Temp->next->next: %s", temp->nextPtr->nextPtr);
            printf("Temp->next->next: %s", temp->nextPtr->nextPtr->prevPtr);
            //temp->nextPtr->nextPtr->prevPtr = temp;
            break;
        } else {
            // Else increment the temp to point to next node.
            temp = temp->nextPtr;
        }

        /**
         * Node exists at the end.
         * Check if the next to next pointer is null, the data matches with the next node data,
         * then set the current node next pointer to NULL,because we want to delete the last node.
        **/
        if ( temp->nextPtr->nextPtr == NULL && dataToDelete == temp->nextPtr->data ){
        
            temp->nextPtr = NULL;
            break;
        }
        
    }
}


