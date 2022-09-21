#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* nextPtr;
};

struct Node* firstNode = NULL;

/**
 *  Sorts a linked list in ascending order.
*/
struct Node* sortList( struct Node* firstNode ) {
    if ( firstNode == NULL ) {
        printf( "List is empty" );
        exit(0);
    }
    
}

/**
 * Create a Node.
 * 
 * @param int data Data.
 * @param struct nextPtr 
 * 
 * @return struct node.
*/
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

/**
 * Create a Linked List.
 * 
 * @param int size Size of the linked list.
 * @param struct first Node.
 * 
 * @return struct firstNode First Node.
**/
struct Node* createAList( int size, struct Node* firstNode ) {

    struct Node *temp, *newNode;
    int data;

    if ( firstNode != NULL ) {
        printf( "List is not empty" );
        return firstNode;
    }

    printf( "Enter data for the first Node 1: " );
    scanf( "%d", &data );

    firstNode = createANode( data, NULL );

    temp = firstNode;

    for( int i = 2; i <= size; i++ ) {
        printf( "Enter data for the first Node %d: ", i );
        scanf( "%d", &data );
        newNode = createANode( data, NULL );
        
        temp->nextPtr = newNode;
        temp = newNode;
    }

    return firstNode;
}

/**
 * Display a list.
*/
void displayList( struct Node* firstNode ) {
    struct Node* temp;

    if ( firstNode == NULL ) {
        printf( "List is empty" );
        exit(0);
    }
    
    temp = firstNode;

    while( temp != NULL ) {
        printf( "\n:%d", temp->data );
        temp = temp->nextPtr;
    }
}

int main() {
    int size;

    printf( "Enter the length of the linked list: " );
    scanf( "%d", &size );
    firstNode = createAList( size, firstNode );
    displayList( firstNode );

    return 0;
}