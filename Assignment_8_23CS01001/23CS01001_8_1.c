#include<stdio.h>

void circularShift(int *a,int *b,int *c){
    int temp=*c;
    *c=*b;
    *b=*a;
    *a=temp;
}

int main(){

    int x,y,z,*a,*b,*c;
    printf("Enter the values of x,y,z: ");
    scanf("%d%d%d",&x,&y,&z);

    a=&x;
    b=&y;
    c=&z;

    circularShift(a,b,c);

    printf("New values of x=%d , y=%d ,z=%d",x,y,z);

    return 0;
}