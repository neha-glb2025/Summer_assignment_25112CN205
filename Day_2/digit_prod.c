// Write a program to find the product of digits //

#include <stdio.h>

int main()
{
    int num, r, prod = 1;

    printf("enter a number ");
    scanf("%d", &num);

    while(num > 0)
    {
r = num % 10;
prod = prod * r;
num = num / 10;
    }

    printf("product of digits of no. = %d", prod);

    return 0;
}