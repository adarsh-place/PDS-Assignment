#include<stdio.h>

int main(){

    float x,y,r,x1,y1;

    printf("Enter the x-coordinate of the centre: ");
    scanf("%f",&x);

    printf("Enter the y-coordinate of the centre: ");
    scanf("%f",&y);

    printf("Enter the radius of the circle: ");
    scanf("%f",&r);

    printf("Enter the coordinates of the point: ");
    scanf("%f %f",&x1,&y1);

    float check;
    check=(x-x1)*(x-x1)+(y-y1)*(y-y1);

    if(check<r*r){
        printf("Inside the circle");
    }
    else if(check==r*r){
        printf("On the circle");
    }
    else{
        printf("Outside the circle");
    }
    
    return 0;
}