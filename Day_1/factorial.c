// Write a program to find factorial of a number //

#include <stdio.h>

int main()
{
    int i, num, factorial = 1;

    printf("enter a number ");
    scanf("%d", &num);

    for(i=1; i <= num; i++)
    {
        factorial = factorial * i;
    }

    printf("factorial = %d", factorial);

    return 0;
}