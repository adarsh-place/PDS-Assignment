#include<stdio.h>

union arrays{
    int arr1[10];
    float arr2[10];
    char arr3[10];
};

int main(){

    union arrays arrs;

    // We can only use one of these at a time:

    printf("Enter a integer: ");
    scanf("%d",&arrs.arr1[0]);  // Now the union holds an integer array
    printf("arr1[0] : %d",arrs.arr1[0]);
    printf("\narr2[0] : %.2f",arrs.arr2[0]);
    printf("\narr3[0] : %c",arrs.arr3[0]);

    printf("\n\nEnter a float: ");
    scanf("%f",&arrs.arr2[0]);  // Now the union holds a float array, overwriting the integer array
    printf("arr1[0] : %d",arrs.arr1[0]);
    printf("\narr2[0] : %.2f",arrs.arr2[0]);
    printf("\narr3[0] : %c",arrs.arr3[0]);

    fflush(stdin);
    printf("\n\nEnter a character: ");
    scanf("%c",&arrs.arr3[0]);  // Now the union holds a character array and float array
    printf("arr1[0] : %d",arrs.arr1[0]);
    printf("\narr2[0] : %.2f",arrs.arr2[0]);
    printf("\narr3[0] : %c",arrs.arr3[0]);

    return 0;
}


// Fixed Size: The size of the array is fixed at compile time. We cannot 
// change the size of an array within a union dynamically at runtime.

// Single Member Storage: In a union, only one member can be used at a time. If we have 
// an array in a union along with other types, we can only use the array or the other 
// members one at a time, not simultaneously.

// Memory Overlap: Since all members of a union share the same memory space, using an 
// array within a union means that the array will overlap with other union members. This 
// can lead to unexpected behavior if not managed carefully.

// Type Safety: Unions do not provide type safety. When we access an array within a union,
// the compiler will not check if the correct member is being accessed, which can lead to 
// bugs if not careful.

// Initialization: Initializing an array within a union can be tricky because we can only 
// initialize the first member of a union.