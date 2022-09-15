#include <stdio.h>
#include <stdlib.h>

/**
 * Declare a node.
 * 
 * the *left is the pointer to the left child which can or cannot be NULL
 * the *right is the pointer to the right child which can or cannot be NULL.
**/
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
}

// Create a new Node
Node* createNode(int data) {
  struct node* newNode = malloc( sizeof( struct Node ) );
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

struct insert( Node* rootNode, int data ) {

    // If tree is empty.
    if ( rootNode == NULL ) {
        rootNode = insert( data );
    }

    /**
     * If the data to be inserted is less than equal to data in rootNode,
     * then make a recursive call to insert data in the left subtree.
    **/
    if ( data <= rootNode->data ) {
        rootNode->left = insert( rootNode->left, data );
    }

    /**
     * If the data to be inserted is greater than data in rootNode,
     * then make a recursive call to insert data in the right subtree.
    **/
    if ( data > rootNode->data ) {
        rootNode->right = insert( rootNode->right, data );
    }
    
    return rootNode;
};

// displaying the nodes!
void print(struct Node* rootNode ) {
    if (rootNode != NULL) {
        print(rootNode->left);
        printf("%d \n", rootNode->data);
        print(rootNode->right);
    }
}



int main() {
    struct Node* root = NULL;
    root = insert( root, 1 );
    root = insert( root, 2 );
    root = insert( root, 3 );
    root = insert( root, 4 );
    root = insert( root, 5 );

    return 0;
}