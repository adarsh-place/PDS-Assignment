#include<stdio.h>

int main(){

    float r,h;
    float pi=3.14;

    printf("Enter the radius of cylinder: ");
    scanf("%f",&r);

    printf("Enter the height of cylinder: ");
    scanf("%f",&h);

    printf("Surface area of cylinder: %.2f sq.meters\n",2*pi*r*(r+h));
    printf("Volume of cylinder: %.2f cubic metres",pi*r*r*h);

    return 0;

}