// Write a program to find largest and smallest element in array //

#include <stdio.h>

int main()
{
    int i, n;

    printf("enter no. of elements in array ");
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int large = a[0], small = a[0];

    for(i = 0; i < n; i++)
    {
        if(large < a[i])
        large = a[i];
    }

    printf("largest element = %d\n", large);

    for(i = 0; i < n; i++)
    {
        if(small > a[i])
        small = a[i];
    }

    printf("smallest element = %d", small);

    return 0;
}