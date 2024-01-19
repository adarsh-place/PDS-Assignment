#include<stdio.h>

int main(){
    int i;

    printf("Input a number: \t");
    scanf("%d",&i);

    ((i&1)!=0 && 100<i && i<200) ? printf("True") : printf("False");

    return 0;
}