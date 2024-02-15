#include<stdio.h>

int main(){

    int divedend,divisor;

    printf("Divedend: ");
    scanf("%d",&divedend);

    printf("Divisor: ");
    scanf("%d",&divisor);

    int i=0;

    while(divedend>divisor){
        divedend=divedend-divisor;
        i++;
    }

    printf("Quotient: %d\nRemainder: %d",i,divedend);


    return 0;
}