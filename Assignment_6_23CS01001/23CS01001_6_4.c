#include<stdio.h>
#include <stdbool.h>

bool checkFunc(int arr[],int n,int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            return true;
        }
    }
    return false;
}

int main(){

    int n,m;

    printf("Enter length of arr1[]: ");
    scanf("%d",&n);
    printf("Enter length of arr2[]: ");
    scanf("%d",&m);

    int arr1[n],arr2[m];

    printf("Enter elements of arr1[]: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    
    printf("Enter elements of arr2[]: ");
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }

    bool flag=true;
    
    for(int i=0;i<m;i++){
        if(checkFunc(arr1,n,arr2[i])){
            continue;
        }
        flag=false;
    }

    flag ?  printf("arr2[] is a subset of arr1[]") : printf("arr2[] is not a subset of arr1[]");

    return 0;
}