// Write a program to linear search //

#include <stdio.h>

int main()
{
    int i, n;

    printf("enter no. of elements in array ");
    scanf("%d", &n);

    int a[n], found = 0, pos, num;

    for(i = 0; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter the no. that has to be searched ");
    scanf("%d", &num);

    for(i = 0; i < n; i++)
    {
        if(a[i] == num)
        {
            found = 1;
            pos = i;

            printf("%d found at the index = %d", num, pos);
            break;
        }
    }

    if(found == 0)
    printf("%d does not found in array" , num);

    return 0;
}