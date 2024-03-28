#include<stdio.h>

int main()
{
    struct company
    {
        char name[20];
        char address[50];
        long long int phone;
        int noOfEmployee;
    };

    struct company company1;

    printf("Enter name of company: ");
    gets(company1.name);
    printf("Enter address: ");
    gets(company1.address);
    printf("Enter phone no.: ");
    scanf("%lld",&company1.phone);
    printf("Enter number Of Emplloyee: ");
    scanf("%d",&company1.noOfEmployee);

    printf("%s  %s  %lld  %d",company1.name,company1.address,company1.phone,company1.noOfEmployee);

    

    return 0;
}