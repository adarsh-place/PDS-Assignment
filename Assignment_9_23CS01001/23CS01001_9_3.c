#include<stdio.h>

struct date 
{
    int day;
    int month;
    int year;
};

int check(struct date date1, struct date date2)
{
    if(date1.year!=date2.year){
        return date1.year>date2.year ?  1 : -1;
    }
    else if(date1.month!=date2.month){
        return date1.month>date2.month ? 1 : -1;
    }
    else if(date1.day!=date2.day){
        return date1.day>date2.day ? 1 : -1;
    }
    return 0;
}

int main()
{
    struct date date1;
    struct date date2;
    
    printf("Enter first date (DD  MM  YY):");
    scanf("%d %d %d",&date1.day,&date1.month,&date1.year);
    printf("Enter second date (DD  MM  YY):");
    scanf("%d %d %d",&date2.day,&date2.month,&date2.year);

    int ans=check(date1,date2);

    printf("%d",ans);

    return 0;
}