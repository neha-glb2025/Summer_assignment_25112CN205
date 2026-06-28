// Write a program to create bank account system //

#include <stdio.h>
#include <stdlib.h>

struct Bank 
{
    int accNo;
    char name[50];
    float balance;
};

int main() {
    FILE *fp;
    struct Bank b;
    int n, i;

    fp = fopen("bank.txt", "w");

    if (fp == NULL) {
        printf("File cannot be opened");
        return 1;
    }

    printf("Enter number of accounts ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter Account Number ");
        scanf("%d", &b.accNo);

        printf("Enter Account Holder Name ");
        scanf("%s", b.name);

        printf("Enter Balance ");
        scanf("%f", &b.balance);

        fprintf(fp, "%d %s %f\n", b.accNo, b.name, b.balance);
    }

    fclose(fp);

    fp = fopen("bank.txt", "r");

    if(fp == NULL) {
        printf("File cannot be opened");
        return 1;
    }

    printf("\nBank Account Records\n");
    printf("Acc No\tName\tBalance\n");

    while(fscanf(fp, "%d %s %f",
                 &b.accNo, b.name, &b.balance) != EOF) {
        printf("%d %s %f\n",
               b.accNo, b.name, b.balance);
    }

    fclose(fp);

    return 0;
}