// Write a program to create student record system using array and strings //

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    char course[30];
    float marks;
};

int main()
{
    struct Student s[100];
    int n, i;

    printf("Enter number of students ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter details of Student %d\n", i + 1);

        printf("enter roll no ");
        scanf("%d", &s[i].roll);

        printf("enter name ");
        scanf("%s", s[i].name);

        printf("enter course ");
        scanf("%s", s[i].course);

        printf("enter marks ");
        scanf("%f", &s[i].marks);
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

    return 0;
}