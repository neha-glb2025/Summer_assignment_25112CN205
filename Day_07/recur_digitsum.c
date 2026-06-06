// Write a program to recursive sum of digits //

#include <stdio.h>

int sum(int n);
int main()
{
    int n;

    printf("enter a number ");
    scanf("%d", &n);

    printf("sum of digits = %d", sum(n));

    return 0;
}

int sum(int n)
{
    if(n == 0)
    return 0;

    else
    return ((n % 10) + sum(n / 10));
}