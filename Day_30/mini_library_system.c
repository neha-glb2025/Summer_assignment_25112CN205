// Write a program to create mini library system //

#include <stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    int quantity;
};

int main()
{
    struct Book b[100];
    int n = 0, i, choice, searchId;

    do
    {
        printf("Library Management System");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Book ID ");
                scanf("%d", &b[n].id);

                printf("Enter Book Title ");
                scanf("%s", b[n].title);

                printf("Enter Author Name ");
                scanf("%s", b[n].author);

                printf("Enter Quantity ");
                scanf("%d", &b[n].quantity);

                n++;
                printf("Book Added Successfully");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Books Available");
                }
                else
                {
                    printf("Library Records");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nBook %d\n", i + 1);
                        printf("Book ID   : %d\n", b[i].id);
                        printf("Title     : %s\n", b[i].title);
                        printf("Author    : %s\n", b[i].author);
                        printf("Quantity  : %d\n", b[i].quantity);
                    }
                }
                break;

            case 3:
                printf("\nEnter Book ID to Search ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++)
                {
                    if(b[i].id == searchId)
                    {
                        printf("\nBook Found!\n");
                        printf("Book ID   : %d\n", b[i].id);
                        printf("Title     : %s\n", b[i].title);
                        printf("Author    : %s\n", b[i].author);
                        printf("Quantity  : %d\n", b[i].quantity);
                        break;
                    }
                }

                if(i == n)
                {
                    printf("Book Not Found");
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