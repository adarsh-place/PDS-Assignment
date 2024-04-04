#include<stdio.h>

int main(){

    union Data {
        int a;
        float b;
        char c;
    };

    union Data Data1;

    // assigning value of a

    printf("Enter a: ");
    scanf("%d",&Data1.a);
    printf("The value at Data1.a is: %d",Data1.a);
    printf("\nThe value at Data1.b is: %.2f",Data1.b);
    printf("\nThe value at Data1.c is: %c\n",Data1.c);

    // assigning value of b
    printf("\nEnter b: ");
    scanf("%f",&Data1.b);
    printf("The value at Data1.a is: %d",Data1.a);
    printf("\nThe value at Data1.b is: %.2f",Data1.b);
    printf("\nThe value at Data1.c is: %c\n",Data1.c);

    // assigning value of c
    printf("\nEnter c: ");
    fflush(stdin);
    scanf("%c",&Data1.c);
    printf("The value at Data1.a is: %d",Data1.a);
    printf("\nThe value at Data1.b is: %.2f",Data1.b);
    printf("\nThe value at Data1.c is: %c",Data1.c);


    return 0;
}