// Write a program to check whether a number is prime or not //

#include <stdio.h>

int main()
{
    int num, i, r, count = 0;

    printf("enter a number ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++ )
    {
        if(num % i == 0)
        count = count + 1;
    }

    if(count == 2)
    printf("prime no.");

    else 
    printf(" not prime no.");

    return 0;
}