// Write a program to find second largest element in an array //

#include <stdio.h>

int main()
{
    int i, n;

    printf("enter no. of elements in array ");
    scanf("%d", &n);

    int a[n], max1, max2;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[0] > a[1])
        {
            max1 = a[0];
            max2 = a[1];
        }

        else
        {
            max1 = a[1];
            max2 = a[0];
        }
    }

    for(i = 2; i < n; i++)
    {
        if(a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }

        else if(a[i] > max2)
        {
            max2 = a[i];
        }
    }

    printf("largest = %d\n", max1);
    printf("second largest = %d", max2);

    return 0;

}