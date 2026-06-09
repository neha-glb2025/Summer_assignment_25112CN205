// Write a program to find sum and average of array //

#include <stdio.h>

int main()
{
    int i, n;

    printf("enter no. of elements in array ");
    scanf("%d", &n);

    int a[n], avg, sum = 0;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
sum = sum + a[i];
    }

    avg = sum / n;

    printf("sum of elements of array = %d\n", sum);
    printf("avg of elements = %d", avg);

    return 0;
}