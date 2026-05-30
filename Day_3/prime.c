// Write a program to print the prime no. in a range //

#include <stdio.h>

int main()
{
    int num, i, j, r, count = 0;

    printf("enter a range ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {    
        count = 0;
        for(j = 1; j <= i; j++)
        {
         if(i % j == 0)
         count++;
        }

        if(count == 2)
        printf("%d ", i);
    }

    return 0;
}