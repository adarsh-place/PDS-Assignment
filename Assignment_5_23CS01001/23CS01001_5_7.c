#include<stdio.h>

void swap(int arr[],int j){
    int temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
}

int main(){

    int n;
    printf("Number of integers: ");
    scanf("%d",&n);

    printf("Enter the numbers: ");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr,j);
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}