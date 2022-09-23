#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* nextPtr;
};

struct Node* firstNode = NULL;
struct Node* sortedFirstNode = NULL;

struct Node* insertNodeInSortedList( struct Node* sortedFirstNode, struct Node* newNode ) {
    struct Node *current;

    if ( sortedFirstNode == NULL || sortedFirstNode->data > newNode->data ) {
        newNode->nextPtr = sortedFirstNode;
        sortedFirstNode = newNode;
    } else {
        // Locate the position where this node can be inserted.
        current = sortedFirstNode;

        while( current->nextPtr != NULL && current->nextPtr->data <= newNode->data ) {
            current = current->nextPtr;
        }
        newNode->nextPtr = current->nextPtr;
        current->nextPtr = newNode;
    }
    
    return sortedFirstNode;
}

/**
 *  Sorts a linked list in ascending order.
 * 
 * “Sorted” -will point to the minimum element of the sorted set (a linked list in our case)
 * “Current” - will point to the first element to be processed in the unsorted set (Initially, current will be equal to the head of the input linked list)
 * 
 * A fixed sorted subset (the linked list starting with “sorted”)
 * The current item (the node pointed by “current”)
 * A subset containing remaining items (the linked list starting from the next node of “current”)
**/
struct Node* sortList( struct Node* firstNode, int size ) {

    /**
     * Initialize the sortedList first node, which will tracke the sorted items.
    **/
    struct Node *sortedListFirstNode = NULL;

    // Set the current node to the firstNode(of the unsorted list).
    struct Node *current = firstNode;


    struct Node *next = NULL;

    // Loop through the unsorted list.
    while( current != NULL ) {

        // Store the next node of curr for next iteration.
        next = current->nextPtr;
        
        // Insert Current Node in the sorted linked list.
        sortedListFirstNode = insertNodeInSortedList( sortedListFirstNode, current );

        // Move the current to point to the next node.
        current = next;
    }

    return sortedListFirstNode;

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

    printf( "\nDisplaying the list: " );
    
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


    // @TODO Remove size later.
    sortedFirstNode = sortList( firstNode, size );
    displayList( sortedFirstNode );

    return 0;
}