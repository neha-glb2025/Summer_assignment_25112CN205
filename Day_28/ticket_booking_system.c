// Write a program to create ticket booking system //

#include <stdio.h>
#include <stdlib.h>

struct Ticket {
    int ticketNo;
    char name[50];
    char destination[50];
};

int main() {
    FILE *fp;
    struct Ticket t;
    int n, i;

    fp = fopen("ticket.txt", "w");

    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    printf("Enter number of bookings ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter Ticket Number ");
        scanf("%d", &t.ticketNo);

        printf("Enter Passenger Name ");
        scanf("%s", t.name);

        printf("Enter Destination ");
        scanf("%s", t.destination);

        fprintf(fp, "%d %s %s\n",
                t.ticketNo, t.name, t.destination);
    }

    fclose(fp);

    fp = fopen("ticket.txt", "r");

    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    printf("\nTicket Booking Records\n");
    printf("Ticket No Name Destination\n");

    while (fscanf(fp, "%d %s %s",
                  &t.ticketNo, t.name, t.destination) != EOF) {
        printf("%d\t\t%s\t%s\n",
               t.ticketNo, t.name, t.destination);
    }

    fclose(fp);

    return 0;
}