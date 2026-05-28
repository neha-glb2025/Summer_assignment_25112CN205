// Write a program to Calculate sum of first N natural numbers //

#include <stdio.h>

int main()
{
    int num, i, sum = 0;

    printf("Enter a number ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}



