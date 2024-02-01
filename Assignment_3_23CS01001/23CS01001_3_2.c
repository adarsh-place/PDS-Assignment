#include<stdio.h>

int main(){

    int a,b,c;
    printf("Enter three integers:\t");
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b){
        if(a>=c){
            printf("Max number: %d",a);
        }
        else{
            printf("Max number: %d",c);
        }
    }
    else if(b>=c){
        if(b>=a){
            printf("Max number: %d",b);
        }
        else{
            printf("Max number: %d",a);
        }
    }
    else if(c>=b){
        if(c>=a){
            printf("Max number: %d",c);
        }
        else{
            printf("Max number: %d",a);
        }
    }

    return 0;
}