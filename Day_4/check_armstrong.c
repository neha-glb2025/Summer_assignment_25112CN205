// Write a program to check whether a number is armstrong or not //

#include <stdio.h>
#include <math.h>

int main()
{
    int n, r, c = 0, arm = 0, num;

    printf(" enter a number ");
    scanf("%d", &n);

    num = n;

    while(n > 0)
    {
        n = n / 10;
        c++;
    }

    n = num;

    while(n > 0)
    {
        r = n % 10;
        arm = arm + pow(r, c);
        n = n / 10;
    }

    if(arm == num)
    printf("armstrong");

    else 
    printf("not armstrong");

    return 0;
}