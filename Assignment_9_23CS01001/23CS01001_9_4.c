#include<stdio.h>

struct address 
{
    char street[20];
    char city[20];
    int zipcode;
};

struct person 
{
    char name[30];
    struct address addressA;
};

int main()
{
    struct person personA;
    printf("Enter Name: ");
    gets(personA.name);
    printf("Enter street: ");
    gets(personA.addressA.street);
    printf("Enter city: ");
    gets(personA.addressA.city);
    printf("Enter zipcode: ");
    scanf("%d",&personA.addressA.zipcode);

    printf("\nName: %s\n Address \nStreet: %s\nCity: %s\nZipcode: %d",personA.name,personA.addressA.street,personA.addressA.city,personA.addressA.zipcode);
    return 0;
}