// Write a program to input and display array // 

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

    printf("content of array is ");
    for(i = 0; i < n; i++)
    {
printf("%d ", a[i]);
    }

    return 0;
}