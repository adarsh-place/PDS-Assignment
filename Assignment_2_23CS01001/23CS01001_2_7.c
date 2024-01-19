#include<stdio.h>

int main(){
    float mealCost=100;
    float tipPercent=15;
    float taxPercent=8;

    printf("Meal's Total Cost: %.0f", mealCost+(mealCost*tipPercent/100)+(mealCost*taxPercent/100));

    return 0;
}