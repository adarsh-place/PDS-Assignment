#include<stdio.h>

int main(){

    int n1,n2;

    printf("Enter the length of first string: ");
    scanf("%d",&n1);

    char str1[n1];
    printf("Enter first string: ");
    scanf("%s",&str1);

    printf("Enter the length of second string: ");
    scanf("%d",&n2);

    char str2[n2];
    printf("Enter second string: ");
    scanf("%s",&str2);

    for(int i=0;i<n1;i++){
        printf("%c",*(str1+i));
    }
    for(int i=0;i<n2;i++){
        printf("%c",*(str2+i));
    }

    return 0;
}