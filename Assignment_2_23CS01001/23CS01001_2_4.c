#include<stdio.h>

int main(){
    int y;
    printf("Enter a year:\t");
    scanf("%d",&y);

    if(y%4==0 && y%100==0){
        if(y%400==0){
            printf("It is a leap year.");
        }
        else{
            printf("It is not a leap year.");
        }
    }
    else if(y%4==0 && y%100!=0){
        printf("It is a leap year.");
    }
    else{
        printf("It is not a leap year.");
    }

    return 0;
}
