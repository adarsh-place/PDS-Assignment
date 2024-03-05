#include<stdio.h>

void oneCityData(int inArr[]){
    int sum=0;
    for(int j=0;j<7;j++){
        sum+=inArr[j];
    }
    printf("%.2f ",sum/7.0);
}

int main(){

    int n;
    printf("Enter Number of cities: ");
    scanf("%d",&n);

    int arr[n][7];

    printf("Enter the data:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<7;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The averages are: ");

    for(int i=0;i<n;i++){
        oneCityData(arr[i]);
    }

    return 0;
}