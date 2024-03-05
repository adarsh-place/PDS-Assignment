#include<stdio.h>
#include <stdbool.h>

bool isPrime(int n){
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){

    int l,u;
    printf("Enter lower limit: ");
    scanf("%d",&l);
    printf("Enter upper limit: ");
    scanf("%d",&u);

    printf("Prime numbers between %d-%d are: \n",l,u);

    for(int i=l+1;i<u;i++){
        if(isPrime(i)){
            printf("%d, ",i);
        }
    }

    return 0;
}