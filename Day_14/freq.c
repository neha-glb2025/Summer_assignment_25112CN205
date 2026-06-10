// Write a program to find the frequency of an element //

#include <stdio.h>

int main()
{
    int i, n;

    printf("enter no. of elements ");
    scanf("%d", &n);

    int a[n], num, count = 0;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter no. that freq has to to be find ");
    scanf("%d", &num);

    for(i = 0; i < n; i++)
    {
        if(a[i] == num)
        count++;
    }

    printf("frequency of %d = %d", num, count);

    return 0;
}