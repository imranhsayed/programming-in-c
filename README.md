# programming-in-c
Programming in C

## Compiling a c program

* Create an executable c program file and execute it.

```gcc example.c -o example && ./example
```

### Arrays

#### One dimensional array ( Vectors )
* Syntax:
`int arrayVariableName[size];`

* Example one - `int myNums[4];` // Here 4 is the size of the array, means this array can have upto four items.
* Example two `int myNums[] = {1, 4, 6, 8}` // Because we are declaring and initiallzing the array at the same time, we don't need to specify the size 4.

#### Two Dimensional array ( Matrices )
* Syntax:
`int arrayVariableName[rowsCount][columnsCount];`

* This two dimensional array has two rows and each row has 4 items(colums) in the array. You need to loop through it twice to print their values
* Example: `int myNums[2][4] = { {2, 3, 2, 1}, {2, 5, 4, 2}`

* Example Two:
* ```
#include<stdio.h>
int main(){      
int i=0,j=0;    
int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};

//Traversing 2D array    
for(i=0;i<4;i++){    
    for(j=0;j<3;j++){    
        printf("arr[%d] [%d] = %d \n",i,j,arr[i][j]);    
    }//end of j    
}//end of i    
return 0;  
}
```
