// Write a program to recursive factorial //

#include <stdio.h>

int factorial(int);
int main()
{
    int n, result;

    printf("enter the number ");
    scanf("%d", &n);

    result = factorial(n);

    printf("the factorial is = %d", result);
    return 0;
}

int factorial(int n)
{
    if(n == 0)
    return(1);

    else
return(n * factorial(n - 1));
}
