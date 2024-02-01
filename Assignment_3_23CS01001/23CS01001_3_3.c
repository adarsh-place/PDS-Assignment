#include<stdio.h>

int main(){

    int a,b,c;
    printf("Enter the sides:\t");
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b+c || b>=a+c || c>=a+b){
        printf("They are not the sides of a triangle");
    }
    else{
        printf("They are the sides of a triangle");
    }

    return 0;
}