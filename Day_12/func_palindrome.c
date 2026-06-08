// Write a program to write a function for palindrome //
#include <stdio.h>

void checkpalindrome(int num);
int main()
{
    int num;

    printf("enter a number ");
    scanf("%d", &num);

    checkpalindrome(num);

    return 0;
}

void checkpalindrome(int num)
{
    int r, reverse = 0, n;

    n = num;

    while(num > 0)
    {
        r = num % 10;
        reverse = reverse * 10 + r;
        num = num / 10;
    }

    if(reverse == n)
    printf("palindrome");

    else
    printf("not palindrome");
}