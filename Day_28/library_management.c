// Write a program to create library management system //

#include <stdio.h>
#include <stdlib.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    FILE *fp;
    struct Book b;
    int n, i;

    fp = fopen("library.txt", "w");

    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    printf("Enter number of books ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter Book ID ");
        scanf("%d", &b.id);

        printf("Enter Book Title ");
        scanf("%s", b.title);

        printf("Enter Author Name ");
        scanf("%s", b.author);

        fprintf(fp, "%d %s %s\n", b.id, b.title, b.author);
    }

    fclose(fp);

    fp = fopen("library.txt", "r");

    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    printf("\nLibrary Records\n");
    printf("ID Title Author\n");

    while (fscanf(fp, "%d %s %s", &b.id, b.title, b.author) != EOF) {
        printf("%d\t%s\t%s\n", b.id, b.title, b.author);
    }

    fclose(fp);

    return 0;
}