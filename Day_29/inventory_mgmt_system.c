// Write a program to create inventory management system //

#include <stdio.h>

struct Item {
    int id, qty;
    char name[50];
    float price;
};

int main() {
    struct Item i;
    FILE *fp;
    int choice, searchId;

    do {
        printf("Inventory Management System\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                fp = fopen("inventory.dat", "ab");

                printf("Enter Item ID ");
                scanf("%d", &i.id);

                printf("Enter Item Name ");
                scanf("%s", i.name);

                printf("Enter Quantity ");
                scanf("%d", &i.qty);

                printf("Enter Price ");
                scanf("%f", &i.price);

                fwrite(&i, sizeof(i), 1, fp);
                fclose(fp);

                printf("Item Added Successfully");
                break;

            case 2:
                fp = fopen("inventory.dat", "rb");

                printf("\nID Name Qty Price\n");

                while(fread(&i, sizeof(i), 1, fp)) 
                {
                    printf("%d\t%s\t%d\t%.2f\n", i.id, i.name, i.qty, i.price);
                }

                fclose(fp);
                break;

            case 3:
                fp = fopen("inventory.dat", "rb");

                printf("Enter Item ID to Search ");
                scanf("%d", &searchId);

                while(fread(&i, sizeof(i), 1, fp)) {
                    if(i.id == searchId) {
                        printf("Item Found!\n");
                        printf("ID: %d\n", i.id);
                        printf("Name: %s\n", i.name);
                        printf("Quantity: %d\n", i.qty);
                        printf("Price: %.2f\n", i.price);
                        break;
                    }
                }

                fclose(fp);
                break;

            case 4:
                printf("Exiting");
                break;

            default:
                printf("Invalid Choice");
        }

    } 
    while(choice != 4);

    return 0;
}