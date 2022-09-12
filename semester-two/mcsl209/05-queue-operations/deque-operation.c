#include <stdio.h>
# define MAX 5

int deque_arr[MAX];
int left = -1;
int right = -1;

void insert_right() {
    int item;

    // If queue is full. 
    if( ( left == 0 && right == MAX -1 ) || ( left == right + 1 ) ) {
        printf( "Queue overflow" );
        return;
    }

    // If the queue is empty set both left and right to zero, because we are adding a new item.
    if( left = -1 ) {
        left = 0;
        right = 0;
    } else if( right = MAX - 1 ) {
        right = 0;
    } else {
        right = right + 1;
    }

    printf("Input the element for adding in queue : ");
	scanf("%d", &item);
	deque_arr[right] = item;

}

void insert_left();
void delete_right();
void delete_left();
void display_queue();

void display_queue() {
    int front_position = left, rear_position = right;

    // If queue is empty.
    if( left == -1  ) {
        printf( "Queue is empty" );
        return;
    }

    printf("Queue elements are:\n");

    if( front_position <= rear_position ) {
        while( front_position <= rear_position ) {
            printf( "%d", deque_arr[front_position] );
            front_position++;
        }
    } else {
        while( front_position <= MAX - 1 ) {
            printf( "%d", deque_arr[front_position] );
            front_position++;
        }
        front_position = 0;
        while( front_position <= rear_position ) {
            printf( "%d", deque_arr[front_position] );
            front_position++;
        }
    }

    printf("\n");
}

void main() {
    int choice;
    do {
        printf("1. Insert at right \n");
        printf("2. Insert at left \n");
        printf("3. Delete at right \n");
        printf("4. Delete at left \n");
        printf("5. Display\n");
		printf("6. Quit\n");
        printf("Enter your choice : ");
        scanf( "%d", &choice );

        switch( choice ) {
            case 1:
                insert_right();
                break;
            case 2:
                insert_left();
                break;
            case 3:
                delete_right();
                break;
            case 4:
                delete_left();
                break;
            case 5:
                display_queue();
                break;
            case 6:
                break;
            default:
                printf("Incorrect choice entered");            
        }
    } while( choice != 5 );
}