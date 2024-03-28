#include<stdio.h>

struct data
{
    char rollNo[10];
    char name[20];
    char address[50];
    int age;
    float avgMarks;
};

void print(struct data students[])
{
    for(int i=0;i<2;i++){
        printf("\nFor student number %d",i+1);
        printf("\n%s %s %s %d %.0f\n",students[i].rollNo,students[i].name,students[i].address,students[i].age,students[i].avgMarks);
    }
}

int main()
{    
    struct data students[2];

    for(int i=0;i<2;i++){
        fflush(stdin);
        printf("\n");

        printf("Enter data for student number %d",i+1);
        printf("\nEnter Roll No: ");
        gets(students[i].rollNo);

        printf("\nEnter name: ");
        gets(students[i].name);

        printf("\nEnter address: ");
        gets(students[i].address);

        printf("\nEnter age: ");
        scanf("%d",&students[i].age);
        
        printf("\nEnter average marks: ");
        scanf("%f",&students[i].avgMarks);
    }

    print(students);

    return 0;
}