// Write a program to write function to find factorial //
 #include <stdio.h>
 
void factorial(int num);
int main()
{
    int num;

    printf("enter a number");
    scanf("%d" ,&num);

    factorial(num);

    return 0;
}

void factorial(int num)
{
    int i, fact = 1;

    for(i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    printf("factorial = %d", fact);
}