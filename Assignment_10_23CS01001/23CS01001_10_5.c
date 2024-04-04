#include<stdio.h>

enum Pay_Type
{
    HOURLY = 1,
    SALARY = 2
};

union Emp{
    double fixed_salary;
    float hourly_wage;
    enum Pay_Type P2;
};

struct Employee
{
    int ID;
    char name[50];
    union Emp EmpDetails;
    enum Pay_Type P1;
};

int main(){

    struct Employee Employee1;

    printf("Enter Employee ID: ");
    scanf("%d",&Employee1.ID);

    fflush(stdin);
    printf("Enter Employee name: ");
    gets(Employee1.name);

    int choice;
    printf("Type of salary: (1) Fixed Salary  (2) Hourly Wage\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    if(choice==SALARY){
        printf("Enter Employee fixed salary: ");
        scanf("%ld",&Employee1.EmpDetails.fixed_salary);
    }
    else if(choice==HOURLY){
        printf("Enter Employee hourly wage: ");
        scanf("%f",&Employee1.EmpDetails.hourly_wage);
    }


    printf("\nID: %d",Employee1.ID);
    printf("\nName: %s",Employee1.name);
    if(choice==SALARY){
        printf("\nFixed salary: %ld",Employee1.EmpDetails.fixed_salary);
    }
    else if (choice==HOURLY){
        printf("\nHourly Wage: %.2f",Employee1.EmpDetails.hourly_wage);
    }

    return 0;
}
