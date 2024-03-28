#include<stdio.h>
#include<stdbool.h>

struct courseRecord
{
    char firstName[20];
    char lastName[20];
    char rollno[20];
    char department[20];
    char courseCode[10];
    float marks[3];
};

float avgFunc(struct courseRecord A)

{
    return (A.marks[0]+A.marks[1]+A.marks[2])/3;    
}

bool resultFunc(struct courseRecord A)
{
    return avgFunc(A)>=35 ? true : false;
}

int main()
{
    struct courseRecord A;
    printf("Enter first name: ");
    gets(A.firstName);
    printf("Enter last name: ");
    gets(A.lastName);
    printf("Enter Roll no.: ");
    gets(A.rollno);
    printf("Enter Department: ");
    gets(A.department);
    printf("Enter Course Code: ");
    gets(A.courseCode);
    printf("Enter marks for three tests: ");
    for(int i=0;i<3;i++){
        scanf("%f",&A.marks[i]);
    }

    printf("\n%s \n%s \n%s \n%s \n%s \nMarks: %.2f %.2f %.2f",A.firstName,A.lastName,A.rollno,A.department,A.courseCode,A.marks[0],A.marks[1],A.marks[2]);

    printf("\nAverage mark: %.2f",avgFunc(A));

    printf("\n%s", resultFunc(A) ? "Passed" : "Failed");
    return 0;
}