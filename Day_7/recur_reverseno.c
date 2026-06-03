// Write a program to recursive reverse number //

#include <stdio.h>

int reverse(int num, int rev);
int main()
{
    int num;

    printf("enter a number ");
    scanf("%d", &num);

    printf("reverse of no. = %d", reverse(num, 0));

    return 0;
}

int reverse(int num, int rev)
{
    if(num == 0)
    return rev;

    else
    return reverse(num / 10, (rev * 10) + (num % 10));
}