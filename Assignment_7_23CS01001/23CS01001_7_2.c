#include<stdio.h>
#include<string.h>


// Approach 1 : Creating a new string from given string

int main(){

    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);

    char newstr[100];
    int j=0;

    for(int i=0;i<strlen(str)-1;i++){
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')){
            newstr[j++]=str[i];
        }
    }

    // printf("%s\n",newstr);

    for(int i=0;i<j;i++){
        printf("%c",newstr[i]);
    }

    return 0;
}



// Approach 2 : Using pointers changes made in the same string

// void func(char* str,int i,int len){
//     if(i==len-1){
//         str[i]=' ';
//         return;
//     }
//     str[i]=str[i+1];
//     func(str,i+1,len);
// }

// int main(){

//     char str[100];
//     printf("Enter a string: ");
//     fgets(str,100,stdin);

//     int len=strlen(str)-1;

//     for(int i=0;i<len;i++){
//         while (!((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))){
//             if(i==len-1){
//                 str[i]=' ';
//                 break;
//             }
//             else{
//                 func(str,i,len);
//                 len--;
//             }
//         }
//     }
//     printf("%s",str);

//     return 0;
// }