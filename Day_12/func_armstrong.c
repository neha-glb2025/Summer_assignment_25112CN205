#include <stdio.h>
#include <math.h>

void checkarmstrong(int num);
int main()
{
    int num;

    printf("enter a number ");
    scanf("%d", &num);

    checkarmstrong(num);

    return 0;
}

void checkarmstrong(int num)
{
    int C = 0, r, n, arm = 0;

    n = num;

    while(num > 0)
    {
r = num % 10;
C++;
num = num / 10;
    }
 
    num = n;

    while(num > 0)
    {
        r = num % 10;
        arm = arm + pow(r, C);
        num = num / 10;
    }

    if(arm == n)
    printf("armstrong");

    else
    printf("not armstrong");
}