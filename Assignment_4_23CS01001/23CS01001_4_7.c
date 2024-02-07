#include<stdio.h>

int main(){

    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    int price;

    if(age<5){
        price=0;
    }
    else if(age>=5 && age<=12){
        price=20;
    }
    else if (age>=13 && age<=20){
        price=50;
    }
    else{
        price=50*0.8;
    }

    printf("The ticket price for you is: %d",price);
    

    return 0;
}