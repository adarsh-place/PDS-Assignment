#include<stdio.h>

int main(){
    int D;
    printf("Enter number of days:\t");
    scanf("%d",&D);

    printf("Years: %d\nMonths: %d\nWeeks: %d\nDays: %d", D/365 , (D%365)/30 , ((D%365)%30)/7 , (((D%365)%30)%7));

    return 0;
}