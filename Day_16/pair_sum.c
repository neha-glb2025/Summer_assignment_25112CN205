// Write a program to find pair with given sun //

#include <stdio.h>

int main()
{
int i, j, n, sum;

printf("enter no. of elements in array ");
scanf("%d", &n);

printf("enter sum of pair ");
scanf("%d", &sum);

int a[n];

printf("enter no. of elements in array ");

for(i = 0; i < n; i++)
{
    scanf("%d", &a[i]);
}

for(i = 0; i < n; i++)
{
    for(j = i + 1; j < n; j++)
    {
        if(a[i] + a[j] == sum)
        printf("(%d, %d) ", a[i], a[j]);
    }
}

return 0;
}