// Write a program to move zeroes to end //

#include <stdio.h>

int main()
{
    int i, j = 0, n, temp;

    printf("enter no. of elements in array ");
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] != 0)
        {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
         j++;
        }  
    }

    printf("array after move zeroes to end ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
    
}