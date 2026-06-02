// Write a program to convert a number from decimal to binary //

#include <stdio.h>

int main()
{
    int num, r, binary = 0, c = 1;

    printf("enter a number ");
    scanf("%d", &num);

    while(num > 0)
    {
        r = num % 2;
        binary = binary + (r * c);
        c = c * 10;
         num = num / 2;
    }

    printf("binary no. = %d", binary);

    return 0;
}