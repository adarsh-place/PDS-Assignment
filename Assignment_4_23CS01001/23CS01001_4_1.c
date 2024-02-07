#include<stdio.h>

int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    switch(n%2){
        case 0:
            printf("Even Integer");
            break;
        // case 1:
        //     printf("Odd Integer");
        //     break;
        default:
            printf("Odd integer");
    }

    return 0;
}
