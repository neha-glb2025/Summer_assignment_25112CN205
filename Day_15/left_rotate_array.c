// Write a program to rotate array left //

#include <stdio.h>

int main()
{
    int i, j, n;

    printf("enter no. of elements in array ");
    scanf("%d", &n);

    int a[n], num, temp;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter no. of elements that has to be rotate left ");
    scanf("%d", &num);

    for(i = 0; i < num; i++)
    {
        temp = a[0];

        for(j = 0; j < n - 1; j++)
        {
            a[j] = a[j + 1];
        }

        a[n - 1] = temp;
    }

    printf("Array after left rotation\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
    
}