/*
Write a program in C to input a 4 digit number and print all possible
numbers that can be formed using the four digits.
*/

#include<stdio.h>

int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int total=4+12+24+24;
    int arr[total];
    for(int j=0;j<total;j++){
        arr[j]=0;
    }

    int i=0;

    // single digit numbers

    for(i;i<4;i++){
        arr[i]=n%10;
        n=n/10;
    }

    // Double digit numbers
    
    for(int j=0;j<4;j++){
        for(int k=0;k<4;k++){
            if(arr[j]!=0 && j!=k){
                arr[i]=arr[j]*10+arr[k];
                i++;
            }
        }
    }

    // Triple digit numbers

    for(int j=0;j<4;j++){
        for(int k=0;k<4;k++){
            for(int l=0;l<4;l++){
                if(arr[j]!=0 && l!=k && l!=j && j!=k){
                    arr[i]=arr[j]*100+arr[k]*10+arr[l];
                    i++;
                }
            }
        }
    }

    // Four digit numbers

    for(int j=0;j<4;j++){
        for(int k=0;k<4;k++){
            for(int l=0;l<4;l++){
                for(int m=0;m<4;m++){
                    if(arr[j]!=0 && l!=k && l!=j && j!=k && m!=l && m!=j && m!=k){
                        arr[i]=arr[j]*1000+arr[k]*100+arr[l]*10+arr[m];
                        i++;
                    }
                }
            }
        }
    }

    // printing all the numbers

    for(int i=0;i<total;i++){
        for(int j=i+1;j<total;j++){
            if(arr[i]==arr[j]){
                i++;
                j=i;
            }
        }
        if(arr[i]==0){
            continue;
        }
        printf("%d ",arr[i]);
    }

    return 0;
}