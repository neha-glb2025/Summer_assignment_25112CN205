// Write a program to print the armstrong number in a range //

#include <stdio.h>
#include <math.h>

int main()
{
    int n, num, c = 0, i, arm = 0, r;

    printf("enter a limit ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
num = i;
c = 0;
arm = 0;

while(num > 0)
{
    num = num / 10;
    c++;
}

num = i;

while(num > 0)
{
    r = num % 10;
    arm = arm + pow(r, c);
    num = num / 10;
}

if(arm == i)
printf("%d ", i);
    }

    return 0;
}