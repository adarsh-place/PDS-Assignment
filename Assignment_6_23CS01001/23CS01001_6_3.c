#include<stdio.h>

void reverse(int arr[],int n,int i){
    if(i==n){
        return;
    }
    int temp=arr[i];
    reverse(arr,n,i+1);
    arr[n-1-i]=temp;
}

int main(){

    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    reverse(arr,n,0);

    printf("Reversed array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}