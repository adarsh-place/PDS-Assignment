#include<stdio.h>

void elementSelector(int arr[],int n){
    int totalsum=0;

    for(int i=0;i<n;i++){
        totalsum+=arr[i];
    }

    float avg=1.0*totalsum/n;

    for(int i=0;i<n;i++){
        if(arr[i]>avg){
            printf("%d, ",arr[i]);
        }
    }
    
}

int main(){

    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter the elements: ");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    elementSelector(arr,n);

    return 0;
}