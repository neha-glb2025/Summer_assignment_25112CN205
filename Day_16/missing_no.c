// Write a program to find missing number in an array //

#include <stdio.h>

int main()
{
    int i, n;

    printf("enter no. of elements in an array ");
    scanf("%d", &n);

    int a[n], sum = 0, total;

    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
         sum += a[i];
    }

    total = n * (n + 1) / 2;

    printf("Missing number = %d", total - sum);

    return 0;


}