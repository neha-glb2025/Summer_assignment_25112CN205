// Write a program to remove duplicate from array //

#include <stdio.h>

int main()
{
int i, j, k, n;

printf("enter no. of elements in array ");
scanf("%d", &n);

int a[n];

printf("enter elements in array ");

for(i = 0; i < n; i++)
{
    scanf("%d", &a[i]);
}

for(i = 0; i < n; i++)
{
    for(j = i + 1; j < n; j++)
    {
        if(a[i] == a[j])
        {
            for(k = j; k  < n - 1; k++)
            {
                a[k] = a[k + 1];
            }

            n--;
            j--;

        }
    }
}

printf("array after removing duplication\n");

for(i = 0; i < n; i++)
{
    printf("%d ", a[i]);
}

return 0;
}