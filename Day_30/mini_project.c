// Write a program to develop complete mini project using array, strings, functions //

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    char course[30];
    float marks;
};

struct Student s[100];
int n = 0;

void addStudent()
{
    printf("\nEnter Roll No ");
    scanf("%d", &s[n].roll);

    printf("Enter Name ");
    scanf("%s", s[n].name);

    printf("Enter Course ");
    scanf("%s", s[n].course);

    printf("Enter Marks ");
    scanf("%f", &s[n].marks);

    n++;
    printf("Student Record Added Successfully");
}

void displayStudents()
{
    int i;

    if(n == 0)
    {
        printf("No Records Found");
        return;
    }

    printf("Student Records");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No : %d\n", s[i].roll);
        printf("Name    : %s\n", s[i].name);
        printf("Course  : %s\n", s[i].course);
        printf("Marks   : %f\n", s[i].marks);
    }
}

void searchStudent()
{
    int roll, i;

    printf("\nEnter Roll Number to Search ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            printf("\nStudent Found!\n");
            printf("Roll No : %d\n", s[i].roll);
            printf("Name    : %s\n", s[i].name);
            printf("Course  : %s\n", s[i].course);
            printf("Marks   : %.2f\n", s[i].marks);
            return;
        }
    }

    printf("Student Not Found");
}


void deleteStudent()
{
    int roll, i, j;

    printf("Enter Roll Number to Delete ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            for(j = i; j < n - 1; j++)
            {
                s[j] = s[j + 1];
            }

            n--;
            printf("Record Deleted Successfully");
            return;
        }
    }

    printf("Student Not Found");
}

int main()
{
    int choice;

    do
    {
        printf("Student Record Management System");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");

        printf("Enter your choice ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                deleteStudent();
                break;

            case 5:
                printf("Thank You");
                break;

            default:
                printf("Invalid Choice");
        }

    } 
    while(choice != 5);

    return 0;
}