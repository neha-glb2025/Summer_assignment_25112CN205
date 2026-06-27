// Write a program to create ATM simulation //

#include <stdio.h>

int main() 
{
    int pin = 1234, enteredPin, choice;
    float balance = 5000, amount;

    printf("Enter your PIN ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Wrong PIN");
        return 0;
    }

    do {
        printf("ATM Menu\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your balance is %f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit ");
                scanf("%f", &amount);
                balance = balance + amount;
                printf("Money deposited successfully\n");
                break;

            case 3:
                printf("Enter amount to withdraw ");
                scanf("%f", &amount);

                if (amount <= balance) {
                    balance = balance - amount;
                    printf("Please collect your cash\n");
                } else {
                    printf("Insufficient balance\n");
                }
                break;

            case 4:
                printf("Thank you for using ATM\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 4);

    return 0;
}