#include<stdio.h>

int main(){

    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);

    int length = 0;
    int counter=0;
    while(str[counter++]!='\n'){
        length++;
    }

    for(int i=0;i<length/2;i++){
        if(!(str[i]==str[length-1-i] || str[i]==str[length-1-i]-32 || str[i]==str[length-1-i]+32 )){
            printf("The string is not a palindrome");
            return 0;
        }
    }
    printf("The string is a palindrome");

    return 0;
}