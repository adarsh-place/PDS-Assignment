#include<stdio.h>

int main(){

    float M,W,T;
    int N,K;

    printf("Enter Marks obtained: ");
    scanf("%f",&M);
    printf("Enter no. of classes attended: ");
    scanf("%d",&N);
    printf("Enter total number of classes conducted: ");
    scanf("%d",&K);

    if(M<=100 && M>=0 && N<=K){
        W=1.0*N/K;
        T=M*W;
        printf("\nFinal Score: %.2f\n",T);

        if(T >= 90 ){
            printf("Grade = EX");
        }
        else if(T < 90 && T>=80){
            printf("Grade = A");
        }
        else if(T < 80 && T>=70){
            printf("Grade = B");
        }
        else if(T < 70 && T>=60){
            printf("Grade = C");
        }
        else if(T < 60 && T>=50){
            printf("Grade = D");
        }
        else if(T < 50 && T>=40){
            printf("Grade = P");
        }
        else{
            printf("Grade = F");
        }
    }
    else{
        printf("Invalid Input.");
    }

    return 0;
}