#include <stdio.h>

int main(){

    int arr[50], arraySize, i, j, temp;

    printf("Please Enter the Number of Elements you want in the array: ");

    scanf("%d", &arraySize);

    printf("Please Enter the Value of Elements: ");

    for(i = 0; i < arraySize; i++)

        scanf("%d", &arr[i]);

    for(i = 0; i < arraySize - 1; i++){

        for(j = 0; j < arraySize - i - 1; j++){

            if(arr[j] > arr[j + 1]){

                temp = arr[j];

                arr[j] = arr[j + 1];

                arr[j + 1] = temp;

            }

        }

    }

    printf("Array after implementing bubble sort: ");

    for(i = 0; i < arraySize; i++){

        printf("%d  ", arr[i]);

    }

    return 0;

}

