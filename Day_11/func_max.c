// Write a program to write a function to find maximum //

#include <stdio.h>

void max(int num1, int num2);
int main()
{
    int num1, num2;

    printf("enter two numbers");
    scanf("%d%d", &num1, &num2);

    max(num1, num2);

    return 0;
}

void max(int num1, int num2)
{
    if(num1 > num2)
    printf("max = %d", num1);

    else
    printf("max = %d", num2);
}