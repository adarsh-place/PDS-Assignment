#include<stdio.h>
#include<string.h>

void reverse(char* str,int i,int length){
    if(i==length){
        return;
    }
    char temp=str[i];
    reverse(str,i+1,length);
    str[length-1-i]=temp;
}

int main(){

    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);

    int length=strlen(str)-1;

    reverse(str,0,length);

    printf("Reversed string: %s",str);

    return 0;
}