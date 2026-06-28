// Write a program to create contact management system //

#include <stdio.h>
#include <stdlib.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    FILE *fp;
    struct Contact c;
    int n, i;

    fp = fopen("contact.txt", "w");

    if (fp == NULL) {
        printf("File cannot be opened");
        return 1;
    }

    printf("Enter number of contacts ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter Name ");
        scanf("%s", c.name);

        printf("Enter Phone Number ");
        scanf("%s", c.phone);

        fprintf(fp, "%s %s\n", c.name, c.phone);
    }

    fclose(fp);

    fp = fopen("contact.txt", "r");

    if (fp == NULL) {
        printf("File cannot be opened");
        return 1;
    }

    printf("\nContact Records\n");
    printf("Name Phone Number\n");

    while (fscanf(fp, "%s %s", c.name, c.phone) != EOF) {
        printf("%s %s\n", c.name, c.phone);
    }

    fclose(fp);

    return 0;
}