#include<stdio.h>

int main(){
    int i;
    printf("Enter a value:\t");
    scanf("%d",&i);

    if((i&1)==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }

    return 0;
}