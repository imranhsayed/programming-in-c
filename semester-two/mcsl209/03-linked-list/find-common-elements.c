#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *nextPtr;
};

struct Node *firstNodeA = NULL;
struct Node *firstNodeB = NULL;
struct Node *firstNodeC = NULL;

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
        /*
         * Temp is assigned the address of newNode.
         * NOT same as temp->data = newNode->data; temp->nextPtr = newNode->nextPtr;
        **/
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

struct Node* createListWithCommonNodes( struct Node* firstNodeListA, struct Node* firstNodeListB ) {

    struct Node *tempA = firstNodeListA, *tempB = firstNodeListB, *tempC, *newNodeC, *firstNodeListC = NULL;

     // If either of the nodes are empty then return.
    if ( firstNodeListA == NULL || firstNodeListB == NULL ) {
        return firstNodeListC;
    }

    while( tempA != NULL ) {
        while( tempB != NULL ) {

            // If the data for current node in the iteration is not equal for both lists, then continue.
            if( tempA->data == tempB->data ) {

                if( firstNodeListC == NULL ) {
                    firstNodeListC = createANode( tempA->data, NULL );
                    tempC = firstNodeListC;
                } else {
                    newNodeC = createANode( tempA->data, NULL );
                    tempC->nextPtr = newNodeC;
                    tempC = newNodeC;
                }

            }

            tempB = tempB->nextPtr;

        }
        
        tempA = tempA->nextPtr;
        // Reset tempB to point to first node of list B.
        tempB = firstNodeB;
    }

    return firstNodeListC;
}

int main() {
    int sizeA, sizeB;

    printf( "Enter the no. of items in Linked List A: " );
    scanf( "%d", &sizeA );
    firstNodeA = createLinkedList( sizeA, firstNodeA );

    printf( "Enter the no. of items in Linked List B: " );
    scanf( "%d", &sizeB );
    firstNodeB = createLinkedList( sizeB, firstNodeB );

    printf("List A: \n");
    displayList( firstNodeA );

    printf("List B: \n");
    displayList( firstNodeB );

    firstNodeC = createListWithCommonNodes( firstNodeA, firstNodeB );
    printf("Common Elements: \n");
    displayList( firstNodeC );

   return 0;
}