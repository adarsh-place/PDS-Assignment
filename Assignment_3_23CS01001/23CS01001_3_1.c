#include<stdio.h>

int main(){
    
    int n;
    printf("Enter a integer number:\t");
    scanf("%d",&n);

    // Checking the number through conditions 
    if(n>0){
        printf("Positive Number");
    }
    else if(n<0){
        printf("Negative Number");
    }
    else{
        printf("Zero");
    }

    return 0;

}