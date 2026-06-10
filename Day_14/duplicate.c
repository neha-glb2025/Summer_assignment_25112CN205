// Write a program to find duplicate no. in an array //

#include <stdio.h>

int main()
{
    int i, j, n;

    printf("enter no, of elements in array ");
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0 ; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
        printf("duplicate of %d found", a[i]);
        }
    }

    return 0;
}