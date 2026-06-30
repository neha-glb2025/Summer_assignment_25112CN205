// Write a program to create mini employee management system //

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    char department[30];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n = 0, i, choice, searchId;

    do
    {
        printf("Employee Management System");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Employee ID ");
                scanf("%d", &emp[n].id);

                printf("Enter Employee Name ");
                scanf("%s", emp[n].name);

                printf("Enter Department ");
                scanf("%s", emp[n].department);

                printf("Enter Salary ");
                scanf("%f", &emp[n].salary);

                n++;
                printf("Employee Added Successfully");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Employee Records Found");
                }
                else
                {
                    printf("Employee Records");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nEmployee %d\n", i + 1);
                        printf("ID         : %d\n", emp[i].id);
                        printf("Name       : %s\n", emp[i].name);
                        printf("Department : %s\n", emp[i].department);
                        printf("Salary     : %.2f\n", emp[i].salary);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to Search ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++)
                {
                    if(emp[i].id == searchId)
                    {
                        printf("\nEmployee Found!\n");
                        printf("ID         : %d\n", emp[i].id);
                        printf("Name       : %s\n", emp[i].name);
                        printf("Department : %s\n", emp[i].department);
                        printf("Salary     : %.2f\n", emp[i].salary);
                        break;
                    }
                }

                if(i == n)
                {
                    printf("Employee Not Found");
                }
                break;

            case 4:
                printf("Exiting Program");
                break;

            default:
                printf("Invalid Choice");
        }

    } 
    while(choice != 4);

    return 0;
}