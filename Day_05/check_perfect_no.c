// Write a program to check whether a number is perfect or not //

#include <stdio.h>

int main()
{
    int num, n , i, sum = 0;

    printf("enter a number");
    scanf("%d", &num);

    n = num;
    for(i = 1; i <num; i++)
    {
        if(num % i == 0)
        {
sum = sum + i;
        } 
    }

    if(sum == n)
    printf("perfect no.");

    else
    printf("not perfect no.");

    return 0;
}