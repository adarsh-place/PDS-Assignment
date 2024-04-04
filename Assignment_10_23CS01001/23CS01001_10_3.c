#include<stdio.h>

union Emp{
    double fixed_salary;
    float hourly_wage;
};

struct Employee
{
    int ID;
    char name[50];
    union Emp EmpDetails;
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

    if(choice==1){
        printf("Enter Employee fixed salary: ");
        scanf("%ld",&Employee1.EmpDetails.fixed_salary);
    }
    else if(choice==2){
        printf("Enter Employee hourly wage: ");
        scanf("%f",&Employee1.EmpDetails.hourly_wage);
    }


    printf("\nID: %d",Employee1.ID);
    printf("\nName: %s",Employee1.name);
    if(choice==1){
        printf("\nFixed salary: %ld",Employee1.EmpDetails.fixed_salary);
    }
    else if (choice==2){
        printf("\nHourly Wage: %.2f",Employee1.EmpDetails.hourly_wage);
    }

    return 0;
}


//to create a complex data structure that has different types of data which are not used simultaneously.

// Memory Efficiency: Unions are useful when we want to save memory because they allow different data types 
// to share the same memory location. This is beneficial when we have a large structure with members that 
// are mutually exclusive.

// Variant Records: If we are implementing a variant record, where a data structure can store different types
// of data at different times, a union within a structure is ideal. This is common in situations where the 
// type of data stored can change during runtime.

// Performance: Accessing unions can be faster than accessing individual struct members because the data is 
// stored in the same location.