#include<stdio.h>

int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int count=0;
    int temp=n;
    while(temp!=0){
        count++;
        temp/=10;
    }
    printf("Total Count: %d\n",count);

    temp=n;
    int arr[count];
    for(int i=0;i<count;i++){
        arr[i]=temp%10;
        temp/=10;
    }

    int sum=0;
    for(int i=0;i<count-1;i++){
        for(int j=i+1;j<count;j++){
            if(arr[i]==arr[j]){
                arr[j]=0;
            }
        }
    }
    for(int i=0;i<count;i++){
        sum+=arr[i];
    }
    printf("Sum of unique number: %d",sum);

    return 0;
}