// Write a program to write a function for perfect number //

#include <stdio.h>

void checkperfect(int num);
int main()
{
    int num;

    printf("enter a number ");
    scanf("%d", &num);

    checkperfect(num);

    return 0;
}

void checkperfect(int num)
{
    int i, sum = 0, n;

    n = num;

    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
        sum = sum + i;   
    }

    if(sum == n)
    printf("strong no.");

    else
    printf("not strong no.");
}