// Write a program to binary search //

#include <stdio.h>

int main()
{
    int num, i, n, beg, end, mid, found = 0;

    printf("enter the number of elements in the array ");
    scanf("%d", &n);

    int a[n];

    printf("enter the elements ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter the no. that has to be searched ");
    scanf("%d", &num);

    beg = 0; end = n - 1;

    while(beg <= end)
    {
        mid = (beg + end) / 2;

        if(a[mid] == num)
        {
            printf("%d is present at index = %d ", num, mid);
            found = 1;
            break;
        }

        else if(a[mid] > num)
        end = mid - 1;

        else
        beg = mid + 1;
    }

    if(beg > end && found == 0)
    printf("%d does not exist in the array", num);

    return 0;
}