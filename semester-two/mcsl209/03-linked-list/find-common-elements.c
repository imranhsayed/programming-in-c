#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *nextPtr;
};

struct Node *firstNodeA = NULL;
struct Node *firstNodeB = NULL; 

/**
 * Create a new node.
 * 
 * @param int data Data.
 * @param struct Node* nextPtr Next pointer.
 * 
 * @return struct Node* Newly created node.
**/
struct Node* createANode( int data, struct Node* nextPtr ) {
    struct Node* node = ( struct Node* )malloc( sizeof( struct Node ) );

    if ( node == NULL ) {
        printf( "Memory could not be allocated" );
        exit(0);
    }

    node->data = data;
    node->nextPtr = nextPtr;

    return node;
    
}

struct Node* createLinkedList( int size, struct Node *firstNode ) {
    struct Node *newNode, *temp;
    int data;

    // If firstNode is null ( i.e. list is already created ) or size is 0, then return.
    if ( firstNode != NULL || size == 0 ) {
        return firstNode;
    }

    // Create the first Node.
    printf( "Enter the data for node - 1: " );
    scanf( "%d", &data );

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
   for( int i = 2; i <= size; i++ ) {
        printf( "Enter the data for the node - %d: ", i );
        scanf( "%d", &data );

        newNode = createANode( data, NULL );
        temp->nextPtr = newNode;
        temp = newNode;
   }

   return firstNode;
    
}

/**
 * Display a linked list.
**/
void displayList( struct Node *firstNode ) {
    struct Node *temp;

    if ( firstNode == NULL ) {
        printf( "List is empty" );
        return;
    }

    // First set the temp to first node.
    temp = firstNode;

    while( temp != NULL ) {
        printf( "Data = %d \n", temp->data );

        // Set the temp to point to the next node.
        temp = temp->nextPtr;
    }
    
}

int main() {
    int sizeA, sizeB;

    printf( "Enter the no. of items in Linked List A: " );
    scanf( "%d", &sizeA );

    printf( "Enter the no. of items in Linked List B: " );
    scanf( "%d", &sizeA );

   firstNodeA = createLinkedList( sizeA, firstNodeA );
//    firstNodeB = createLinkedList( sizeB, firstNodeB );
    displayList( firstNodeA );
    // displayList( firstNodeB );

    return 0;
}