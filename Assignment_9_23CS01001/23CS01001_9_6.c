#include<stdio.h>
#include<math.h>
#include <string.h>

struct student
{
    char name[30];
    int rollno;
    float percentage;
};
int count=0;
struct student students[100];

void insert()
{
    if (count < 100)
    {
        printf("Enter name: ");
        gets(students[count].name);

        printf("Enter roll number: ");
        scanf("%d", &students[count].rollno);
        printf("Enter percentage: ");
        scanf("%f", &students[count].percentage);
        count++;
    }
    else
        printf("Student-list is Full.Cannot add more students.\n");
}

void viewstudent()
{
    if (count > 0)
    {
        printf("\nStudentslist\n");
        printf("\n");
        printf("%-20s%-30s%-20s%-20s\n", "Sr no.", "Name", "Roll no.", "Percentage");
        printf("\n");
        for (int i = 0; i < count; i++)
        {
            printf("%-18d: %-30s%-20d%-20.2f\n", i + 1, students[i].name, students[i].rollno, students[i].percentage);
        }
    }
    else
        printf("No students to display\n");
}

void sortname()
{
    int size = count;
    {
        int issorted = 0;
        while (size != 1)
        {
            int val = 0;
            for (int i = 0; i < size - 1; i++)
            {
                issorted = 1;
                if (strcmp(students[i].name, students[i + 1].name) == 1)
                {
                    struct student temp = students[i];
                    students[i] = students[i + 1];
                    students[i + 1] = temp;
                    issorted = 0;
                }
            }
            if (issorted)
            {
                return;
            }
            size--;
        }
    }
}

void sortrollno()
{
    int size = count;
    {
        int issorted = 0;
        while (size != 1)
        {
            for (int i = 0; i < size - 1; i++)
            {
                issorted = 1;
                if (students[i].rollno > students[i + 1].rollno)
                {
                    struct student temp = students[i];
                    students[i] = students[i + 1];
                    students[i + 1] = temp;
                    issorted = 0;
                }
            }
            if (issorted)
            {
                return;
            }
            size--;
        }
    }
}

char *findOne(const char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    for (int i = 0; i < count; i++)
    {
        char *str2 = students[i].name;
        int flag = 1;
        for (int j = 0; j < len; j++)
        {
            if (str[j] != str2[j])
            {
                flag = 0;
            }
        }
        if(flag) {
            return students[i].name;
        }
    }
    return '\0';
}

void specs(float *arr)
{
    arr[0] = count;
    float max = students[0].percentage, min = students[0].percentage, mean = 0, stdd = 0;
    for (int i = 0; i < count; i++)
    {
        mean += students[i].percentage;
        if (students[i].percentage > max)
        {
            max = students[i].percentage;
        }
        if (students[i].percentage < min)
        {
            min = students[i].percentage;
        }
    }
    mean /= count;
    arr[1] = max;
    arr[2] = min;
    arr[3] = mean;
    for (int i = 0; i < count; i++)
    {
        stdd += (students[i].percentage - mean) * (students[i].percentage - mean);
    }
    stdd /= count;
    stdd = sqrt(stdd);
    arr[4] = stdd;
}

void delete(int roll)
{
    int index = -1;
    for (int i = 0; i < count; i++)
    {
        if (students[i].rollno == roll)
        {
            index = i;
        }
    }
    if (index != -1)
    {
        for (int i = index; i < count; i++)
        {
            students[i] = students[i + 1];
        }
        count--;
    }
    else
        printf("Given roll no. does not exists\n");
}

int main()
{
    int choice;
    do
    {

        printf("\nStudent-list Menu\n");
        printf("0. Exit\n");
        printf("1. insert Student\n");
        printf("2. view Student\n");
        printf("3. sort Students by name\n");
        printf("4. Find one\n");
        printf("5. Specs\n");
        printf("6. Delete\n");
        printf("Enter your choice(pls enter the number): ");
        fflush(stdin);
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 0:
            printf("Exiting Application. Goodbye!\n");
            break;
        case 1:
            insert();
            sortrollno();
            break;
        case 2:
            viewstudent();
            break;

        case 3:
            sortname();
            break;
        case 4:
        {
            char str[30];
            printf("Enter the part of the name : ");
            gets(str);
            char *str2 = findOne(str);
            printf("The name which starts with the given part is : ");
            puts(str2);
            break;
        }
        case 5:
        {
            float arr[5];
            specs(arr);
            printf("Number of records in the database :%.0f\n", arr[0]);
            printf("Highest percentage :%.2f\n", arr[1]);
            printf("Lowest percentage :%.2f\n", arr[2]);
            printf("Mean :%.2f\n", arr[3]);
            printf("Standard deviation :%.2f\n", arr[4]);
            break;
        }
        case 6:
        {
            int roll;
            printf("Enter the roll no. that you want to remove :");
            scanf("%d", &roll);
            delete (roll);
            break;
        }
        }
    } while (choice != 0);


    return 0;
}