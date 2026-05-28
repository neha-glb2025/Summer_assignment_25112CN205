// Write a program to print multiplication table of a given number //

#include <stdio.h>

int main()
{
    int num, i, prod;

    printf("enter a number ");
    scanf("%d", &num);

    for(i = 1; i <= 10; i++)
    {
prod = num * i;
printf("%d * %d = %d\n", num, i, prod);
    }

    return 0;
}