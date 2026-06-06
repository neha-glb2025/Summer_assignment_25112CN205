// Write a program to convert a number from binary to decimal //

#include <stdio.h>
#include <math.h>

int main()
{
    int num, deci = 0, r , c = 0;

    printf("enter a binary no.");
    scanf("%d", &num);

    while(num > 0)
    {
        r = num % 10;
        deci = deci + r * (pow(2, c)); 
        c++;
        num = num / 10;
    }

    printf("decimal no. = %d", deci);

    return 0;
}