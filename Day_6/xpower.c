// Write a program to print the x to the power n without using pow() //

#include <stdio.h>

int main()
{
    int x = 1, i, n, prod = 1;

    printf("enter value of x and n ");
    scanf("%d%d", &x, &n);

    for(i = 1; i <= n; i++)
    {
prod = prod * x;
    }

    printf("prod = %d", prod);

    return 0;

}
