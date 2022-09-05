#include <stdio.h>

int main() {
    int rowNo =5;

    for( int i = 5; i >0; i-- ) {
        for(int j = 5; j >=rowNo; j-- ) {
            printf("%d\t", j);
        }
        printf("\n");
        rowNo--;
    }

    return 0;
}
