// Write a program to create a marksheet management system //

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int m1, m2, m3, m4, m5;
    int total;
    float per;
};

int main()
{
    FILE *fp;
    struct Student s;

    fp = fopen("marksheet.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    printf("Enter Roll Number ");
    scanf("%d", &s.roll);

    printf("Enter Name ");
    scanf("%s", s.name);

    printf("Enter Marks of 5 Subjects: ");
    scanf("%d%d%d%d%d", &s.m1, &s.m2, &s.m3, &s.m4, &s.m5);

    s.total = s.m1 + s.m2 + s.m3 + s.m4 + s.m5;
    s.per = s.total / 5.0;

    fprintf(fp, "MARKSHEET\n");
    fprintf(fp, "Roll No : %d\n", s.roll);
    fprintf(fp, "Name    : %s\n", s.name);
    fprintf(fp, "Marks   : %d %d %d %d %d\n", s.m1, s.m2, s.m3, s.m4, s.m5);
    fprintf(fp, "Total   : %d\n", s.total);
    fprintf(fp, "Percentage : %.2f\n", s.per);

    if (s.per >= 90)
        fprintf(fp, "Grade : A+\n");
    else if (s.per >= 75)
        fprintf(fp, "Grade : A\n");
    else if (s.per >= 60)
        fprintf(fp, "Grade : B\n");
    else if (s.per >= 40)
        fprintf(fp, "Grade : C\n");
    else
        fprintf(fp, "Grade : Fail\n");

    fclose(fp);

    printf("Marksheet record saved successfully.");

    return 0;
}