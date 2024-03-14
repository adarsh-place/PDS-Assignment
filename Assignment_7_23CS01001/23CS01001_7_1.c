#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);

    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);

    int count=0;

    for(int i=0;i<strlen(str);i++){
        if(str[i]==ch){
            count++;
        }
    }

    printf("Frequency of %c is: %d",ch,count);

    return 0;
}