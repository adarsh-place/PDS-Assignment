#include<stdio.h>

int MaxFinder(float arr[],int i,int size){
    if(i==size-1){
        return arr[i];
    }
    return arr[i]>MaxFinder(arr,i+1,size) ? arr[i] : MaxFinder(arr,i+1,size);
}

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    float arr[n];
    printf("Enter the array: ");
    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }

    int max = MaxFinder(arr,0,n);
    printf("Maximum element is: %d",max);
    return 0;
}