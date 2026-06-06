// Write a program to count set bits in a number //

#include <stdio.h>

int main()
{
    int num, r, count = 0;

    printf("enter a number ");
    scanf("%d", &num);

    while(num > 0)
    {
        r = num % 2;
        num = num / 2;
    
        if(r == 1)
        count++;
    }

    printf("no. of set bits = %d", count);

    return 0;
}