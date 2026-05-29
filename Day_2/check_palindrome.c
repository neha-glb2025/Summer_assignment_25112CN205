// Write a program to check whether a number is palindrome or not //

#include <stdio.h>

int main()
{
    int num, r, n, reverse = 0;

    printf("enter a number ");
    scanf("%d", &num);

    n = num;

    while(num > 0)
    {
        r = num % 10;
        reverse = reverse * 10 + r;
        num = num / 10;
    }

    if(reverse == n)
    printf("number is palindrome");

    else
    printf("not palindrome");

    return 0;
}