// Write a program to find the largest prime factor //

#include <stdio.h>

int main()
{
    int num, i, j, c = 0, largest;

    printf("enter a number ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            c = 0;
            for(j = 1; j <= i; j++)
            {
if(i % j == 0)
c++;
            }

            if(c == 2)
            largest = i;
        }
    }

    printf("largest prime factor = %d", largest);

    return 0;
}