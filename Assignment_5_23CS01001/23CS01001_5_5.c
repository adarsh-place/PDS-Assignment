#include<stdio.h>

int main(){

    int n;
    int sum=0;
    char ch='Y';

    while(ch!='N' && ch!='n'){

        if(ch!='Y' && ch!='y'){
            printf("Not a valid input\n");
            fflush(stdin);
            scanf("%c",&ch);
            continue;
        }

        printf("Provide the number\n");
        scanf("%d",&n);
        sum+=n;

        printf("Do you want to continue?\n");
        fflush(stdin);
        scanf("%c",&ch);
    }

    printf("The sum is: %d",sum);


    return 0;
}