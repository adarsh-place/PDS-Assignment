#include<stdio.h>
#include<string.h>

char stack[100];
int top =-1;

void push(char data)
{
    if (top == 99) {
        printf("Overflow stack!\n");
        return;
    }
    top++;
    stack[top] = data;
}

char pop()
{
    if (top == -1) {
        printf("Empty Stack!\n");
        return '\0';
    }
    char data = stack[top];
    top--;
    return data;
}

void reverse_string(char *str)
{
    for(int i=0;i<strlen(str);i++){
        push(str[i]);
    }

    for(int i=0;i<strlen(str);i++){
        str[i]=pop();
    }
}

int main(){

    char string[100];
    printf("Input a string: ");
    gets(string);

    reverse_string(string);
    printf("Reversed string using a stack is: %s\n", string);

    return 0;
}