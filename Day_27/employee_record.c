// Write a program to create employee management system //

#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee e;
    int choice;

    do {
        printf("\nEmployee Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            fp = fopen("employee.txt", "a");

            printf("Enter Employee ID ");
            scanf("%d", &e.id);

            printf("Enter Employee Name ");
            scanf("%s", e.name);

            printf("Enter Salary: ");
            scanf("%f", &e.salary);

            fprintf(fp, "%d %s %f\n", e.id, e.name, e.salary);
            fclose(fp);

            printf("Employee added successfully.\n");
        }

        else if (choice == 2) {
            fp = fopen("employee.txt", "r");

            if (fp == NULL) {
                printf("No employee record found.\n");
            } else {
                printf("\nID Name Salary\n");
                printf("\n");

                while (fscanf(fp, "%d %s %f", &e.id, e.name, &e.salary) != EOF) {
                    printf("%d\t%s\t%f\n", e.id, e.name, e.salary);
                }

                fclose(fp);
            }
        }

        else if (choice == 3) {
            printf("Exiting program.\n");
        }

        else {
            printf("Invalid choice.\n");
        }

    } 
    while (choice != 3);

    return 0;
}