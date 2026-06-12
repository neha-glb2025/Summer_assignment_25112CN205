// Write a program to find maximum frequency element in an array //

#include <stdio.h>

int main()
{
    int i, j, n, c;

    printf("enter no. of elements in array ");
    scanf("%d", &n);

    int a[n], maxfreq = 0;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

int maxelement = a[0];

    for(i = 0; i < n; i++)
    {
        c = 1;
        for(j = i + 1; j < n; j++)
    {
        if(a[i] == a[j])
        c++;
    }

    if(c > maxfreq)
    {
        maxelement = a[i];
        maxfreq = c;
    }
    }

printf("max freq element = %d\n", maxelement);
printf("max freq = %d", maxfreq);

return 0;
}