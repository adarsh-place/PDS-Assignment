#include<stdio.h>

int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n>100 && n<1000){
        int x=n;
        int sum=0;
        int temp;
        while(x!=0){
            temp=x%10;
            sum=sum+temp*temp*temp;
            x=x/10;
        }
        if(sum==n){
            printf("%d is an Armstrong Number",n);
        }
        else{
            printf("%d is not an Armstrong Number",n);
        }
    }
    else{
        printf("Incorrect Input");
    }

    return 0;
}