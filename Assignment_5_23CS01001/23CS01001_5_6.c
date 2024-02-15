#include<stdio.h>
#include<string.h>

int check(char ch){
    char arr[]={'a','r','h','k','d','s','y'};
    for(int j=0;j<7;j++){
        if(arr[j]==ch){
            return 1;
        }
    }
    return 0;
}

int main(){

    printf("Enter a word: ");
    char str[100];
    fgets(str, 100, stdin);

    for(int i=0;i<strlen(str)-1;i++){
        if(check(str[i])==0){
            printf("NO");
            return 0;
        }
    }
    printf("YES");

    return 0;
}