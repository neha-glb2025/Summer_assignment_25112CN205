// Write a program to write the function to find sum of two numbers //

#include <stdio.h>
 
void sum(int num1, int num2);
int main()
{
    int num1, num2;

    printf("enter two numbers ");
    scanf("%d%d", &num1, &num2);

    sum(num1, num2); 
    
    return 0;
}

void sum(int num1, int num2)
{
int add;

add = num1 + num2;

printf("add = %d", add);
}