#include<stdio.h>

int main(){

    int x1,y1,x2,y2,x3,y3;

    scanf("%d%d %d%d %d%d",&x1,&y1,&x2,&y2,&x3,&y3);

    if(x2!=x3 && x1!=x2 && x1!=x3 && (y2-y1)/(x2-x1)==(y3-y1)/(x3-x1)){
        printf("They are in a line");
    }
    else if(x2==x3 && x1==x2){
        printf("They are in a line");
    }
    else{
        printf("They are not in a line");
    }

    return 0;
}