#include<stdio.h>
#include<math.h>

int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n==1){
        printf("Yes, %d is Kaprekar number.",n);
        return 0;
    }

    int s=n*n;   

    int x=s/10;
    int k=10;
    int y=s-x*k;

    while(x!=0){
        if(x+y==n && y!=0){
            printf("Yes, %d is Kaprekar number.",n);
            return 0;
        }
        x=x/10;
        k*=10;
        y=s-x*k;
    }

    printf("No, %d is not a Kaprekar number.",n);

    return 0;
}