/**
 * Linked List : To create and display Singly Linked List
 * https://www.programiz.com/dsa/linked-list
 * https://www.geeksforgeeks.org/menu-driven-program-for-all-operations-on-singly-linked-list-in-c/
 * https://www.w3resource.com/c-programming-exercises/linked_list/c-linked_list-exercise-1.php
**/
#include <stdio.h>
#include <stdlib.h>

/**
 * Create a stucture data type for Node, that will store 
 * 1. the data 
 * 2. the pointer, pointing to the next node ( containing address of the next node)
**/
struct Node {
    int data; // Data for the node.
    struct Node *nextPtr; // Stores address of the next node.
};

// Create a 'firstNode' of Node data type.
struct Node *firstNode = NULL;

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

/**
 * Create a Node.
**/
struct Node* createANode( int data, struct Node* nextPtr ) {
    struct Node* node = ( struct Node* )malloc( sizeof( struct Node ) );

    if ( node == NULL ) {
        printf("Memory can not be allocated.");
        exit;
    }
    
    node->data = data;
    node->nextPtr = nextPtr;

    return node;
}

// Function to create the list.
void createNodeList( int noOfNodes ) {
    struct Node *newNode;
    struct Node *temp;
    int data;

    if ( firstNode != NULL) {
        printf("\nThe list is already created\n");
        return;
    }
    
    // If no. of nodes to be created is zero, no need to create list.
    if ( noOfNodes == 0 ) {
        return;
    }

    /**
     * Step 1: Create First Node.
     * 
     * Take the data for the first node.
    **/
    printf(" Input data for node 1 : ");
    scanf("%d", &data);

    firstNode = createANode( data, NULL );

    /* 
     * Step 2: Set temp to first node.
     * Initially temp will contain first node and then
     * later in below loop it will contain previous node.
    **/
    temp = firstNode;
    
    /*
     * Step 3: Creating rest of the nodes and adding to linked list.
    **/
    for( int i = 2; i <= noOfNodes; i++ ) {

        printf(" Input data for node %d : ", i);
        scanf(" %d", &data);

        // Create a new node with given data and next pointer as NULL
        newNode = createANode( data, NULL );
        
        // Then set previous node's next pointer (tmp) to the newNode
        temp->nextPtr = newNode; 
        // Then point previous node(temp) to the next node.
        temp = newNode;
        
    }
}

// Display the single linked list data.
void displayList() {
    struct Node *temp;
    
    if ( firstNode == NULL ) {
        printf(" List is empty.");
        return;
    }

    // First set the temp to first node.
    temp = firstNode;

    // Loop through till the end of the single linked list( i.e untill the node(temp) is not null )
    while ( temp != NULL ) {
        printf( "Data = %d\n", temp->data );

        // Set the temp to point to the next node.
        temp = temp->nextPtr;
    }
}

void deleteANodeFromTheList( int dataToDelete ) {
    struct Node *previousNode;
    struct Node *temp;

    if ( firstNode == NULL ) {
        printf(" List is empty.");
        return;
    }

    // First set the temp to first node.
    temp = firstNode;

    // Loop through till the end of the single linked list( i.e untill the node(temp) is not null )
    for ( int i = 0; temp != NULL; i++ ) {

        /**
         * Node exists at the begining
         * If the node exists at the start, set the first node to the next node to delete the node in question.
        **/
        if ( i == 0 && dataToDelete == temp->data ) {
            firstNode = firstNode->nextPtr;
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


