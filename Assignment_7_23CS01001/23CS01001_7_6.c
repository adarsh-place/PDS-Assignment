#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);

    char substr[50];
    printf("Enter the substring to be searched: ");
    fgets(substr,50,stdin);
    substr[strlen(substr)-1]=NULL;

    strstr(str,substr) ? printf("The substring exists in the string.") : printf("The substring does not exist in the string.");  

    return 0;
}