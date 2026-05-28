// Write a program to count digits in a number //

#include <stdio.h>

int main()
{
    int num, i, count=0;

    printf("enter a number ");
    scanf("%d", &num);

    while(num > 0)
    {
        num = num / 10;
        count = count + 1;
        
    }

    printf("no. of digits = %d", count);

    return 0;
}