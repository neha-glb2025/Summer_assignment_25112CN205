// Write a program to recursive fibonacci //

#include <stdio.h>

int fib(int);
int main()
{
    int n, i;

    printf("enter how many terms to print ");
    scanf("%d", &n);

    for(i = 0; i <= n - 1; i++)
    {
        printf("%d", fib(i));
    }

    return 0;
}

int fib(int i)
{
    if(i == 0)
    return 0;

    if(i == 1)
    return 1;

    else
    return ((fib(i - 1) + fib(i - 2)));
}