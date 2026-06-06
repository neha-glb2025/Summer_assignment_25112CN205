// Write a number to check whether a number is strong no. or not //

#include <stdio.h>

int main()
{
    int num, n, r, i, sum = 0, prod = 1;

    printf("enter a number ");
    scanf("%d", &num);

    n = num;

    while(num > 0)
    {
        prod = 1;
      r = num % 10;
      num = num / 10;

      for(i = 1; i <= r ;i++)
      {
prod = prod * i;
      }

      sum = sum + prod;
    }

    if(sum == n)
    printf("strong no.");

    else
    printf("not strong no.");

    return 0;
}