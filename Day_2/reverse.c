// Write a program to find reverse of a number //

#include <stdio.h>

int main()
{
    int num, r, reverse = 0;

    printf("enter a number ");
    scanf("%d", &num);

    while(num > 0)
    {
        r = num % 10;
        reverse = reverse * 10 + r;
        num = num / 10;
    }

    printf("reverse of no. = %d",reverse);

    return 0;
}