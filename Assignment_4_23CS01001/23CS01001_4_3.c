#include<stdio.h>

int main(){

    float s,b;
    printf("Enter credit score: ");
    scanf("%f",&s);
    printf("Enter current balance: ");
    scanf("%f",&b);

    int i;

    if(s<600){
        i=15;
    }
    else if(s>=600 && s<=750){
        i=12;
    }
    else{
        i=10;
    }

    printf("The interest is %f",1.0*b*i/100);

    return 0;
}