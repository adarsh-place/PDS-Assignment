#include<stdio.h>

int main(){

    int n1,n2;
    char ch;
    printf("Enter int1, int2, operator: ");
    scanf("%d %d %c",&n1,&n2,&ch);

    // char ch;
    // scanf("%c",&ch);

    switch (ch)
    {
    case '+':
        printf("%d %c %d = %d",n1,ch,n2,n1+n2);
        break;
    case '-':
        printf("%d %c %d = %d",n1,ch,n2,n1-n2);
        break;
    case '*':
        printf("%d %c %d = %d",n1,ch,n2,n1*n2);
        break;
    case '/':
        printf("%d %c %d = %f",n1,ch,n2,1.0*n1/n2);
        break;
    default:
        printf("Invalid Operator");
        break;
    }

    return 0;
}