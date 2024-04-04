#include<stdio.h>

int main(){

    struct structData
    {
        int a;
        int b;
        char c;
    };

    union unionData
    {
        int a;
        int b;
        char c;
    };

    union unionData Data2;
    struct structData Data1;
    
    printf("\nThe size of stuct is: %d",sizeof(Data1));
    printf("\nThe size of union is: %d",sizeof(Data2));
    
    return 0;
}

// When a variable is associated with a structure, the compiler allocates the memory for each member.
// The size of structure is greater than or equal to the sum of sizes of its members.

// When a variable is associated with a union, the compiler allocates the memory by considering the size of the largest member. 
// So, the size of union is equal to the size of the largest member.