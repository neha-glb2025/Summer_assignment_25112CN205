// Write a program to create student record management system //

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    FILE *fp;
    struct Student s;
    int choice;

    do
    {
        printf("Student Record Management System\n");
        printf("1. Add Student Record\n");
        printf("2. Display Student Records\n");
        printf("3. Exit\n");
        printf("Enter your choice ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                fp = fopen("student.txt", "a");

                printf("Enter Roll No ");
                scanf("%d", &s.roll);

                printf("Enter Name ");
                scanf("%s", s.name);

                printf("Enter Marks ");
                scanf("%f", &s.marks);

                fprintf(fp, "%d %s %.2f\n", s.roll, s.name, s.marks);
                fclose(fp);

                printf("Record Saved Successfully.\n");
                break;

            case 2:
                fp = fopen("student.txt", "r");

                if(fp == NULL)
                {
                    printf("No Records Found.\n");
                    break;
                }

                printf("\nRoll No\tName\tMarks\n");
                printf("\n");

                while(fscanf(fp, "%d %s %f", &s.roll, s.name, &s.marks) != EOF)
                {
                    printf("%d\t%s\t%.2f\n", s.roll, s.name, s.marks);
                }

                fclose(fp);
                break;

            case 3:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 3);

    return 0;
}