// Write a program to count even and odd elements in an array //

#include <stdio.h>

int main()
{
    int i, n;

    printf("enter no. of elements in an array ");
    scanf("%d", &n);

    int a[n], c_even = 0, c_odd = 0;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        c_even++;

        else
        c_odd++;
    }

    printf("no. of even elements = %d\n", c_even);
    printf("no. of odd elements = %d", c_odd);

    return 0;
}