#include<stdio.h>

int checkComposite(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return 1;
        }
    }
    return 0;
}

int main(){

    int n;
    printf("Input a number: ",&n);
    scanf("%d",&n);

    int range= n%2==0 ? (n/2) : (n/2)+1;

    int count=0;
    printf("Required pairs are:\n");

    for(int i=3;i<range;i++){
        if(checkComposite(i)==1 && checkComposite(n-i)==1){
            printf("%d %d\n",i,n-i);
            count++;
        }
    }

    if(count==0){
        printf("Zero pairs");
    }

    return 0;
}