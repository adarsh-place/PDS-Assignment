#include<stdio.h>
#include<string.h>

char stack[100]; 
int top=-1;

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

int main(){
    int n;
    printf("Enter the length: ");
    scanf("%d", &n);
    char string[n];
    fflush(stdin);
    gets(string);
    for (int i = 0; i < n; i++)
    {
        if (top != -1)
        {
            if (stack[top] == string[i])
            {
                pop();
            }
            else
            {
                push(string[i]);
            }
        }
        else
        push(string[i]);
    }
    for (int i = 0; i < top+1; i++)
    {
        printf("%c",stack[i]);
    }
}