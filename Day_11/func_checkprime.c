// Write a program to write function to check whether a no. is prime or not //
#include <stdio.h>

void checkprime(int num);
int main()
{
    int num;

    printf("enter a number");
    scanf("%d", &num);

    checkprime(num);

    return 0;
}

void checkprime(int num)
{
    int i, C = 0;

    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)
        C++;
    }

    if(C == 2)
    printf("prime no.");

    else
    printf("not prime");
}