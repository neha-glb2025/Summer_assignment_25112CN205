// Write a program to rotate array right //

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

    printf("enter no. of elements that has to be rotate right ");
    scanf("%d", &num);

    for(i = 0; i < num; i++)
    {
        temp = a[n - 1];

        for(j = n - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }

        a[0] = temp;
    }

    printf("Array after right rotation\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}