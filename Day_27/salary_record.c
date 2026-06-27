// Write a program to create salary management system //

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float basic, hra, da, total;
};

int main() {
    FILE *fp;
    struct Employee e;
    int n, i;

    fp = fopen("salary.txt", "w");

    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    printf("Enter number of employees ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        printf("\nEnter Employee ID ");
        scanf("%d", &e.id);

        printf("Enter Employee Name ");
        scanf("%s", e.name);

        printf("Enter Basic Salary ");
        scanf("%f", &e.basic);

        e.hra = e.basic * 0.20;
        e.da = e.basic * 0.10;
        e.total = e.basic + e.hra + e.da;

        fprintf(fp, "%d %s %f %f %f %f\n",
                e.id, e.name, e.basic, e.hra, e.da, e.total);
    }

    fclose(fp);

    fp = fopen("salary.txt", "r");

    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    printf("\nSalary Records:\n");
    printf("ID Name Basic HRA DA Total\n");

    while (fscanf(fp, "%d %s %f %f %f %f",
                  &e.id, e.name, &e.basic, &e.hra, &e.da, &e.total) != EOF) {
        printf("%d %s %f %f %f %f\n",
               e.id, e.name, e.basic, e.hra, e.da, e.total);
    }

    fclose(fp);

    return 0;
}