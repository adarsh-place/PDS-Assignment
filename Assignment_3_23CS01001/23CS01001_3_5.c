#include<stdio.h>

int main(){

    int n;
    printf("Enter number of days: ");
    scanf("%d",&n);

    if(n>30){
        printf("Membership Canceled");
    }
    else if(n<=5){
        printf("Fine is %d Rs.",n);
    }
    else if(n>5 && n<=10){
        printf("Fine is %d Rs.",5+(n-5)*2);
    }
    else{
        printf("Fine is %d Rs.",15+(n-10)*5);
    }

    return 0;
}